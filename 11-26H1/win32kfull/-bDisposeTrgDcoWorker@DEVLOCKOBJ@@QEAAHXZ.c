/*
 * XREFs of ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x14006F670
 * Callers:
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x14006E580 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1400727E0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x140294A84 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x140294C40 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ::bDisposeTrgDcoWorker(DEVLOCKOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  SURFACE *v7; // rcx
  Gre::Base *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v12; // rbp
  unsigned int v13; // esi
  __int64 v14; // r14
  struct _DC_ATTR *UserAttr; // rax
  HSEMAPHORE v17; // rbp
  struct _GRETHREAD *v18; // rax
  __int64 v19; // rcx
  struct _GRETHREAD *v20; // rbx
  __int64 v21; // r8
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v23; // rdx
  bool v24; // zf
  __int64 v25; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v30; // rdx
  int v31; // edx
  unsigned __int64 i; // rcx
  int v33; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v4 = *((_QWORD *)this + 4);
  if ( v4 && *((_BYTE *)this + 129) )
  {
    v5 = *((_DWORD *)this + 6);
    v6 = *(_QWORD *)(v4 + 48);
    if ( (v5 & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 129) )
      {
        if ( (v5 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x400u;
          v5 = *((_DWORD *)this + 6);
        }
        if ( (v5 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x2000u;
          v5 = *((_DWORD *)this + 6);
        }
        v4 = *((_QWORD *)this + 4);
        if ( v4 && *((_BYTE *)this + 129) && (v5 & 0x1000) != 0 )
        {
          if ( (*(_DWORD *)(v4 + 44) & 1) == 0 )
          {
            v7 = *(SURFACE **)(v4 + 496);
            if ( v7 )
              SURFACE::bUnMap(v7);
          }
          *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~1u;
          v4 = *((_QWORD *)this + 4);
          if ( (*(_DWORD *)(v4 + 36) & 0x4000) != 0 && *(_QWORD *)(v4 + 472) && *(_DWORD *)(v4 + 488) )
          {
            GrepUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x40000);
            v4 = *((_QWORD *)this + 4);
          }
        }
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(v4 + 36) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v6 + 2544), a3);
      }
      v8 = (Gre::Base *)*((_QWORD *)this + 4);
      if ( v8 && *((_BYTE *)this + 129) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*((_DWORD *)v8 + 9) & 0x200) != 0 )
      {
        v17 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v8) + 728LL);
        GreAcquireSemaphoreSharedInternal(v17);
        v18 = GreGetCurrentThreadCrossSessionCheck();
        v20 = v18;
        if ( v18 )
        {
          v21 = *(_QWORD *)v18;
          if ( (*(_QWORD *)v18 & 0xFFFFFFDFFFFFFFF8uLL) != 0 && (*(_QWORD *)v18 & 8) == 0 )
          {
            v31 = 38;
            for ( i = 0LL; i < 0x40; ++i )
            {
              v33 = i;
              if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v21) == 0 )
                v33 = v31;
              v31 = v33;
            }
            if ( v33 > 3 && v33 != 38 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v33);
          }
          v19 = *((unsigned __int8 *)v20 + 11);
          *((_BYTE *)v20 + 11) = v19 + 1;
          if ( !(_BYTE)v19 )
            *(_QWORD *)v20 |= 8uLL;
        }
        if ( !*((_QWORD *)this + 17) )
          DC::vClearRendering(*((DC **)this + 4));
        if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
        {
          CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v19);
          if ( CurrentThreadWin32Thread )
          {
            v23 = 0LL;
            v24 = *CurrentThreadWin32Thread == 0LL;
            v25 = *CurrentThreadWin32Thread + 8LL;
            if ( !v24 )
              v23 = v25;
            if ( v23 )
              *(_DWORD *)(v23 + 336) &= ~1u;
          }
        }
        EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v17);
        CurrentThread = KeGetCurrentThread();
        v27 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (CurrentProcess = PsGetCurrentProcess(v28),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v27 = *ThreadWin32Thread;
          v30 = 0LL;
          if ( v27 )
            v30 = v27 + 8;
          if ( v30 )
          {
            v24 = (*(_BYTE *)(v30 + 11))-- == 1;
            if ( v24 )
              *(_QWORD *)v30 &= ~8uLL;
            if ( !*(_QWORD *)v30 )
              GrepOnAllLocksReleased();
          }
        }
        GreReleaseSemaphoreSharedInternal(v17);
      }
    }
    v9 = *((_QWORD *)this + 4);
    if ( v9 && *((_BYTE *)this + 128) )
    {
      *(_DWORD *)(v9 + 40) &= ~2u;
      *((_BYTE *)this + 128) = 0;
    }
    v10 = *((_QWORD *)this + 4);
    if ( v10 )
    {
      if ( *((_DWORD *)this + 10) && (*(_DWORD *)(v10 + 44) & 2) != 0 )
      {
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        v12 = *((_QWORD *)this + 4);
        v13 = CurrentProcessId & 0xFFFFFFFC;
        if ( *(_QWORD *)v12 )
        {
          v14 = HmgPentryFromPobj(*((_QWORD *)this + 6), *((_QWORD *)this + 4));
        }
        else
        {
          v14 = v12 + 2152;
          *(_OWORD *)(v12 + 2152) = 0LL;
          *(_QWORD *)(v12 + 2168) = 0LL;
          *(_DWORD *)(v12 + 2160) = -2147483630;
          *(_QWORD *)(v12 + 2168) = GreEncodeUserModePointer(0LL);
        }
        if ( v13 == (*(_DWORD *)(v14 + 8) & 0xFFFFFFFE) )
        {
          UserAttr = DCOBJ::GetUserAttr((DEVLOCKOBJ *)((char *)this + 32));
          if ( UserAttr )
            DC::RestoreAttributes(*((DC **)this + 4), UserAttr);
        }
        *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~2u;
        *((_DWORD *)this + 10) = 0;
      }
      _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)this + 4) + 12LL));
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  return 1LL;
}
