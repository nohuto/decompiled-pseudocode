/*
 * XREFs of GreSfmGetNotificationTokens @ 0x140073330
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D770 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D900 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphoreShared @ 0x140045A70 (EngAcquireSemaphoreShared.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400734C0 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(__int64 a1, unsigned int *a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v5; // ebp
  __int64 v6; // r14
  struct _ERESOURCE *v7; // rdi
  struct _GRETHREAD *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v11; // rbx
  __int64 v12; // r8
  struct W32_PUSH_LOCK *v13; // rbx
  unsigned int NotificationTokens; // eax
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 SessionState; // rax
  struct _GRETHREAD *v18; // rax
  int v21; // eax
  unsigned int v22; // [rsp+58h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+60h] [rbp+18h] BYREF

  v22 = 0;
  v5 = a1;
  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = (struct _ERESOURCE *)(*(_QWORD *)v6 + 520LL);
  EngAcquireSemaphoreShared((HSEMAPHORE)v7);
  v8 = GreGetCurrentThreadCrossSessionCheck();
  v11 = v8;
  if ( v8 )
  {
    v12 = *(_QWORD *)v8;
    LOBYTE(v9) = (*(_QWORD *)v8 & 0xFFFFFFFFFFFFFF80uLL) != 0;
    if ( ((unsigned __int8)v9 & ((*(_QWORD *)v8 & 0x80u) == 0LL)) != 0 )
    {
      LODWORD(v9) = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v21 = i;
        if ( !_bittest64(&v12, i) )
          v21 = v9;
        v9 = (unsigned int)v21;
      }
      if ( v21 > 7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v21, v12);
    }
    LOBYTE(i) = *((_BYTE *)v11 + 15);
    *((_BYTE *)v11 + 15) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v11 |= 0x80uLL;
  }
  if ( UserIsCurrentProcessDwm(i, v9) )
  {
    v13 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(v6 + 4232) + 32LL);
    if ( *(_QWORD *)(v6 + 4232) != -32LL )
      GreEnterCriticalRegionAndAcquirePushLockExclusive(v13);
    NotificationTokens = SfmTokenArray::GetNotificationTokens(*(SfmTokenArray **)(v6 + 4232), v5, &v22, a3);
    v15 = *(_QWORD *)(v6 + 4232);
    v16 = NotificationTokens;
    if ( !*(_DWORD *)(v15 + 12) )
    {
      NumberOfWaitingThreads = 0;
      SessionState = W32GetSessionState(v15);
      ZwResetEvent(*(HANDLE *)(*(_QWORD *)(*(_QWORD *)(SessionState + 88) + 4232LL) + 24LL), &NumberOfWaitingThreads);
    }
    if ( v13 )
      W32ReleasePushLockExclusive(v13);
  }
  else
  {
    v16 = -1073741790;
  }
  *a2 = v22;
  EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", (int)v7);
  v18 = GreGetCurrentThreadCrossSessionCheck();
  if ( v18 )
  {
    if ( (*((_BYTE *)v18 + 15))-- == 1 )
      *(_QWORD *)v18 &= ~0x80uLL;
  }
  GreReleaseSemaphoreSharedInternal(v7);
  return v16;
}
