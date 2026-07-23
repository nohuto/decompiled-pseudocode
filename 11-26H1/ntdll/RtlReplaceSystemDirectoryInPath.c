/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x180020470
 * Callers:
 *     LdrpGetModuleName @ 0x18001EF80 (LdrpGetModuleName.c)
 * Callees:
 *     RtlpWow64SelectSystem32PathInternal @ 0x180021618 (RtlpWow64SelectSystem32PathInternal.c)
 *     RtlFindUnicodeSubstring @ 0x180021DA0 (RtlFindUnicodeSubstring.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

ULONG __cdecl RtlReplaceSystemDirectoryInPath(
        PUNICODE_STRING Destination,
        USHORT Machine,
        USHORT TargetMachine,
        BOOLEAN IncludePathSeperator)
{
  USHORT v5; // si
  ULONG result; // eax
  __int64 v8; // rdx
  ULONG v9; // ebx
  unsigned int v10; // edi
  PWCHAR UnicodeSubstring; // rax
  _UNICODE_STRING SearchString; // [rsp+20h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-18h] BYREF

  v5 = Machine;
  *(_OWORD *)Src = 0LL;
  SearchString = 0LL;
  if ( Machine == TargetMachine )
    return 0;
  LOBYTE(Machine) = IncludePathSeperator;
  result = RtlpWow64SelectSystem32PathInternal(TargetMachine, Machine, Src);
  v9 = 0;
  if ( (result & 0x80000000) == 0 )
  {
    LOBYTE(v8) = IncludePathSeperator;
    result = RtlpWow64SelectSystem32PathInternal(v5, v8, &SearchString);
    if ( (result & 0x80000000) == 0 )
    {
      v10 = LOWORD(Src[0]);
      if ( SearchString.Length != LOWORD(Src[0]) )
        return -1073741811;
      UnicodeSubstring = RtlFindUnicodeSubstring(Destination, &SearchString, 1u);
      if ( UnicodeSubstring )
        memmove(UnicodeSubstring, Src[1], v10);
      return v9;
    }
  }
  return result;
}
