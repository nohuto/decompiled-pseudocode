/*
 * XREFs of ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x14014BD44
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004507C (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046440 (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046508 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DrvReleaseChangeDisplaySettingLocks(__int64 a1)
{
  struct _ERESOURCE **v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (*v7)(void); // rax

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  GreReleaseSemaphoreShared<3,>(v1);
  GreReleaseSemaphoreShared<2,>(v1);
  GreReleaseSemaphoreShared<1,>((__int64 *)v1);
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v2) + 24) + 992LL);
  if ( v4 && v4() >= 0 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 24) + 1000LL);
    if ( v7 )
      v7();
  }
}
