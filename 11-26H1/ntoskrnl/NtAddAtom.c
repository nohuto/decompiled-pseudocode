/*
 * XREFs of NtAddAtom @ 0x140847890
 * Callers:
 *     DifNtAddAtomWrapper @ 0x14066DDF0 (DifNtAddAtomWrapper.c)
 * Callees:
 *     NtAddAtomEx @ 0x1408478B0 (NtAddAtomEx.c)
 */

NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, Length, Atom, 0);
}
