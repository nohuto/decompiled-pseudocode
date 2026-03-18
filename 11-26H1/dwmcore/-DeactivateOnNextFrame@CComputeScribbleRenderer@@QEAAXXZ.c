/*
 * XREFs of ?DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ @ 0x18020DD14
 * Callers:
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801DADE8 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x1801932C8 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 */

void __fastcall CComputeScribbleRenderer::DeactivateOnNextFrame(CComputeScribbleRenderer *this)
{
  RTL_SRWLOCK *v2; // rbx

  CComposition::ScheduleCompositionPass((__int64)g_pComposition, 0, 0x400000u);
  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 4);
  AcquireSRWLockExclusive(v2 + 13);
  CComputeScribbleScheduler::StopInternal((CComputeScribbleScheduler *)v2);
  if ( v2 != (RTL_SRWLOCK *)-104LL )
    ReleaseSRWLockExclusive(v2 + 13);
  *((_BYTE *)this + 49) = 0;
}
