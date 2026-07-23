/*
 * XREFs of CmpCallbackFillObjectContext @ 0x1408D0DB0
 * Callers:
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     CmpGetCallbackObjectContext @ 0x1409DF8F0 (CmpGetCallbackObjectContext.c)
 *     CmpLockContextListShared @ 0x140A28260 (CmpLockContextListShared.c)
 *     CmpUnlockContextList @ 0x140A36190 (CmpUnlockContextList.c)
 */

void __fastcall CmpCallbackFillObjectContext(int a1, _QWORD *a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  _DWORD *v6; // rsi
  __int64 v7; // r15
  _QWORD *v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  void *v10; // rdx
  LegacyAutoBoost *v11; // rbp
  _QWORD *i; // rax
  signed __int64 v13; // rdx
  __int64 v14; // rtt
  _DWORD *v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // r15
  struct _KTHREAD *v18; // rax
  void *v19; // rdx
  LegacyAutoBoost *v20; // rbp
  _QWORD *j; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  _DWORD *v24; // rsi
  __int64 v25; // r15
  _QWORD *v26; // rsi
  struct _KTHREAD *v27; // rax
  void *v28; // rdx
  LegacyAutoBoost *v29; // rbp
  _QWORD *v30; // rax
  signed __int64 v31; // rdx
  __int64 v32; // rtt
  _DWORD *v33; // rax
  __int64 v34; // rdi
  _QWORD *v35; // rsi
  _QWORD *v36; // rax

  if ( a1 == 30 )
  {
LABEL_2:
    v6 = (_DWORD *)*a2;
    v7 = 0LL;
    if ( *a2 )
    {
      if ( *v6 == 1803104306 )
      {
        v8 = v6 + 18;
        if ( (_QWORD *)*v8 != v8 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL, 0LL, a4);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock.Header.Lock, 0, v11, &CmpContextListLock);
          if ( v11 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v11, v10);
            else
              *((_BYTE *)v11 + 10) = 1;
          }
          for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
          {
            if ( i[4] == *a3 )
            {
              v7 = i[7];
              break;
            }
            if ( i[4] < *a3 )
              break;
          }
          _m_prefetchw(&CmpContextListLock);
          v13 = *(_QWORD *)&CmpContextListLock.Header.Lock - 16LL;
          if ( (*(_QWORD *)&CmpContextListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v13 = 0LL;
          if ( (CmpContextListLock.Header.Type & 2) != 0
            || (v14 = *(_QWORD *)&CmpContextListLock.Header.Lock,
                v14 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v13,
                         *(signed __int64 *)&CmpContextListLock.Header.Lock)) )
          {
            ExfReleasePushLock(&CmpContextListLock);
          }
          KeAbPostRelease((unsigned __int64)&CmpContextListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
    a2[2] = v7;
  }
  else if ( a1 == 28 )
  {
LABEL_24:
    v15 = (_DWORD *)a2[1];
    v16 = 0LL;
    if ( v15 )
    {
      if ( *v15 == 1803104306 )
      {
        v17 = v15 + 18;
        if ( (_QWORD *)*v17 != v17 )
        {
          v18 = KeGetCurrentThread();
          --v18->KernelApcDisable;
          v20 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL, 0LL, a4);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock.Header.Lock, 0, v20, &CmpContextListLock);
          if ( v20 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v20, v19);
            else
              *((_BYTE *)v20 + 10) = 1;
          }
          for ( j = (_QWORD *)*v17; j != v17; j = (_QWORD *)*j )
          {
            if ( j[4] == *a3 )
            {
              v16 = j[7];
              break;
            }
            if ( j[4] < *a3 )
              break;
          }
          _m_prefetchw(&CmpContextListLock);
          v22 = *(_QWORD *)&CmpContextListLock.Header.Lock - 16LL;
          if ( (*(_QWORD *)&CmpContextListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v22 = 0LL;
          if ( (CmpContextListLock.Header.Type & 2) != 0
            || (v23 = *(_QWORD *)&CmpContextListLock.Header.Lock,
                v23 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v22,
                         *(signed __int64 *)&CmpContextListLock.Header.Lock)) )
          {
            ExfReleasePushLock(&CmpContextListLock);
          }
          KeAbPostRelease((unsigned __int64)&CmpContextListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
    a2[11] = v16;
  }
  else
  {
    switch ( a1 )
    {
      case 0:
        goto LABEL_2;
      case 1:
      case 5:
      case 6:
      case 7:
        a2[6] = CmpGetCallbackObjectContext(*a2, a3);
        return;
      case 2:
      case 4:
      case 34:
        a2[3] = CmpGetCallbackObjectContext(*a2, a3);
        return;
      case 3:
        v24 = (_DWORD *)*a2;
        v25 = 0LL;
        if ( !*a2 )
          goto LABEL_68;
        if ( *v24 != 1803104306 )
          goto LABEL_68;
        v26 = v24 + 18;
        if ( (_QWORD *)*v26 == v26 )
          goto LABEL_68;
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        v29 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL, 0LL, a4);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock.Header.Lock, 0, v29, &CmpContextListLock);
        if ( v29 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v29, v28);
          else
            *((_BYTE *)v29 + 10) = 1;
        }
        v30 = (_QWORD *)*v26;
        while ( 2 )
        {
          if ( v30 != v26 )
          {
            if ( v30[4] == *a3 )
            {
              v25 = v30[7];
            }
            else if ( v30[4] >= *a3 )
            {
              v30 = (_QWORD *)*v30;
              continue;
            }
          }
          break;
        }
        _m_prefetchw(&CmpContextListLock);
        v31 = *(_QWORD *)&CmpContextListLock.Header.Lock - 16LL;
        if ( (*(_QWORD *)&CmpContextListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v31 = 0LL;
        if ( (CmpContextListLock.Header.Type & 2) != 0
          || (v32 = *(_QWORD *)&CmpContextListLock.Header.Lock,
              v32 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpContextListLock,
                       v31,
                       *(signed __int64 *)&CmpContextListLock.Header.Lock)) )
        {
          ExfReleasePushLock(&CmpContextListLock);
        }
        KeAbPostRelease((unsigned __int64)&CmpContextListLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_68:
        a2[5] = v25;
        return;
      case 8:
      case 9:
        a2[7] = CmpGetCallbackObjectContext(*a2, a3);
        return;
      case 14:
        a2[2] = CmpGetCallbackObjectContext(*a2, a3);
        return;
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 31:
      case 33:
      case 35:
      case 36:
      case 37:
      case 39:
      case 42:
      case 44:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
        a2[5] = CmpGetCallbackObjectContext(*a2, a3);
        return;
      case 25:
      case 27:
      case 29:
        a2[5] = 0LL;
        return;
      case 26:
        goto LABEL_24;
      case 32:
        v33 = (_DWORD *)*a2;
        v34 = 0LL;
        if ( !*a2 )
          goto LABEL_80;
        if ( *v33 != 1803104306 )
          goto LABEL_80;
        v35 = v33 + 18;
        if ( (_QWORD *)*v35 == v35 )
          goto LABEL_80;
        CmpLockContextListShared();
        v36 = (_QWORD *)*v35;
        break;
      case 38:
      case 41:
      case 43:
      case 45:
        a2[4] = CmpGetCallbackObjectContext(*a2, a3);
        return;
      default:
        return;
    }
    while ( v36 != v35 )
    {
      if ( v36[4] == *a3 )
      {
        v34 = v36[7];
        break;
      }
      if ( v36[4] < *a3 )
        break;
      v36 = (_QWORD *)*v36;
    }
    CmpUnlockContextList();
LABEL_80:
    a2[9] = v34;
  }
}
