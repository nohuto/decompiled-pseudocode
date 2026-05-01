/*
 * XREFs of ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180066950
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BE98 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampManagerTracingControlCallback(
        const struct _GUID *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        struct _HOST_ACTIVITY_MANAGER *a7)
{
  _BYTE v8[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v8, 0, 0x88uLL);
  if ( a2 == 2 )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
    HampManagerLogCaptureState(a7);
    CempLockTrackerClearForThread(HampLockTrackerId);
  }
}
