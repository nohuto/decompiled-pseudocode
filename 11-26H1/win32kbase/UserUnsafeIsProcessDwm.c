/*
 * XREFs of UserUnsafeIsProcessDwm @ 0x1400D7D90
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1400D6948 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     UserSurfaceAccessCheck @ 0x14011A3A0 (UserSurfaceAccessCheck.c)
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserUnsafeIsProcessDwm(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a1 )
    return a1 == *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 70544);
  return v3;
}
