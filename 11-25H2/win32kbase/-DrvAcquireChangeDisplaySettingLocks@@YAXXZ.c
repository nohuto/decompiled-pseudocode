/*
 * XREFs of ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1401417B0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001BD24 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140088EB8 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DrvAcquireChangeDisplaySettingLocks(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  void (*v5)(void); // rax
  __int64 *v6; // rbx

  v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24);
  v3 = *(int (**)(void))(v2 + 976);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v2, v4) + 24);
      v5 = *(void (**)(void))(v2 + 984);
      if ( v5 )
        v5();
    }
  }
  v6 = *(__int64 **)(W32GetSessionState(v2) + 88);
  GreAcquireSemaphore<1,>(v6);
  GreAcquireSemaphore<2,>((struct _ERESOURCE **)v6);
  GreAcquireSemaphore<3,>((struct _ERESOURCE **)v6);
}
