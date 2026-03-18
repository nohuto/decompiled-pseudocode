/*
 * XREFs of IopLogCallbackError @ 0x1405C9AA4
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1405C8C08 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405C8D68 (IopDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 *     IopWheaSelLogError @ 0x1405CA160 (IopWheaSelLogError.c)
 */

__int64 __fastcall IopLogCallbackError(unsigned int a1, unsigned int a2, __int64 a3)
{
  MmIsAddressValidEx(*(_QWORD *)(a3 + 24));
  return IopWheaSelLogError(a1, a2, 0LL);
}
