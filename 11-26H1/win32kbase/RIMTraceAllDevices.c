/*
 * XREFs of RIMTraceAllDevices @ 0x1401C387C
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x1400E9B8C (RIMSyncWalkRimObjList.c)
 */

void RIMTraceAllDevices()
{
  if ( dword_1402A9E40 && (qword_1402A9E50 & 0x100) != 0 && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
    RIMSyncWalkRimObjList(
      1,
      0LL,
      (void (__fastcall *)(void *, __int64))lambda_c51e6e2186cc259f124bbf87b89b0c07_::_lambda_invoker_cdecl_);
}
