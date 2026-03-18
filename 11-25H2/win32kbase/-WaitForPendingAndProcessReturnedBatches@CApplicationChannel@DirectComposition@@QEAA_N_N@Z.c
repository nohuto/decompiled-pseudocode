/*
 * XREFs of ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1400562AC
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400227BC (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     NtDCompositionWaitForChannel @ 0x1400560D0 (NtDCompositionWaitForChannel.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x140023F00 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  char v2; // di
  char v3; // bl
  char v4; // bp
  char v5; // al

  v2 = 0;
  v3 = 1;
  v4 = 1;
  v5 = 0;
  do
  {
    if ( *((int *)this + 63) <= 0 )
      break;
    if ( v5 && KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)this + 30) + 8LL), UserRequest, 0, 1u, 0LL) )
      v4 = 0;
    if ( (unsigned __int8)DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this) )
      v2 = 1;
    if ( !a2 && v2 )
      return v3;
    v5 = 1;
  }
  while ( v4 );
  if ( !v2 || a2 && *((_DWORD *)this + 63) )
    return 0;
  return v3;
}
