/*
 * XREFs of ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1400C7198
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B6A8 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7268 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DrvAcquireChangeDisplaySettingLocks(__int64 a1)
{
  __int64 v1; // rcx
  int (*v2)(void); // rax
  void (*v3)(void); // rax
  struct _ERESOURCE **v4; // rbx
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // r8d

  v1 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24);
  v2 = *(int (**)(void))(v1 + 976);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v1 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v1) + 24);
      v3 = *(void (**)(void))(v1 + 984);
      if ( v3 )
        v3();
    }
  }
  v4 = *(struct _ERESOURCE ***)(W32GetSessionState(v1) + 88);
  GreAcquireSemaphore<1,>(v4);
  GreAcquireSemaphore<2,>(v4, v5, v6);
  GreAcquireSemaphore<3,>(v4, v7, v8);
}
