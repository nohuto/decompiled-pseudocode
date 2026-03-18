/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetClipBox @ 0x14008E7A0 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x14008EEF0 (GreGetNearestColor.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x14017D540 (GreIntersectVisRect.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019E28C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1401C3EE4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044EE4 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x14008E354 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14008E380 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     GreDecLockCount @ 0x1400BFC60 (GreDecLockCount.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(DEVLOCKOBJ *); // rax
  int v5; // eax
  int v6; // eax
  struct _ERESOURCE *v7; // rdi
  int (*v8)(void); // rax
  void (__fastcall *v9)(char *, char *, char *, char *); // rax
  struct _GRETHREAD *CurrentThread; // rax
  __int64 SessionState; // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 784LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
      v4 = *(void (__fastcall **)(DEVLOCKOBJ *))(v3 + 792);
      if ( v4 )
        v4(this);
    }
  }
  v5 = *((_DWORD *)this + 6);
  if ( (v5 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    CurrentThread = GreGetCurrentThread();
    if ( CurrentThread )
    {
      *((_QWORD *)CurrentThread + 38) = 0LL;
      *((_QWORD *)CurrentThread + 37) = 0LL;
    }
  }
  else if ( (v5 & 0x80000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x80000u;
  }
  if ( *(_QWORD *)this )
  {
    if ( (*((_DWORD *)this + 6) & 0x100000) != 0 )
    {
      SessionState = W32GetSessionState(v3);
      GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        **(_QWORD **)(SessionState + 88) + 1144LL);
      *((_DWORD *)this + 6) &= ~0x100000u;
    }
    else
    {
      GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *(_QWORD *)(*((_QWORD *)this + 2) + 48LL));
    }
  }
  v6 = *((_DWORD *)this + 6);
  if ( (v6 & 8) != 0 )
    *((_DWORD *)this + 6) = v6 & 0xFFFFFFF7;
  v7 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DynamicModeChange", *((_QWORD *)this + 1));
    GrepReleaseLockValidate<1>();
    GreReleaseSemaphoreSharedInternal(v7);
  }
  v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 800LL);
  if ( v8 )
  {
    if ( v8() >= 0 )
    {
      v9 = *(void (__fastcall **)(char *, char *, char *, char *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                 + 808LL);
      if ( v9 )
        v9((char *)this + 128, (char *)this + 120, (char *)this + 112, (char *)this + 28);
    }
  }
  DLODCOBJ::~DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
}
