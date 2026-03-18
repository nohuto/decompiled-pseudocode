/*
 * XREFs of ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84
 * Callers:
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x140174280 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     GreSuspendDirectDraw @ 0x140190090 (GreSuspendDirectDraw.c)
 * Callees:
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z @ 0x14010246C (-DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x140102518 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     DrvDxgkDisplayOnOff @ 0x14013B310 (DrvDxgkDisplayOnOff.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall GrepSuspendDirectDraw(__int64 a1, char a2, char a3)
{
  struct PDEVOBJ *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rbp
  __int64 i; // rcx
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 DxgkWin32kInterface; // rax
  char v20; // al
  __int64 v21; // rdx
  int v22; // r8d
  char v23; // dl
  _BOOL8 v24; // rdx
  __int64 v25; // rdx
  int v26; // r8d
  struct _ERESOURCE *v27; // rax
  int v28; // r8d
  __int64 v29; // rdi
  __int64 v30; // [rsp+20h] [rbp-28h] BYREF
  char v31; // [rsp+58h] [rbp+10h] BYREF
  struct _ERESOURCE *v32; // [rsp+68h] [rbp+20h] BYREF

  v3 = (struct PDEVOBJ *)a1;
  LOBYTE(a1) = a3;
  GreIncrementDisplaySettingsUniqueness(a1);
  DxLddmPrimaryLockCleanUp(v3);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession(v6, v5, v7, v8) )
  {
    v10 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v9) + 88);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v30, v10);
    for ( i = 0LL; ; i = v29 )
    {
      v27 = hdevEnumerate<1>(i);
      v29 = (__int64)v27;
      if ( !v27 )
        break;
      v12 = (__int64)v27->ExclusiveWaiters & 0x20401;
      v32 = v27;
      if ( v12 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v32) )
      {
        GrepLockVisRgn(v10, v13, v14);
        GreAcquireSemaphore<8,PDEVOBJ>(v29, v15, v16);
        v31 = 0;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v18, v17);
        v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(DxgkWin32kInterface + 448))(
                *(_QWORD *)(*(_QWORD *)(v29 + 2568) + 232LL),
                *(unsigned int *)(*(_QWORD *)(v29 + 2568) + 248LL),
                &v31);
        *(_DWORD *)(v29 + 2608) = 1;
        if ( ((a2 & 8) == 0 || v20) && *(_QWORD *)(v29 + 2720) )
        {
          v23 = (a2 & 4) == 0 || !v31;
          DrvDxgkDisplayOnOff((__int64 *)&v32, v23, 3);
          v24 = (a2 & 4) == 0 || !v31;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v29 + 2720))(*(_QWORD *)(v29 + 1784), v24);
        }
        *(_DWORD *)(v29 + 2608) = 0;
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v29, v21, v22);
        GrepUnlockVisRgn((struct _ERESOURCE **)v10, v25, v26);
      }
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v30,
      v28);
  }
}
