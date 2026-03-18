/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x14002F2C0 (pProcessDfbSurfacesInternal.c)
 *     GreGetNearestColor @ 0x14003AA70 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x14003ACA0 (GreGetClipBox.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x140190BA4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1401ED038 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     GreDecLockCount @ 0x14003ABE0 (GreDecLockCount.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14003BEB4 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x14003DDB0 (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C7510 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  int (*v5)(void); // rax
  void (__fastcall *v6)(DEVLOCKOBJ *); // rax
  int v7; // eax
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  struct _ERESOURCE *v12; // rbp
  struct _KTHREAD *v13; // r14
  __int64 v14; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  int (*v19)(void); // rax
  __int64 v20; // rcx
  void (__fastcall *v21)(char *, char *, char *, char *); // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 24);
  v5 = *(int (**)(void))(v2 + 784);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24);
      v6 = *(void (__fastcall **)(DEVLOCKOBJ *))(v3 + 792);
      if ( v6 )
        v6(this);
    }
  }
  v7 = *((_DWORD *)this + 6);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDecLockCount(v3, v2);
    *((_DWORD *)this + 6) &= ~0x1000u;
    CurrentThread = GreGetCurrentThread(v24, v23);
    if ( CurrentThread )
    {
      *((_QWORD *)CurrentThread + 38) = 0LL;
      *((_QWORD *)CurrentThread + 37) = 0LL;
    }
  }
  else if ( (v7 & 0x80000) != 0 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v3, v2);
    if ( CurrentThreadWin32Thread )
      v9 = *CurrentThreadWin32Thread;
    else
      v9 = 0LL;
    v10 = v9 + 8;
    v3 = -v9;
    if ( (v10 & -(__int64)(v3 != 0)) != 0 )
      --*(_DWORD *)((v10 & -(__int64)(v3 != 0)) + 0x154);
    *((_DWORD *)this + 6) &= ~0x80000u;
  }
  if ( *(_QWORD *)this )
  {
    if ( (*((_DWORD *)this + 6) & 0x100000) != 0 )
    {
      W32GetSessionState(v3);
      GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal);
      *((_DWORD *)this + 6) &= ~0x100000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 2));
    }
  }
  v11 = *((_DWORD *)this + 6);
  if ( (v11 & 8) != 0 )
    *((_DWORD *)this + 6) = v11 & 0xFFFFFFF7;
  v12 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v12 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v3,
        (unsigned int)&LockRelease,
        v4,
        *((_QWORD *)this + 1),
        (__int64)L"DynamicModeChange");
    v13 = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v13);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    v16 = v14 + 8;
    v17 = -v14;
    if ( (v16 & -(__int64)(v17 != 0)) != 0 && (*(_BYTE *)((v16 & -(__int64)(v17 != 0)) + 9))-- == 1 )
      *(_QWORD *)(v16 & -(__int64)(v17 != 0)) &= ~2uLL;
    GreReleaseSemaphoreSharedInternal(v12);
  }
  v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 800LL);
  if ( v19 )
  {
    if ( v19() >= 0 )
    {
      v21 = *(void (__fastcall **)(char *, char *, char *, char *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 24)
                                                                  + 808LL);
      if ( v21 )
        v21((char *)this + 152, (char *)this + 144, (char *)this + 136, (char *)this + 28);
    }
  }
  v22 = *((_QWORD *)this + 4);
  if ( v22 )
  {
    if ( *((_BYTE *)this + 128) )
    {
      *(_DWORD *)(v22 + 40) &= ~2u;
      *((_BYTE *)this + 128) = 0;
    }
    DCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
  }
  PopThreadGuardedObject((_QWORD *)this + 12);
  DCOBJ::~DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
}
