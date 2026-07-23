/*
 * XREFs of ZwFindAtom @ 0x140728240
 * Callers:
 *     DifZwFindAtomWrapper @ 0x1406A9DF0 (DifZwFindAtomWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFindAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName);
}
