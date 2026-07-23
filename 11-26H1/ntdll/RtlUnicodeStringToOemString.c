/*
 * XREFs of RtlUnicodeStringToOemString @ 0x180021500
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlUnicodeToMultiByteSize @ 0x18001F1D0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToCustomCPN @ 0x18001F960 (RtlUnicodeToCustomCPN.c)
 *     AllocateOrValidateCharStringBuffer @ 0x1800258B0 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  PVOID *p_Buffer; // rdi
  NTSTATUS result; // eax
  __int64 v10; // rcx
  ULONG BytesInUnicodeString; // edx
  WCHAR *UnicodeString; // r8
  ULONG v13; // r10d
  CHAR *v14; // r11
  _CPTABLEINFO *v15; // rcx
  int v16; // ebx
  unsigned __int16 v17; // dx
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  NTSTATUS v19; // [rsp+30h] [rbp-38h]
  ULONG BytesInCustomCPString; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v21; // [rsp+80h] [rbp+18h]

  v21 = AllocateDestinationString;
  BytesInCustomCPString = 0;
  RtlUnicodeToMultiByteSize(&BytesInCustomCPString, SourceString->Buffer, SourceString->Length);
  v7 = BytesInCustomCPString + 1;
  BytesInCustomCPString = v7;
  if ( (unsigned int)v7 > 0xFFFF )
    return -1073741584;
  p_Buffer = (PVOID *)&DestinationString->Buffer;
  LOBYTE(v6) = AllocateDestinationString;
  result = AllocateOrValidateCharStringBuffer(v6, v7, &DestinationString->Buffer, &DestinationString->MaximumLength);
  v19 = result;
  if ( result >= 0 )
  {
    if ( (unsigned __int8)RtlpIsUtf8Process(v10, SourceString->Length, SourceString->Buffer) )
    {
      v15 = (_CPTABLEINFO *)&Utf8TableInfo;
    }
    else
    {
      _InterlockedOr(v18, 0);
      v15 = &GlobalRtlNlsState;
    }
    v16 = RtlUnicodeToCustomCPN(v15, v14, v13, &BytesInCustomCPString, UnicodeString, BytesInUnicodeString);
    v19 = v16;
    if ( v16 >= 0 )
    {
      v17 = BytesInCustomCPString;
      *((_BYTE *)*p_Buffer + BytesInCustomCPString) = 0;
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
