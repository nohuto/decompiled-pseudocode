/*
 * XREFs of HmgRemoveObject @ 0x140019EC0
 * Callers:
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140085D1C (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1401D0A50 (EngDeleteDriverObj.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401D1F78 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001A830 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14001B260 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140045770 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall HmgRemoveObject(__int64 a1, int a2, int a3, int a4, char a5, _DWORD *a6)
{
  unsigned int v7; // r12d
  HSEMAPHORE v8; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // r11
  unsigned int v19; // r10d
  unsigned int v20; // ecx
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r10
  unsigned int v25; // r9d
  unsigned int v26; // ecx
  __int64 v27; // r11
  __int64 v28; // rbx
  int v29; // ecx
  char v30; // cl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct _KTHREAD *v35; // r15
  __int64 v36; // rsi
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rsi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v43; // edx
  int v44; // eax
  int v45; // ebx
  __int64 v46; // rax
  unsigned int *v47; // [rsp+20h] [rbp-20h] BYREF
  int v48; // [rsp+28h] [rbp-18h]
  __int16 v49; // [rsp+2Ch] [rbp-14h]
  __int64 v50; // [rsp+30h] [rbp-10h]
  HSEMAPHORE v51; // [rsp+80h] [rbp+40h] BYREF
  int v52; // [rsp+88h] [rbp+48h]
  int v53; // [rsp+90h] [rbp+50h]

  v53 = a3;
  v52 = a2;
  v7 = a1;
  v51 = (HSEMAPHORE)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 1512LL);
  v8 = v51;
  GreAcquireSemaphoreInternal(v51);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v11 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  v14 = (__int64 *)((v11 + 8) & -(__int64)(v11 != 0));
  if ( v14 )
  {
    v15 = *v14;
    if ( (*v14 & 0xFFFFFFFFFFF00000uLL) != 0 && (*v14 & 0x100000) == 0 )
    {
      v43 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v44 = i;
        if ( !_bittest64(&v15, i) )
          v44 = v43;
        v43 = v44;
      }
      if ( v44 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v44, v15);
    }
    LOBYTE(i) = *(_BYTE *)(((v11 + 8) & -(__int64)(v11 != 0)) + 0x1C);
    *(_BYTE *)(((v11 + 8) & -(__int64)(v11 != 0)) + 0x1C) = i + 1;
    if ( !(_BYTE)i )
      *v14 |= 0x100000uLL;
  }
  v47 = 0LL;
  v48 = 0;
  v49 = 0;
  v50 = *(_QWORD *)(W32GetSessionState(i) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v47, (unsigned __int16)v7 | (v7 >> 8) & 0xFF0000, 0);
  if ( !v48 )
  {
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v47);
    SEMOBJ<20>::vUnlock(&v51);
    return v10;
  }
  v16 = *(_QWORD *)(v50 + 5672);
  v17 = *v47;
  if ( (unsigned int)v17 >= 0x10000 )
  {
    if ( *(_DWORD *)v16 <= 0x10000u )
    {
      v17 = (unsigned __int16)v17;
    }
    else
    {
      v18 = *(_QWORD *)(v16 + 16);
      v19 = *(_DWORD *)(v18 + 2056);
      if ( (unsigned __int16)v17 >= v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
      {
        v23 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v17 >= v19 )
          v20 = (((unsigned __int16)v17 - v19) >> 16) + 1;
        else
          v20 = 0;
        v21 = *(_QWORD *)(v18 + 8LL * v20 + 8);
        if ( v20 )
          v22 = (unsigned __int16)v17 + ((1 - v20) << 16) - v19;
        else
          v22 = (unsigned __int16)v17;
        v23 = 0LL;
        if ( (unsigned int)v22 < *(_DWORD *)(v21 + 20) )
          v23 = *(_QWORD *)v21 + 24 * v22;
      }
      if ( *(unsigned __int8 *)(v23 + 13) == WORD1(v17) )
        v17 = (unsigned __int16)v17;
    }
  }
  v24 = *(_QWORD *)(v16 + 16);
  v25 = *(_DWORD *)(v24 + 2056);
  if ( (unsigned int)v17 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
    goto LABEL_57;
  if ( (unsigned int)v17 >= v25 )
    v26 = (((unsigned int)v17 - v25) >> 16) + 1;
  else
    v26 = 0;
  v27 = *(_QWORD *)(v24 + 8LL * v26 + 8);
  if ( v26 )
    v17 = ((1 - v26) << 16) - v25 + (unsigned int)v17;
  if ( (unsigned int)v17 >= *(_DWORD *)(v27 + 20) )
LABEL_57:
    v28 = 0LL;
  else
    v28 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
  if ( *((_BYTE *)v47 + 14) == a5 && *((_WORD *)v47 + 6) == HIWORD(v7) )
  {
    v29 = *(_DWORD *)(v28 + 8);
    if ( v29 == v53 && *(_WORD *)(v28 + 12) == (_WORD)v52 )
    {
      if ( a4 || (*((_BYTE *)v47 + 15) & 1) == 0 )
      {
        v30 = *(_BYTE *)(HmgPentryFromPobj(v28) + 14);
        if ( v30 == 5 )
        {
          v31 = *(_QWORD *)(v28 + 680);
          v32 = 0LL;
        }
        else
        {
          if ( v30 != 16 )
          {
LABEL_39:
            HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v47);
            HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v47);
            if ( v8 )
              GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v33, v8);
            return v28;
          }
          v31 = *(_QWORD *)(v28 + 136);
          v32 = 2LL;
        }
        TrackObjectReferenceDecrement(v32, v31);
        goto LABEL_39;
      }
    }
    else
    {
      *((_BYTE *)v47 + 15) |= 8u;
      if ( a6 )
        *a6 = v29;
    }
  }
  else
  {
    HIBYTE(v49) = 1;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v47);
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v47);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v8);
    v35 = KeGetCurrentThread();
    v36 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v45 = W32GetCurrentWin32kSessionId(),
          v46 = PsGetCurrentThreadProcess(),
          v45 == (unsigned int)PsGetProcessSessionIdEx(v46)) )
    {
      v37 = (__int64 *)PsGetThreadWin32Thread(v35);
      if ( v37 )
        v36 = *v37;
    }
    v38 = v36 + 8;
    v39 = -v36;
    if ( (v38 & -(__int64)(v39 != 0)) != 0 && (*(_BYTE *)((v38 & -(__int64)(v39 != 0)) + 0x1C))-- == 1 )
      *(_QWORD *)(v38 & -(__int64)(v39 != 0)) &= ~0x100000uLL;
    GreReleaseSemaphoreSharedInternal(v8);
  }
  return v10;
}
