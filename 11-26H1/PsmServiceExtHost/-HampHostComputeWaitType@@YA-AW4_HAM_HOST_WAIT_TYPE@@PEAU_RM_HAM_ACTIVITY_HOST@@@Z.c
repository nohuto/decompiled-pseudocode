/*
 * XREFs of ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800190B4
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001912C (-HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldSendPsmQuiesceNotifications@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019188 (-HampHostShouldSendPsmQuiesceNotifications@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180019228 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800192A4 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006E40C (-HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostComputeWaitType(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r8
  unsigned int v2; // edi
  struct _RM_HAM_ACTIVITY_HOST *v3; // r8
  __int64 v5; // rbx

  v2 = 0;
  if ( HampHostShouldSendDesktopWindowClose(a1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v1 + 792) + 88LL);
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v5);
    v2 = (*(_DWORD *)(v5 + 340) & 2 | 4u) >> 1;
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v5);
  }
  else if ( HampHostShouldSendPsmQuiesceAndQueryRestart((struct _RM_HAM_ACTIVITY_HOST *)v1) )
  {
    return 4;
  }
  else
  {
    LOBYTE(v2) = HampHostShouldSendPsmQuiesceNotifications(v3) != 0;
  }
  return v2;
}
