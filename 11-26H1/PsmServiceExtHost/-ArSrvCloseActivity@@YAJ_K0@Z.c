/*
 * XREFs of ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x180074F20
 * Callers:
 *     HamRpcSrvCloseDesktopBridgeActivity @ 0x180098770 (HamRpcSrvCloseDesktopBridgeActivity.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180014BD0 (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C1C (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C6C (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArReleaseGlobalLockShared@@YAXXZ @ 0x180014DC4 (-ArReleaseGlobalLockShared@@YAXXZ.c)
 *     ?ArAcquireGlobalLockShared@@YAXXZ @ 0x180014E18 (-ArAcquireGlobalLockShared@@YAXXZ.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180014F54 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CemRcTableFind @ 0x1800150B0 (CemRcTableFind.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180063AC4 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall ArSrvCloseActivity(__int64 a1, __int64 a2)
{
  struct _ACTIVITY_RESTARTER *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v10[144]; // [rsp+30h] [rbp-A8h] BYREF

  memset_0(v10, 0, 0x88uLL);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  ArAcquireGlobalLockShared();
  v4 = ArGlobals;
  ArReleaseGlobalLockShared();
  if ( v4 )
  {
    v9 = a1;
    v6 = (_QWORD *)CemRcTableFind(
                     (__int64)v4,
                     (__int64)&v9,
                     (__int64 (__fastcall *)(__int64, __int64))ArHostCompareByHostId);
    if ( !v6 )
      goto LABEL_16;
    v7 = v6[75];
    if ( v7 && *(_QWORD *)(v7 + 8) == a2 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)v7) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v7 = 0LL;
    }
    CemRcObjectDereference(v6);
    if ( v7 )
    {
      ArHostWaitForAndSetChangeInProgress(*(struct _AR_ACTIVITY_HOST **)(v7 + 16));
      if ( *(_BYTE *)(v7 + 32) == 3 )
        v5 = -2147483638;
      else
        v5 = ArActClose((struct _AR_ACTIVITY *)v7);
      ArHostClearChangeInProgress(*(struct _AR_ACTIVITY_HOST **)(v7 + 16));
      if ( v5 >= 0 )
        v5 = 0;
      ArActDereference((struct _AR_ACTIVITY *)v7);
    }
    else
    {
LABEL_16:
      v5 = -1073741275;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  CempLockTrackerClearForThread(ArLockTrackerId);
  return (unsigned int)v5;
}
