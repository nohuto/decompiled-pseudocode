/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x1800DA800
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 *     CountUTF8ToUnicode @ 0x1800266E0 (CountUTF8ToUnicode.c)
 */

NTSTATUS __cdecl RtlUTF8StringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PUTF8_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  int Length; // edx
  NTSTATUS result; // eax
  ULONG v8; // edi
  wchar_t *Atom; // rax
  ULONG MaximumLength; // ecx
  int v11; // edi
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  Length = SourceString->Length;
  UnicodeStringActualByteCount = 0;
  result = CountUTF8ToUnicode(SourceString->Buffer, Length, &UnicodeStringActualByteCount);
  if ( result >= 0 )
  {
    v8 = UnicodeStringActualByteCount + 2;
    UnicodeStringActualByteCount = v8;
    if ( v8 > 0xFFFE )
      return -1073741584;
    if ( AllocateDestinationString )
    {
      Atom = (wchar_t *)RtlpAllocateAtom(v8);
      DestinationString->Buffer = Atom;
      if ( !Atom )
        return -1073741801;
      DestinationString->MaximumLength = v8;
      LOWORD(MaximumLength) = v8;
    }
    else
    {
      MaximumLength = DestinationString->MaximumLength;
      if ( v8 > MaximumLength )
        return -2147483643;
    }
    v11 = RtlUTF8ToUnicodeN(
            DestinationString->Buffer,
            (unsigned __int16)MaximumLength,
            &UnicodeStringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v11 < 0 )
    {
      if ( AllocateDestinationString )
      {
        RtlpSysVolFree(DestinationString->Buffer);
        DestinationString->Buffer = 0LL;
        DestinationString->MaximumLength = 0;
      }
      return v11;
    }
    v12 = UnicodeStringActualByteCount;
    v13 = DestinationString->MaximumLength;
    DestinationString->Length = UnicodeStringActualByteCount;
    if ( (unsigned int)v12 < v13 )
    {
      v11 = 0;
      DestinationString->Buffer[v12 >> 1] = 0;
      return v11;
    }
    return -2147483643;
  }
  return result;
}
