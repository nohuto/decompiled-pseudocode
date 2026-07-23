/*
 * XREFs of AllocateOrValidateCharStringBuffer @ 0x1800258B0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180021500 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18009F0D0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18010D5E0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x180140490 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1801405A0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 */

__int64 __fastcall AllocateOrValidateCharStringBuffer(char a1, unsigned int a2, _QWORD *a3, _WORD *a4)
{
  __int16 v4; // bx
  PVOID Atom; // rax

  v4 = a2;
  if ( !a1 )
  {
    if ( a2 > (unsigned __int16)*a4 || !*a3 )
      return 2147483653LL;
    return 0LL;
  }
  Atom = RtlpAllocateAtom(a2);
  *a3 = Atom;
  if ( Atom )
  {
    *a4 = v4;
    return 0LL;
  }
  *a4 = 0;
  return 3221225495LL;
}
