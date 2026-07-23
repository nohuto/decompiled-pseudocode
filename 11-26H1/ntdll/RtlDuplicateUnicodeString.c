/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1800DC3B0
 * Callers:
 *     RtlpTpIoDllProcessUnloads @ 0x1800B5788 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlDuplicateUnicodeString(ULONG Flags, PUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r8
  unsigned __int16 Length; // di
  wchar_t *v7; // rsi
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // cx
  int v10; // r15d
  unsigned __int16 v11; // bx
  wchar_t *Atom; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = 0;
  if ( StringIn )
  {
    if ( (StringIn->Length & 1) != 0
      || (MaximumLength = StringIn->MaximumLength, (MaximumLength & 1) != 0)
      || StringIn->Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringIn->Buffer && (StringIn->Length || MaximumLength) )
    {
      result = -1073741811;
    }
  }
  if ( result >= 0 )
  {
    if ( StringIn )
      Length = StringIn->Length;
    v10 = v5 & 1;
    if ( (v5 & 1) == 0 || Length != 0xFFFE )
    {
      if ( (v5 & 1) != 0 )
        v11 = Length + 2;
      else
        v11 = Length;
      if ( (v5 & 2) == 0 && !Length )
        v11 = 0;
      if ( v11 )
      {
        Atom = (wchar_t *)RtlpAllocateAtom(v11);
        v7 = Atom;
        if ( !Atom )
          return -1073741801;
        if ( Length )
          memmove(Atom, StringIn->Buffer, Length);
        if ( v10 )
          v7[(unsigned __int64)Length >> 1] = 0;
      }
      StringOut->MaximumLength = v11;
      StringOut->Length = Length;
      StringOut->Buffer = v7;
      return 0;
    }
    return -1073741562;
  }
  return result;
}
