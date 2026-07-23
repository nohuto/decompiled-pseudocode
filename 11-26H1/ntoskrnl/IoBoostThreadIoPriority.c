/*
 * XREFs of IoBoostThreadIoPriority @ 0x140205BAC
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140204CDC (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 *     ExpBoostIoAfterAcquire @ 0x1402053F4 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     MiModifiedWriterShouldWrite @ 0x1403FF7EC (MiModifiedWriterShouldWrite.c)
 *     MiModifiedWriterDeterminePriority @ 0x1403FFAC8 (MiModifiedWriterDeterminePriority.c)
 *     FsRtlpDoBoost @ 0x1404DC574 (FsRtlpDoBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404EA98C (CcBoostLowPriorityWorkerThread.c)
 *     IoBoostThreadIo @ 0x1404EE9D0 (IoBoostThreadIo.c)
 *     MiModifiedPageWriterExit @ 0x14052AA78 (MiModifiedPageWriterExit.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1402FF4B0 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IoBoostThreadIoPriority(KSPIN_LOCK *a1, int a2, int a3)
{
  char v5; // si
  KIRQL v6; // al
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rax
  KSPIN_LOCK *v10; // r13
  unsigned int v11; // r14d
  KIRQL v12; // al
  KSPIN_LOCK v13; // rdi
  unsigned __int64 v14; // rdx
  void *v15; // r15
  unsigned __int16 i; // si
  __int64 j; // rdx
  __int64 Pool2; // rax
  __int64 v19; // rdx
  unsigned __int16 v20; // si
  char *v21; // r15
  __int64 v22; // r12
  KIRQL v23; // al
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int16 k; // di
  _QWORD *v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rdi
  KIRQL v31; // [rsp+28h] [rbp-E0h]
  KIRQL v32; // [rsp+28h] [rbp-E0h]
  char v33; // [rsp+29h] [rbp-DFh]
  PVOID Objecta; // [rsp+30h] [rbp-D8h]
  char *Objectb; // [rsp+30h] [rbp-D8h]
  void *v38; // [rsp+38h] [rbp-D0h]
  _QWORD v39[10]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v40; // [rsp+98h] [rbp-70h]
  _QWORD v41[8]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v42[8]; // [rsp+E8h] [rbp-20h] BYREF

  v5 = 0;
  memset_0(v41, 0, sizeof(v41));
  memset_0(v42, 0, sizeof(v42));
  if ( a3 < 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(a1 + 195);
    if ( (KSPIN_LOCK *)a1[168] == a1 + 168 )
    {
      if ( (a3 & 0x40000000) == 0 )
      {
        KeReleaseSpinLock(a1 + 195, v6);
        return;
      }
      v5 = 1;
    }
    KeReleaseSpinLock(a1 + 195, v6);
  }
  v7 = 8LL;
  v8 = 0LL;
  do
  {
    v9 = ExReferenceCallBackBlock((char *)&IopUpdatePriorityCallbackRoutine + v8 * 8);
    v41[v8] = v9;
    if ( v9 )
      v42[v8] = *(_QWORD *)(v9 + 16);
    ++v8;
    --v7;
  }
  while ( v7 );
  v10 = a1;
  v11 = 0;
  if ( v5 == 1 )
    goto LABEL_39;
  v38 = 0LL;
  v12 = KeAcquireSpinLockRaiseToDpc(a1 + 195);
  v13 = a1[168];
  v31 = v12;
  if ( (KSPIN_LOCK *)v13 != a1 + 168 )
  {
    do
    {
      if ( *(_BYTE *)(v13 + 35) <= *(_BYTE *)(v13 + 34) )
      {
        v14 = *(_QWORD *)(v13 + 152);
        if ( v14 < v13 + 8 * (9LL * *(char *)(v13 + 34) + 22) )
        {
          if ( *(_QWORD *)(v14 + 40) )
          {
            v15 = *(void **)(v14 + 40);
            for ( i = 0; i < 8u; ++i )
            {
              Objecta = (PVOID)v41[i];
              if ( Objecta )
              {
                v33 = 0;
                KxAcquireQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
                for ( j = *(_QWORD *)(*(_QWORD *)(v42[i] + 32LL) + 8LL); j; j = *(_QWORD *)(j + 16) )
                {
                  if ( (void *)j == v15 && (*(_DWORD *)(j + 48) & 0x1000000) != 0 )
                  {
                    v33 = 1;
                    break;
                  }
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                               + 160));
                if ( v33 == 1 && v38 != v15 )
                {
                  v38 = v15;
                  if ( v11 < 2 )
                  {
                    v19 = 6LL * v11;
                    v39[v19] = Objecta;
                    LOWORD(v39[v19 + 5]) = i;
                    v39[v19 + 1] = v15;
                    v39[v19 + 2] = v10;
                    LODWORD(v39[v19 + 3]) = a2;
                    v39[v19 + 4] = 0LL;
                  }
                  else
                  {
                    Pool2 = ExAllocatePool2(0x40uLL);
                    if ( !Pool2 )
                      break;
                    *(_QWORD *)(Pool2 + 32) = v40;
                    v40 = (_QWORD *)Pool2;
                    *(_QWORD *)Pool2 = Objecta;
                    *(_DWORD *)(Pool2 + 24) = a2;
                    *(_WORD *)(Pool2 + 40) = i;
                    *(_QWORD *)(Pool2 + 8) = v15;
                    *(_QWORD *)(Pool2 + 16) = v10;
                  }
                  ObfReferenceObjectWithTag(v15, 0x746C6644u);
                  ObfReferenceObjectWithTag(v10, 0x746C6644u);
                  ++v11;
                  if ( (*(_DWORD *)(v13 - 16) & 2) != 0 )
                    ++IoBoostedPagingIrpCount;
                  else
                    ++IoBoostedThreadedIrpCount;
                  break;
                }
              }
            }
          }
        }
      }
      v13 = *(_QWORD *)v13;
    }
    while ( (KSPIN_LOCK *)v13 != v10 + 168 );
    v12 = v31;
  }
  KeReleaseSpinLock(v10 + 195, v12);
  if ( !v11 )
  {
LABEL_39:
    v20 = 0;
    Objectb = 0LL;
    v21 = 0LL;
    do
    {
      v22 = *(_QWORD *)((char *)v41 + (_QWORD)v21);
      if ( v22 )
      {
        v23 = KeAcquireQueuedSpinLock(0xAuLL);
        v32 = v23;
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v42 + (_QWORD)v21) + 32LL) + 8LL);
        if ( v24 )
        {
          do
          {
            if ( (*(_DWORD *)(v24 + 48) & 0x1000000) != 0 )
            {
              if ( v11 < 2 )
              {
                v26 = 6LL * v11;
                v39[v26] = v22;
                LOWORD(v39[v26 + 5]) = v20;
                v39[v26 + 1] = v24;
                v39[v26 + 2] = v10;
                LODWORD(v39[v26 + 3]) = a2;
                v39[v26 + 4] = 0LL;
              }
              else
              {
                v25 = ExAllocatePool2(0x40uLL);
                if ( !v25 )
                  break;
                *(_QWORD *)(v25 + 32) = v40;
                v40 = (_QWORD *)v25;
                *(_QWORD *)v25 = v22;
                *(_WORD *)(v25 + 40) = v20;
                *(_QWORD *)(v25 + 8) = v24;
                *(_QWORD *)(v25 + 16) = v10;
                *(_DWORD *)(v25 + 24) = a2;
              }
              ObfReferenceObjectWithTag((PVOID)v24, 0x746C6644u);
              ObfReferenceObjectWithTag(v10, 0x746C6644u);
              ++v11;
            }
            v24 = *(_QWORD *)(v24 + 16);
          }
          while ( v24 );
          v21 = Objectb;
          v23 = v32;
        }
        KeReleaseQueuedSpinLock(0xAuLL, v23);
      }
      v21 += 8;
      ++v20;
      Objectb = v21;
    }
    while ( v20 < 8u );
    if ( v11 )
      ++IoBlanketBoostCount;
  }
  for ( k = 0; k < v11; ++k )
  {
    if ( k >= 2u )
    {
      v28 = v40;
      v40 = (_QWORD *)v40[4];
    }
    else
    {
      v28 = &v39[6 * k];
    }
    guard_dispatch_icall_no_overrides(*v28, v28 + 1, 0LL);
    if ( k >= 2u )
      ExFreePoolWithTag(v28, 0);
  }
  v29 = 8LL;
  v30 = 0LL;
  do
  {
    if ( v41[v30] )
      ExDereferenceCallBackBlock((char *)&IopUpdatePriorityCallbackRoutine + v30 * 8);
    ++v30;
    --v29;
  }
  while ( v29 );
}
