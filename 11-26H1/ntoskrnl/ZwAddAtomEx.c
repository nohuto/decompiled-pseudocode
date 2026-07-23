/*
 * XREFs of ZwAddAtomEx @ 0x140728CE0
 * Callers:
 *     DifZwAddAtomExWrapper @ 0x14069C130 (DifZwAddAtomExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddAtomEx(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName);
}
