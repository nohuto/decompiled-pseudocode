/*
 * XREFs of ?ResolveTarget@SuperWetStroke@CSuperWetInkManager@@QEBAJPEAPEAVIMonitorTarget@@@Z @ 0x1801BAB30
 * Callers:
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126260 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801BA598 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA72C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x1801BA9A4 (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x18021CE8C (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x18021DEF0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSuperWetInkManager::SuperWetStroke::ResolveTarget(
        CSuperWetInkManager::SuperWetStroke *this,
        struct IMonitorTarget **a2)
{
  __int64 v2; // rcx

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, GUID *, struct IMonitorTarget **))(*(_QWORD *)v2 + 24LL))(
             v2,
             &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
             a2);
  else
    return 2147500035LL;
}
