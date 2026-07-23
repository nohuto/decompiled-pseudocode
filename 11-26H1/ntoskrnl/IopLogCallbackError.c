/*
 * XREFs of IopLogCallbackError @ 0x1405CC374
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1405CB4D8 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405CB638 (IopDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     IopWheaSelLogError @ 0x1405CCA30 (IopWheaSelLogError.c)
 */

__int64 __fastcall IopLogCallbackError(unsigned int a1, unsigned int a2, __int64 a3)
{
  MmIsAddressValidEx(*(_QWORD *)(a3 + 24));
  return IopWheaSelLogError(a1, a2, 0LL);
}
