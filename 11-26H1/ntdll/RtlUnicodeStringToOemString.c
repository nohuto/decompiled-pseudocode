/*
 * XREFs of RtlUnicodeStringToOemString @ 0x1800363A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x180034070 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToCustomCPN @ 0x180034800 (RtlUnicodeToCustomCPN.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18003B340 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  char **p_Buffer; // rdi
  NTSTATUS result; // eax
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned __int16 *v12; // r8
  unsigned int v13; // r10d
  _BYTE *v14; // r11
  __int16 *v15; // rcx
  NTSTATUS v16; // ebx
  unsigned __int16 v17; // dx
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  NTSTATUS v19; // [rsp+30h] [rbp-38h]
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v21; // [rsp+80h] [rbp+18h]

  v21 = AllocateDestinationString;
  v20 = 0;
  RtlUnicodeToMultiByteSize(&v20, SourceString->Buffer, SourceString->Length);
  v7 = v20 + 1;
  v20 = v7;
  if ( (unsigned int)v7 > 0xFFFF )
    return -1073741584;
  p_Buffer = &DestinationString->Buffer;
  LOBYTE(v6) = AllocateDestinationString;
  result = AllocateOrValidateCharStringBuffer(v6, v7, &DestinationString->Buffer, &DestinationString->MaximumLength);
  v19 = result;
  if ( result >= 0 )
  {
    if ( (unsigned __int8)RtlpIsUtf8Process(v10, SourceString->Length, SourceString->Buffer) )
    {
      v15 = (__int16 *)&Utf8TableInfo;
    }
    else
    {
      _InterlockedOr(v18, 0);
      v15 = &GlobalRtlNlsState;
    }
    v16 = RtlUnicodeToCustomCPN((__int64)v15, v14, v13, &v20, v12, v11);
    v19 = v16;
    if ( v16 >= 0 )
    {
      v17 = v20;
      (*p_Buffer)[v20] = 0;
      DestinationString->Length = v17;
      v16 = 0;
      v19 = 0;
    }
    if ( v16 < 0 )
    {
      if ( AllocateDestinationString )
      {
        RtlpSysVolFree(*p_Buffer);
        *p_Buffer = 0LL;
        DestinationString->MaximumLength = 0;
      }
    }
    return v16;
  }
  return result;
}
