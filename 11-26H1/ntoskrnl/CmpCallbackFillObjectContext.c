/*
 * XREFs of CmpCallbackFillObjectContext @ 0x1408CA800
 * Callers:
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     CmpGetCallbackObjectContext @ 0x1409E28E0 (CmpGetCallbackObjectContext.c)
 *     CmpLockContextListShared @ 0x140A1EC40 (CmpLockContextListShared.c)
 *     CmpUnlockContextList @ 0x140A23680 (CmpUnlockContextList.c)
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
  char *v13; // rdx
  void *SListFaultAddress; // rtt
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // r15
  struct _KTHREAD *v20; // rax
  void *v21; // rdx
  LegacyAutoBoost *v22; // rbp
  _QWORD *j; // rax
  char *v24; // rdx
  void *v25; // rtt
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // rsi
  __int64 v29; // r15
  _QWORD *v30; // rsi
  struct _KTHREAD *v31; // rax
  void *v32; // rdx
  LegacyAutoBoost *v33; // rbp
  _QWORD *v34; // rax
  char *v35; // rdx
  void *v36; // rtt
  __int64 v37; // rdx
  __int64 v38; // r8
  _DWORD *v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rsi
  _QWORD *v42; // rax

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
          v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.SListFaultAddress, 0LL, 0LL, a4);
          if ( _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                 17LL,
                 0LL) )
          {
            ExfAcquirePushLockSharedEx(
              (signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
              0,
              v11,
              (struct _KTHREAD *)&CmpCallbackListLock.SListFaultAddress);
          }
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
          _m_prefetchw(&CmpCallbackListLock.SListFaultAddress);
          v13 = (char *)CmpCallbackListLock.SListFaultAddress - 16;
          if ( ((unsigned __int64)CmpCallbackListLock.SListFaultAddress & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v13 = 0LL;
          if ( ((__int64)CmpCallbackListLock.SListFaultAddress & 2) != 0
            || (SListFaultAddress = CmpCallbackListLock.SListFaultAddress,
                SListFaultAddress != (void *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                                               (signed __int64)v13,
                                               (signed __int64)CmpCallbackListLock.SListFaultAddress)) )
          {
            ExfReleasePushLock(&CmpCallbackListLock.SListFaultAddress);
          }
          KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.SListFaultAddress);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16);
        }
      }
    }
    a2[2] = v7;
  }
  else if ( a1 == 28 )
  {
LABEL_24:
    v17 = (_DWORD *)a2[1];
    v18 = 0LL;
    if ( v17 )
    {
      if ( *v17 == 1803104306 )
      {
        v19 = v17 + 18;
        if ( (_QWORD *)*v19 != v19 )
        {
          v20 = KeGetCurrentThread();
          --v20->KernelApcDisable;
          v22 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.SListFaultAddress, 0LL, 0LL, a4);
          if ( _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                 17LL,
                 0LL) )
          {
            ExfAcquirePushLockSharedEx(
              (signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
              0,
              v22,
              (struct _KTHREAD *)&CmpCallbackListLock.SListFaultAddress);
          }
          if ( v22 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v22, v21);
            else
              *((_BYTE *)v22 + 10) = 1;
          }
          for ( j = (_QWORD *)*v19; j != v19; j = (_QWORD *)*j )
          {
            if ( j[4] == *a3 )
            {
              v18 = j[7];
              break;
            }
            if ( j[4] < *a3 )
              break;
          }
          _m_prefetchw(&CmpCallbackListLock.SListFaultAddress);
          v24 = (char *)CmpCallbackListLock.SListFaultAddress - 16;
          if ( ((unsigned __int64)CmpCallbackListLock.SListFaultAddress & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v24 = 0LL;
          if ( ((__int64)CmpCallbackListLock.SListFaultAddress & 2) != 0
            || (v25 = CmpCallbackListLock.SListFaultAddress,
                v25 != (void *)_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                                 (signed __int64)v24,
                                 (signed __int64)CmpCallbackListLock.SListFaultAddress)) )
          {
            ExfReleasePushLock(&CmpCallbackListLock.SListFaultAddress);
          }
          KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.SListFaultAddress);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27);
        }
      }
    }
    a2[11] = v18;
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
        v28 = (_DWORD *)*a2;
        v29 = 0LL;
        if ( !*a2 )
          goto LABEL_68;
        if ( *v28 != 1803104306 )
          goto LABEL_68;
        v30 = v28 + 18;
        if ( (_QWORD *)*v30 == v30 )
          goto LABEL_68;
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        v33 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.SListFaultAddress, 0LL, 0LL, a4);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(
            (signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
            0,
            v33,
            (struct _KTHREAD *)&CmpCallbackListLock.SListFaultAddress);
        if ( v33 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v33, v32);
          else
            *((_BYTE *)v33 + 10) = 1;
        }
        v34 = (_QWORD *)*v30;
        while ( 2 )
        {
          if ( v34 != v30 )
          {
            if ( v34[4] == *a3 )
            {
              v29 = v34[7];
            }
            else if ( v34[4] >= *a3 )
            {
              v34 = (_QWORD *)*v34;
              continue;
            }
          }
          break;
        }
        _m_prefetchw(&CmpCallbackListLock.SListFaultAddress);
        v35 = (char *)CmpCallbackListLock.SListFaultAddress - 16;
        if ( ((unsigned __int64)CmpCallbackListLock.SListFaultAddress & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v35 = 0LL;
        if ( ((__int64)CmpCallbackListLock.SListFaultAddress & 2) != 0
          || (v36 = CmpCallbackListLock.SListFaultAddress,
              v36 != (void *)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                               (signed __int64)v35,
                               (signed __int64)CmpCallbackListLock.SListFaultAddress)) )
        {
          ExfReleasePushLock(&CmpCallbackListLock.SListFaultAddress);
        }
        KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.SListFaultAddress);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v37, v38);
LABEL_68:
        a2[5] = v29;
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
        v39 = (_DWORD *)*a2;
        v40 = 0LL;
        if ( !*a2 )
          goto LABEL_80;
        if ( *v39 != 1803104306 )
          goto LABEL_80;
        v41 = v39 + 18;
        if ( (_QWORD *)*v41 == v41 )
          goto LABEL_80;
        CmpLockContextListShared();
        v42 = (_QWORD *)*v41;
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
    while ( v42 != v41 )
    {
      if ( v42[4] == *a3 )
      {
        v40 = v42[7];
        break;
      }
      if ( v42[4] < *a3 )
        break;
      v42 = (_QWORD *)*v42;
    }
    CmpUnlockContextList();
LABEL_80:
    a2[9] = v40;
  }
}
