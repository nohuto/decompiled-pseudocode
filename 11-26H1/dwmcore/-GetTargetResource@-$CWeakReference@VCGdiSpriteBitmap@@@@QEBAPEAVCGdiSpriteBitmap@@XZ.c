/*
 * XREFs of ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002F240 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?UnregisterSourceDependencies@CExpression@@AEAAXXZ @ 0x18010C9F4 (-UnregisterSourceDependencies@CExpression@@AEAAXXZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18010DE34 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITIO.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180139380 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18013D238 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z @ 0x18013DB2C (-GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z.c)
 *     ?RegisterSourceDependencies@CExpression@@AEAAJXZ @ 0x18018F8E0 (-RegisterSourceDependencies@CExpression@@AEAAJXZ.c)
 *     ?HasActiveCustomAnimation@CInteractionTracker@@EEAA_NXZ @ 0x1801CEFE0 (-HasActiveCustomAnimation@CInteractionTracker@@EEAA_NXZ.c)
 *     ?HasActiveCustomAnimation@CInteractionTracker2@@EEAA_NXZ @ 0x1801DF4C0 (-HasActiveCustomAnimation@CInteractionTracker2@@EEAA_NXZ.c)
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x180242C08 (--1DataSourceProxy@@UEAA@XZ.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180274600 (-OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180276C14 (-SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrac.c)
 *     ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314 (-StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z.c)
 * Callees:
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWeakReference<CGdiSpriteBitmap>::GetTargetResource(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !g_pComposition
    || GetCurrentThreadId() != CComposition::s_compositionThreadId
    && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
  {
    ModuleFailFastForHRESULT(-2003304313, retaddr);
  }
  return *(_QWORD *)(a1 + 64);
}
