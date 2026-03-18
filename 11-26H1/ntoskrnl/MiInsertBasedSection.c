/*
 * XREFs of MiInsertBasedSection @ 0x140774714
 * Callers:
 *     MiFinishCreateSection @ 0x1409BAAFC (MiFinishCreateSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlAvlInsertNodeEx @ 0x14030CA60 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140A34950 (MiFindEmptyAddressRangeDownTree.c)
 */

__int64 __fastcall MiInsertBasedSection(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // r14
  bool v5; // di
  struct _KTHREAD *CurrentThread; // r15
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rsi
  int EmptyAddressRangeDownTree; // esi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1[6];
  v5 = 0;
  v20 = 0LL;
  if ( v4 > qword_140E2CFF0 )
    return 3221225495LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2C7D0, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64(&stru_140E2C7D0.Header.Lock, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E2C7D0, v9, (__int64)&stru_140E2C7D0);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                (unsigned int)&qword_140E2C7C8,
                                v4,
                                0x10000,
                                0,
                                0x10000LL,
                                qword_140E2CFF0,
                                (__int64)&v20);
  if ( EmptyAddressRangeDownTree < 0 )
    goto LABEL_19;
  v14 = v20 >> 12;
  a1[3] = v20 >> 12;
  a1[4] = ((v4 + 4095) >> 12) + v14 - 1;
  v15 = qword_140E2C7C8;
  if ( !qword_140E2C7C8 )
    goto LABEL_18;
  while ( v14 <= (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32))
       && v14 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) )
  {
    v16 = *(_QWORD *)v15;
    if ( !*(_QWORD *)v15 )
      goto LABEL_18;
LABEL_16:
    v15 = v16;
  }
  v16 = *(_QWORD *)(v15 + 8);
  if ( v16 )
    goto LABEL_16;
  v5 = 1;
LABEL_18:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2C7C8, v15, v5, a1);
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2C7D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2C7D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2C7D0);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v18, v17);
  }
  return (unsigned int)EmptyAddressRangeDownTree;
}
