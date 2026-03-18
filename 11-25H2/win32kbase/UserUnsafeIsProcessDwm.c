/*
 * XREFs of UserUnsafeIsProcessDwm @ 0x1400CD430
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x14007C6FC (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?Open@CInputSink@@UEAAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1400CD3E0 (-Open@CInputSink@@UEAAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     UserSurfaceAccessCheck @ 0x1400D5420 (UserSurfaceAccessCheck.c)
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserUnsafeIsProcessDwm(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 )
    return a1 == *(_QWORD *)(W32GetUserSessionState(a1, a2) + 70552);
  return v2;
}
