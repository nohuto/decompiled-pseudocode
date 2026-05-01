/*
 * XREFs of ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x18001B5E8
 * Callers:
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180019C64 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180014CE4 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180014D3C (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180014F54 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall ArManagerUpdateCsState(union _HAM_PDC_STATE_UPDATE *a1)
{
  struct _ACTIVITY_RESTARTER *v2; // rbx
  int v3; // eax
  __int64 v4; // rcx
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v5, 0, 0x88uLL);
  if ( ArLockTrackerId != -1 )
  {
    ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v5);
    v2 = ArGlobals;
    if ( ArGlobals )
    {
      ArManagerAcquireLockExclusive(ArGlobals);
      v3 = *((_DWORD *)v2 + 18) ^ (*((_DWORD *)v2 + 18) ^ *(unsigned __int8 *)a1) & 1 | 2;
      *((_DWORD *)v2 + 18) = v3;
      if ( (v3 & 0xC) == 0 )
      {
        v4 = *((_QWORD *)v2 + 8);
        if ( v4 )
        {
          *((_DWORD *)v2 + 18) = v3 | 4;
          TpPostWork(v4);
        }
      }
      ArManagerReleaseLockExclusive(v2);
    }
    CempLockTrackerClearForThread(ArLockTrackerId);
  }
}
