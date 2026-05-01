/*
 * XREFs of ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x18007CD50
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x18008B500 (-HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACT.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampActPdcActivationCallback(void *a1, int a2, __int64 a3, __int64 a4)
{
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  int v8; // edi
  int v9; // [rsp+20h] [rbp-99h] BYREF
  __int128 v10; // [rsp+28h] [rbp-91h] BYREF
  __int128 v11; // [rsp+38h] [rbp-81h]
  __int128 v12; // [rsp+48h] [rbp-71h]
  __int64 v13; // [rsp+58h] [rbp-61h]
  _BYTE v14[144]; // [rsp+60h] [rbp-59h] BYREF

  v13 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  memset_0(v14, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  HampHostAcquireLockSharedEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a4 + 80), 0);
  v7 = *(struct _RM_HAM_ACTIVITY_HOST **)(a4 + 80);
  if ( *(void **)(a4 + 504) == a1 )
  {
    v8 = *(_DWORD *)(a4 + 384);
    HampHostReleaseLockSharedEx(v7);
    if ( a2 == 100 )
    {
      LODWORD(v10) = 1;
      *(_QWORD *)&v11 = a4 + 124;
      DWORD1(v10) = v8;
      HampSystemActivationClientRenewActivation(
        a1,
        (const struct _PDC_ACTIVATION_PARAMETERS *)&v10,
        (enum _PDC_ACTIVATOR_ERROR_DETAIL *)&v9);
    }
  }
  else
  {
    HampHostReleaseLockSharedEx(v7);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
