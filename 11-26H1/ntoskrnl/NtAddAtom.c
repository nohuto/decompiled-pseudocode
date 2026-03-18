/*
 * XREFs of NtAddAtom @ 0x140841650
 * Callers:
 *     DifNtAddAtomWrapper @ 0x14066A210 (DifNtAddAtomWrapper.c)
 * Callees:
 *     NtAddAtomEx @ 0x140841670 (NtAddAtomEx.c)
 */

__int64 __fastcall NtAddAtom(void *a1, size_t a2, void *a3)
{
  return NtAddAtomEx(a1, a2, a3);
}
