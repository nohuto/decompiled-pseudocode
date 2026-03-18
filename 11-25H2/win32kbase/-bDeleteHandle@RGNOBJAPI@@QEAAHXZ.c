/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001AE78
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140016520 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
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
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteHandle(RGNOBJAPI *this)
{
  __int64 SessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  struct _ERESOURCE *v5; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 v14; // r11
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r10
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // r11
  __int64 v24; // rbx
  char v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v32; // edx
  int v33; // eax
  unsigned int *v34; // [rsp+20h] [rbp-20h] BYREF
  int v35; // [rsp+28h] [rbp-18h]
  __int16 v36; // [rsp+2Ch] [rbp-14h]
  __int64 v37; // [rsp+30h] [rbp-10h]
  struct _ERESOURCE *v38; // [rsp+70h] [rbp+30h] BYREF

  SessionState = W32GetSessionState(this);
  v4 = *((_QWORD *)this + 5);
  if ( v4 == *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 4152LL) )
    return 0LL;
  v38 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v3) + 88) + 1512LL);
  v5 = v38;
  GreAcquireSemaphoreInternal(v38);
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v10 = (__int64 *)((v7 + 8) & -(__int64)(v7 != 0));
  if ( v10 )
  {
    v11 = *v10;
    if ( (*v10 & 0xFFFFFFFFFFF00000uLL) != 0 && (*v10 & 0x100000) == 0 )
    {
      v32 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v33 = i;
        if ( !_bittest64(&v11, i) )
          v33 = v32;
        v32 = v33;
      }
      if ( v33 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v33, v11);
    }
    LOBYTE(i) = *(_BYTE *)(((v7 + 8) & -(__int64)(v7 != 0)) + 0x1C);
    *(_BYTE *)(((v7 + 8) & -(__int64)(v7 != 0)) + 0x1C) = i + 1;
    if ( !(_BYTE)i )
      *v10 |= 0x100000uLL;
  }
  v34 = 0LL;
  v35 = 0;
  v36 = 0;
  v37 = *(_QWORD *)(W32GetSessionState(i) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v34, (unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000, 0);
  if ( !v35 )
    goto LABEL_46;
  v12 = *(_QWORD *)(v37 + 5672);
  v13 = *v34;
  if ( (unsigned int)v13 >= 0x10000 )
  {
    if ( *(_DWORD *)v12 <= 0x10000u )
    {
      v13 = (unsigned __int16)v13;
    }
    else
    {
      v14 = *(_QWORD *)(v12 + 16);
      v15 = *(_DWORD *)(v14 + 2056);
      if ( (unsigned __int16)v13 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
      {
        v19 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v13 >= v15 )
          v16 = (((unsigned __int16)v13 - v15) >> 16) + 1;
        else
          v16 = 0LL;
        v17 = *(_QWORD *)(v14 + 8 * v16 + 8);
        if ( (_DWORD)v16 )
          v18 = (unsigned __int16)v13 + ((1 - (_DWORD)v16) << 16) - v15;
        else
          v18 = (unsigned __int16)v13;
        v19 = 0LL;
        if ( (unsigned int)v18 < *(_DWORD *)(v17 + 20) )
          v19 = *(_QWORD *)v17 + 24 * v18;
      }
      if ( *(unsigned __int8 *)(v19 + 13) == WORD1(v13) )
        v13 = (unsigned __int16)v13;
    }
  }
  v20 = *(_QWORD *)(v12 + 16);
  v21 = *(_DWORD *)(v20 + 2056);
  if ( (unsigned int)v13 >= v21 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16) )
    goto LABEL_50;
  v22 = (unsigned int)v13 >= v21 ? (((unsigned int)v13 - v21) >> 16) + 1 : 0LL;
  v23 = *(_QWORD *)(v20 + 8 * v22 + 8);
  if ( (_DWORD)v22 )
    v13 = ((1 - (_DWORD)v22) << 16) - v21 + (unsigned int)v13;
  if ( (unsigned int)v13 >= *(_DWORD *)(v23 + 20) )
LABEL_50:
    v24 = 0LL;
  else
    v24 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
  if ( *((_BYTE *)v34 + 14) != 4 || *((_WORD *)v34 + 6) != WORD1(v4) )
  {
    HIBYTE(v36) = 1;
    goto LABEL_45;
  }
  if ( *(_WORD *)(v24 + 12) != 1 || *(_DWORD *)(v24 + 8) )
  {
    *((_BYTE *)v34 + 15) |= 8u;
    goto LABEL_45;
  }
  if ( (*((_BYTE *)v34 + 15) & 1) != 0 )
  {
LABEL_45:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v34);
LABEL_46:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v34);
    SEMOBJ<20>::vUnlock(&v38);
    v24 = 0LL;
    goto LABEL_41;
  }
  v25 = *(_BYTE *)(HmgPentryFromPobj((_DWORD *)v24) + 14);
  if ( v25 == 5 )
  {
    v26 = *(_QWORD *)(v24 + 680);
    v27 = 0LL;
  }
  else
  {
    if ( v25 != 16 )
      goto LABEL_39;
    v26 = *(_QWORD *)(v24 + 136);
    v27 = 2LL;
  }
  TrackObjectReferenceDecrement(v27, v26);
LABEL_39:
  HANDLELOCK::vUnlockAndRelease(&v34);
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v34);
  if ( v5 )
    GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v28, v5);
LABEL_41:
  if ( v24 == *(_QWORD *)this )
  {
    *((_QWORD *)this + 5) = 0LL;
    return 1LL;
  }
  return 0LL;
}
