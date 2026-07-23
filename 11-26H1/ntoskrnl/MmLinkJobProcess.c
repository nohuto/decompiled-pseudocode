/*
 * XREFs of MmLinkJobProcess @ 0x140ADA90C
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiInsertSharedCommitNode @ 0x140997340 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140998C50 (MiRemoveSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MmLinkJobProcess(__int64 a1, unsigned __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // r14
  struct _KTHREAD *CurrentThread; // r13
  int inserted; // r12d
  AutoBoost *v8; // rax
  void *v9; // rdx
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rsi
  _QWORD *v12; // rsi
  _QWORD *i; // r15
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 ***v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 *v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // r15
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 *v28; // rax
  unsigned __int64 j; // rsi
  __int64 *v30; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v31; // [rsp+28h] [rbp-8h]
  __int64 v33; // [rsp+78h] [rbp+48h]

  v4 = (unsigned __int64 *)(a2 + 1712);
  v31 = &v30;
  v30 = (__int64 *)&v30;
  CurrentThread = KeGetCurrentThread();
  inserted = 0;
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire(a2 + 1712, 0LL, 0LL, a4);
  v11 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( (*(_DWORD *)(a2 + 1532) & 0x10) == 0 )
  {
    v12 = (_QWORD *)(a2 + 1720);
    for ( i = *(_QWORD **)(a2 + 1720); i != v12; i = (_QWORD *)*i )
    {
      v33 = i[2];
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(256LL, 0x40uLL, 1850960205, CurrentProcessorColor | 0x80000000);
      if ( !PoolMm )
      {
        inserted = -1073741670;
        break;
      }
      *(_QWORD *)(PoolMm + 56) = v33;
      *(_QWORD *)(PoolMm + 32) = *(i - 1);
      v16 = (__int64 ***)(PoolMm + 40);
      v17 = v31;
      if ( *v31 != (__int64 *)&v30 )
        goto LABEL_11;
      v16[1] = v31;
      *v16 = &v30;
      *v17 = v16;
      v31 = (__int64 **)v16;
    }
    v18 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 != v12 )
    {
      do
      {
        MiRemoveSharedCommitNode(v18[2], a2, 1, v10);
        v18 = (_QWORD *)*v12;
      }
      while ( (_QWORD *)*v12 != v12 );
      v4 = (unsigned __int64 *)(a2 + 1712);
    }
    if ( inserted < 0 )
    {
      while ( 1 )
      {
        v27 = v30;
        if ( v30 == (__int64 *)&v30 )
          break;
        if ( (__int64 **)v30[1] != &v30 )
          goto LABEL_11;
        v28 = (__int64 *)*v30;
        if ( *(__int64 **)(*v30 + 8) != v30 )
          goto LABEL_11;
        v30 = (__int64 *)*v30;
        v28[1] = (__int64)&v30;
        ExFreePoolWithTag(v27 - 5, 0);
      }
    }
    else if ( (*(_DWORD *)(a2 + 1532) & 8) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 1532), 8u);
    }
  }
  v19 = (_QWORD *)(a2 + 856);
  v20 = *(_QWORD **)(a1 + 48);
  if ( *v20 != a1 + 40 )
LABEL_11:
    __fastfail(3u);
  *v19 = a1 + 40;
  *(_QWORD *)(a2 + 864) = v20;
  *v20 = v19;
  *(_QWORD *)(a1 + 48) = v19;
  *(_QWORD *)(a2 + 672) = a1;
  while ( 1 )
  {
    v21 = v30;
    if ( v30 == (__int64 *)&v30 )
      break;
    if ( (__int64 **)v30[1] != &v30 )
      goto LABEL_11;
    v22 = (__int64 *)*v30;
    if ( *(__int64 **)(*v30 + 8) != v30 )
      goto LABEL_11;
    v30 = (__int64 *)*v30;
    v22[1] = (__int64)&v30;
    if ( inserted >= 0 )
    {
      v23 = v21[2];
      if ( *(v21 - 1) )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v23, a2, 1);
          if ( inserted < 0 )
            break;
          v24 = (*(v21 - 1))-- == 1;
        }
        while ( !v24 );
        v4 = (unsigned __int64 *)(a2 + 1712);
      }
    }
    ExFreePoolWithTag(v21 - 5, 0);
  }
  if ( inserted < 0 )
  {
    for ( j = a2 + 1720; *(_QWORD *)j != j; MiRemoveSharedCommitNode(*(_QWORD *)(*(_QWORD *)j + 16LL), a2, 1, v10) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1532), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 1532), 0x10u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v26, v25);
}
