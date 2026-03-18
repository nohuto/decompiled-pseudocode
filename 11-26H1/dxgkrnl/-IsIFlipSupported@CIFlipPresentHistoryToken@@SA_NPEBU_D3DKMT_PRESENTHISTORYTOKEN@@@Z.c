/*
 * XREFs of ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1402F44F4
 * Callers:
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234070 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

char __fastcall CIFlipPresentHistoryToken::IsIFlipSupported(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  char v1; // di
  UINT64 FenceValue; // rsi
  CPushLock *v4; // rbx
  __int64 v5; // rsi

  v1 = 0;
  if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
    return 1;
  if ( a1->Model == D3DKMT_PM_FLIPMANAGER )
  {
    FenceValue = a1->Token.Flip.FenceValue;
    if ( FenceValue )
    {
      if ( (a1->Token.Gdi.ScrollRect.left & 4) != 0 )
      {
        KeEnterCriticalRegion();
        v4 = (CPushLock *)(FenceValue + 88);
        ExAcquirePushLockSharedEx(FenceValue + 88, 0LL);
        v5 = *(_QWORD *)(FenceValue + 112);
        CPushLock::ReleaseLock(v4);
        if ( v5 )
        {
          if ( *(_DWORD *)(v5 + 32) || *(_DWORD *)(v5 + 36) )
          {
            if ( *(_QWORD *)(v5 + 48) )
              return 1;
          }
        }
      }
    }
  }
  return v1;
}
