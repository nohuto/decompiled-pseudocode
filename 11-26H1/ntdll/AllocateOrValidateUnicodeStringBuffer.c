/*
 * XREFs of AllocateOrValidateUnicodeStringBuffer @ 0x180025C90
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x18009EC30 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 */

__int64 __fastcall AllocateOrValidateUnicodeStringBuffer(char a1, unsigned int a2, _QWORD *a3, _WORD *a4)
{
  __int16 v4; // di
  PVOID Atom; // rax

  v4 = a2;
  if ( a1 )
  {
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
  else
  {
    if ( a2 <= (unsigned __int16)*a4 && *a3 )
      return 0LL;
    return 2147483653LL;
  }
}
