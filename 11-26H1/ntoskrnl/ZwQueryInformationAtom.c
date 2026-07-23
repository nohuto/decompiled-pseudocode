/*
 * XREFs of ZwQueryInformationAtom @ 0x14072AA20
 * Callers:
 *     DifZwQueryInformationAtomWrapper @ 0x1406B4900 (DifZwQueryInformationAtomWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryInformationAtom(
        RTL_ATOM Atom,
        ATOM_INFORMATION_CLASS AtomInformationClass,
        PVOID AtomInformation,
        ULONG AtomInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Atom);
}
