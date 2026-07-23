/*
 * XREFs of MiReturnLockedVadOrNextVa @ 0x140446910
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiWaitForVadDeletion @ 0x140533514 (MiWaitForVadDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReturnLockedVadOrNextVa(unsigned __int64 a1, _QWORD *a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r14
  KIRQL v8; // al
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rax
  char v14; // si
  __int64 v15; // rbx
  volatile signed __int32 *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  bool v23; // zf
  signed __int32 v24; // eax
  struct _KTHREAD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 result; // rax
  unsigned __int64 NextVad; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  --CurrentThread->SpecialApcDisable;
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1);
  v10 = v8;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    MiUnlockVadTree(0, v8);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v35, v34);
    *a2 = 0LL;
    return 3221225738LL;
  }
  v11 = *(_QWORD **)&Process[3].Header.Lock;
  if ( v11 )
  {
    v12 = a1 >> 12;
    while ( 1 )
    {
      if ( v12 >= (*((unsigned int *)v11 + 6) | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32)) )
      {
        if ( v12 <= (*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)v11 + 9) )
            KeBugCheckEx(0x1Au, 0x41203uLL, (ULONG_PTR)v11, 0LL, 0LL);
          v16 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8]
              + 1;
          if ( (_BYTE)v10 == 17 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd(v16, 0xBFFFFFFF);
              _InterlockedDecrement(v16);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v16, retaddr);
            }
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd(v16, 0xBFFFFFFF);
              _InterlockedDecrement(v16);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v16, retaddr);
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
            __writecr8(v10);
          }
          MiLockVadShared((__int64)CurrentThread, (__int64)v11, (__int64)v16, v9);
          if ( (v11[6] & 1) != 0 )
          {
            LODWORD(CurrentThread[1].Queue) &= ~0x4000u;
            if ( _InterlockedCompareExchange64(v11 + 5, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v11 + 5);
            KeAbPostRelease((unsigned __int64)(v11 + 5));
            v23 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v23
              && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v20, v19);
            }
            MiLockVad((__int64)CurrentThread, (__int64)v11, v21, v22);
            MiWaitForVadDeletion(v11);
            v24 = _InterlockedDecrement((volatile signed __int32 *)v11 + 9);
            if ( v24 == -1 )
              KeBugCheckEx(0x1Au, 0x41203uLL, (ULONG_PTR)v11, 0LL, 0LL);
            v25 = KeGetCurrentThread();
            if ( v24 )
            {
              MiUnlockVad((__int64)v25, (__int64)v11);
            }
            else
            {
              MiUnlockVad((__int64)v25, (__int64)v11);
              ExFreePoolWithTag(v11, 0);
            }
            v23 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v23
              && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v27, v26);
            }
            goto LABEL_2;
          }
          v23 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v23
            && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v18, v17);
          }
          if ( v12 < (*((unsigned int *)v11 + 6) | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32))
            || v12 > (*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) )
          {
            MiUnlockAndDereferenceVadShared((ULONG_PTR)v11);
            goto LABEL_2;
          }
          *a2 = v11;
          return 0LL;
        }
        v13 = (_QWORD *)v11[1];
        if ( !v13 )
        {
          v14 = 1;
          goto LABEL_8;
        }
      }
      else
      {
        v13 = (_QWORD *)*v11;
        if ( !*v11 )
        {
          v14 = 0;
LABEL_8:
          if ( !v11 )
            break;
          if ( v14 )
          {
            NextVad = MiGetNextVad((unsigned __int64)v11);
            if ( !NextVad )
            {
              v15 = 0x7FFFFFFF0000LL;
              goto LABEL_53;
            }
            v30 = *(unsigned int *)(NextVad + 24);
            v31 = *(unsigned __int8 *)(NextVad + 32);
          }
          else
          {
            v30 = *((unsigned int *)v11 + 6);
            v31 = *((unsigned __int8 *)v11 + 32);
          }
          v15 = (v30 | (v31 << 32)) << 12;
          goto LABEL_53;
        }
      }
      v11 = v13;
    }
  }
  v15 = 0x7FFFFFFF0000LL;
LABEL_53:
  MiUnlockVadTree(0, v10);
  v23 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v23 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v33, v32);
  result = 0LL;
  *a3 = v15;
  *a2 = 0LL;
  return result;
}
