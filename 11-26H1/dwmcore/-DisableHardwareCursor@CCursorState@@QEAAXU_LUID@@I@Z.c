/*
 * XREFs of ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x1802915FC
 * Callers:
 *     ?DisableHardwareCursor@COverlayContext@@IEAAXXZ @ 0x18021C0E8 (-DisableHardwareCursor@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x18015FEEC (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?FindMonitorData@CCursorState@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@std@@U_LUID@@I@Z @ 0x1802074BC (-FindMonitorData@CCursorState@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UMonito.c)
 *     ??$_Move_unchecked@PEAUMonitorData@CCursorState@@PEAU12@@std@@YAPEAUMonitorData@CCursorState@@PEAU12@00@Z @ 0x18028FEE0 (--$_Move_unchecked@PEAUMonitorData@CCursorState@@PEAU12@@std@@YAPEAUMonitorData@CCursorState@@PE.c)
 */

void __fastcall CCursorState::DisableHardwareCursor(CCursorState *this, struct _LUID a2, unsigned int a3)
{
  struct CCursorState::MonitorData *v4; // rbx
  CCursorState *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  struct CCursorState::MonitorData *v7; // [rsp+30h] [rbp+8h] BYREF

  CCursorState::FindMonitorData((__int64)this, &v7, *(_QWORD *)&a2, a3);
  v4 = v7;
  if ( v7 != *((struct CCursorState::MonitorData **)this + 12) )
  {
    EnterCriticalSection(&g_CursorManager);
    CCursorState::EnsureHardwareOverlayCleared(v5, v4);
    std::_Move_unchecked<CCursorState::MonitorData *,CCursorState::MonitorData *>(
      (__int64)v4 + 128,
      *((_QWORD *)this + 12),
      v4);
    v6 = *(std::_Ref_count_base **)(*((_QWORD *)this + 12) - 24LL);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    *((_QWORD *)this + 12) -= 128LL;
    LeaveCriticalSection(&g_CursorManager);
  }
}
