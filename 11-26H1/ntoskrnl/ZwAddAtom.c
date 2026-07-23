/*
 * XREFs of ZwAddAtom @ 0x1407288A0
 * Callers:
 *     DifZwAddAtomWrapper @ 0x14069C2C0 (DifZwAddAtomWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName);
}
