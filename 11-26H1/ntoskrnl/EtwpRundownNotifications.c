/*
 * XREFs of EtwpRundownNotifications @ 0x140914A30
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140911650 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwpUnreferenceDataBlock @ 0x140914C04 (EtwpUnreferenceDataBlock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpRundownNotifications(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  PVOID *v12; // r9
  _QWORD *v13; // rdx
  _QWORD *v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  __int64 v17; // rtt
  _QWORD *v18; // rbx
  __int64 v19; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 800);
  if ( v4 )
  {
    P[1] = P;
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire(v4 + 16, 0LL, 0LL, a4);
    v9 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 16), v7, v4 + 16);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    v10 = *(_QWORD **)(v4 + 24);
    while ( v10 != (_QWORD *)(v4 + 24) )
    {
      v11 = v10;
      v12 = (PVOID *)v10;
      v10 = (_QWORD *)*v10;
      if ( v11[3] == a2 )
      {
        if ( (_QWORD *)v10[1] != v11
          || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11)
          || (*v13 = v10, v10[1] = v13, v14 = P[0], *((PVOID **)P[0] + 1) != P) )
        {
LABEL_12:
          __fastfail(3u);
        }
        *v12 = P[0];
        v11[1] = P;
        v14[1] = v11;
        P[0] = v11;
      }
    }
    _m_prefetchw((const void *)(v4 + 16));
    v15 = *(_QWORD *)(v4 + 16);
    v16 = v15 - 16;
    if ( (v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v16 = 0LL;
    if ( (v15 & 2) != 0
      || (v17 = *(_QWORD *)(v4 + 16),
          v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), v16, v15)) )
    {
      ExfReleasePushLock((_QWORD *)(v4 + 16));
    }
    KeAbPostRelease(v4 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v18 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P )
        goto LABEL_12;
      v19 = *(_QWORD *)P[0];
      if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
        goto LABEL_12;
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v19 + 8) = P;
      EtwpUnreferenceDataBlock(v18[2]);
      _m_prefetchw((char *)v18 + 52);
      if ( (_InterlockedAnd((volatile signed __int32 *)v18 + 13, 0xFFFFFFFE) & 0xFFFFFFFE) == 0 )
        ExFreePoolWithTag(v18, 0);
    }
  }
}
