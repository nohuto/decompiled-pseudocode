/*
 * XREFs of GreSuspendDirectDraw @ 0x140072B40
 * Callers:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140071E64 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1400747F4 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     DrvDisableMDEV @ 0x140074C10 (DrvDisableMDEV.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x140072CEC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1400750C0 (DrvDxgkDisplayOnOff.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  PDEV *i; // rcx
  PDEV *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 DxgkWin32kInterface; // rax
  char v12; // al
  __int64 v13; // rdx
  _BOOL8 v14; // rdx
  char v15; // [rsp+38h] [rbp+10h] BYREF
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1768LL)
                                                  + 1573008LL));
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession(v5, v4) )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v16);
    for ( i = 0LL; ; i = (PDEV *)v8 )
    {
      v7 = hdevEnumerate<1>(i);
      v8 = (__int64)v7;
      if ( !v7 )
        break;
      if ( (*((_DWORD *)v7 + 10) & 0x20401) == 1 )
      {
        v9 = *((_QWORD *)v7 + 321);
        if ( ((v9 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v9 + 160) & 0x800000) != 0 )
        {
          GreLockVisRgn(v8);
          GreAcquireSemaphore<8,PDEVOBJ>(v8);
          v15 = 0;
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v10);
          v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(DxgkWin32kInterface + 448))(
                  *(_QWORD *)(*(_QWORD *)(v8 + 2568) + 232LL),
                  *(unsigned int *)(*(_QWORD *)(v8 + 2568) + 248LL),
                  &v15);
          *(_DWORD *)(v8 + 2608) = 1;
          if ( ((a2 & 8) == 0 || v12) && *(_QWORD *)(v8 + 2720) )
          {
            if ( (a2 & 4) != 0 && v15 )
              v13 = 0LL;
            else
              LOBYTE(v13) = 1;
            DrvDxgkDisplayOnOff(v8, v13, 3LL);
            v14 = (a2 & 4) == 0 || !v15;
            (*(void (__fastcall **)(_QWORD, _BOOL8))(v8 + 2720))(*(_QWORD *)(v8 + 1784), v14);
          }
          *(_DWORD *)(v8 + 2608) = 0;
          GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *(_QWORD *)(v8 + 48));
          GreUnlockVisRgn(v8);
        }
      }
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v16);
  }
}
