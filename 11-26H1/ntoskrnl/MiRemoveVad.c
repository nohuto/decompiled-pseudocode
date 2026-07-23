/*
 * XREFs of MiRemoveVad @ 0x14044DF80
 * Callers:
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140AED468 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiCaptureDeleteHierarchy @ 0x1402E5900 (MiCaptureDeleteHierarchy.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiClearVadCellBits @ 0x14043B270 (MiClearVadCellBits.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiFreePhysicalView @ 0x140A941CC (MiFreePhysicalView.c)
 *     MiReturnPageTablePageCommitment @ 0x140B262B8 (MiReturnPageTablePageCommitment.c)
 */

char __fastcall MiRemoveVad(ULONG_PTR BugCheckParameter2, int a2, ULONG_PTR a3)
{
  unsigned int v3; // ebp
  _KPROCESS *Process; // r9
  ULONG_PTR v6; // rax
  unsigned __int64 j; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 i; // rax
  unsigned __int64 k; // rdi
  ULONG_PTR v11; // rax
  _QWORD *v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // r10
  struct _KLOCK_ENTRIES *v15; // r9
  unsigned __int64 *p_EntryLock; // r12
  AutoBoost *v17; // rax
  void *v18; // rdx
  __int64 v19; // r8
  AutoBoost *v20; // rbx
  unsigned __int64 v21; // r15
  ULONG_PTR v22; // rdx
  char v23; // cl
  _KPROCESS *v24; // rcx
  _DWORD *v25; // r8
  ULONG_PTR v26; // r15
  __int64 v27; // r13
  unsigned __int64 v28; // r15
  _KPROCESS *v29; // rcx
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  bool v34; // zf
  int v35; // eax
  int v36; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-A8h]
  int v39; // [rsp+40h] [rbp-88h]
  __int64 v40; // [rsp+48h] [rbp-80h]
  unsigned __int64 v41; // [rsp+50h] [rbp-78h]
  unsigned __int64 v42; // [rsp+58h] [rbp-70h]
  __int64 p_Blink; // [rsp+60h] [rbp-68h]
  unsigned __int64 *v44; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]
  KIRQL v47; // [rsp+D0h] [rbp+8h]
  int v48; // [rsp+D8h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+E0h] [rbp+18h]
  int v50; // [rsp+E8h] [rbp+20h] BYREF

  BugCheckParameter2a = a3;
  v48 = a2;
  v3 = 0;
  v50 = 0;
  CurrentThread = KeGetCurrentThread();
  v39 = a2 & 1;
  Process = CurrentThread->ApcState.Process;
  v40 = (__int64)Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  if ( (a2 & 1) != 0 )
  {
    v6 = BugCheckParameter2;
    j = *(_QWORD *)BugCheckParameter2;
    v8 = ((*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32)) << 12) | 0xFFF;
    v41 = (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32)) << 12;
    v42 = v8;
    if ( *(_QWORD *)BugCheckParameter2 )
    {
      for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
        j = i;
    }
    else
    {
      for ( j = *(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            j;
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)(j + 8) == v6 )
          break;
        v6 = j;
      }
    }
    k = *(_QWORD *)(BugCheckParameter2 + 8);
    v11 = BugCheckParameter2;
    if ( k )
    {
      v12 = *(_QWORD **)k;
      if ( *(_QWORD *)k )
      {
        do
        {
          k = (unsigned __int64)v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
    }
    else
    {
      for ( k = *(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            k;
            k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v11 )
          break;
        v11 = k;
      }
    }
  }
  else
  {
    v41 = 0LL;
    v8 = 0LL;
    v42 = 0LL;
    j = 0LL;
    k = 0LL;
  }
  --Process[3].Header.WaitListHead.Blink;
  v47 = 17;
  v13 = 2;
  MiFreePhysicalView(Process, BugCheckParameter2);
  --*(_WORD *)(v14 + 486);
  p_EntryLock = &v15[5].Entries[0].EntryLock;
  v44 = &v15[5].Entries[0].EntryLock;
  v17 = (AutoBoost *)KeAbPreAcquire((__int64)&v15[5].Entries[0].EntryLock, 0LL, 0LL, v15);
  v20 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_EntryLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_EntryLock, v17, (__int64)p_EntryLock);
  if ( v20 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v20, v18);
    else
      *((_BYTE *)v20 + 10) = 1;
  }
  if ( v39 )
  {
    v13 = 3;
    v47 = MiLockWorkingSetShared(p_Blink, (__int64)v18, v19);
    MiCaptureDeleteHierarchy(v41, v8, v47, (__int64)&v50);
  }
  v21 = MiLockVadTree(v13, (__int64)v18, v19);
  RtlAvlRemoveNode((unsigned __int64 *)(v40 + 1368), BugCheckParameter2);
  if ( *(_QWORD *)(v40 + 1376) == BugCheckParameter2 )
    *(_QWORD *)(v40 + 1376) = *(_QWORD *)(v40 + 1368);
  *(_QWORD *)(BugCheckParameter2 + 16) = -2LL;
  if ( _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36)) == -1 )
    KeBugCheckEx(0x1Au, 0x41203uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (v48 & 2) != 0 )
  {
    v22 = BugCheckParameter2a;
    if ( BugCheckParameter2 != BugCheckParameter2a )
    {
      v23 = *(_BYTE *)(BugCheckParameter2 + 33);
      *(_DWORD *)(BugCheckParameter2a + 28) = *(_DWORD *)(BugCheckParameter2 + 28);
      *(_BYTE *)(v22 + 33) = v23;
    }
  }
  v24 = KeGetCurrentThread()->ApcState.Process;
  v25 = (_DWORD *)&v24[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (v13 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v24[2].ActiveProcessors[4].StaticBitmap[8] + 1);
  }
  else if ( (_BYTE)v21 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v25 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v25, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v25 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v25, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
    __writecr8(v21);
  }
  if ( v39 )
  {
    MiUnlockWorkingSetShared(p_Blink, v47);
    v26 = BugCheckParameter2a;
    if ( BugCheckParameter2a )
    {
LABEL_60:
      if ( ((v41 ^ v42) & 0xFFFFFFE00000LL) != 0 || v50 )
      {
        BugCheckParameter4 = k;
        v32 = v40;
        MiReturnPageTablePageCommitment(v41, v42, v40, j, BugCheckParameter4, BugCheckParameter2, (__int64)&v50, 1);
      }
      else
      {
        v32 = v40;
      }
      if ( v26 )
        MiInsertVad(v26, v32, 2);
      goto LABEL_66;
    }
    v27 = v41 >> 16;
    v28 = v42 >> 16;
    if ( j
      && ((v41 ^ ((*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      ++v27;
    }
    if ( k
      && ((v42 ^ ((*(unsigned int *)(k + 24) | ((unsigned __int64)*(unsigned __int8 *)(k + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      if ( !v28 )
      {
LABEL_59:
        v26 = BugCheckParameter2a;
        goto LABEL_60;
      }
      --v28;
    }
    v48 = 0;
    v29 = KeGetCurrentThread()->ApcState.Process;
    v30 = (__int64)&v29[2].ActiveProcessors[3].StaticBitmap[12];
    if ( v29[2].ActiveProcessors[4].StaticBitmap[6] )
    {
      v31 = 0LL;
      do
      {
        MiClearVadCellBits((unsigned __int64 *)(v30 + 72 * v31), v27, v28, j, k, &v48);
        v31 = ++v3;
      }
      while ( (unsigned __int64)v3 < *(_QWORD *)(v30 + 216) );
    }
    p_EntryLock = v44;
    goto LABEL_59;
  }
LABEL_66:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_EntryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_EntryLock);
  KeAbPostRelease((unsigned __int64)p_EntryLock);
  v34 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v34 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)CurrentThread, v33);
  v35 = *(_DWORD *)(BugCheckParameter2 + 48);
  if ( (v35 & 0x80000) != 0 && ((v35 & 0x200000) != 0 || (v35 & 0x60000u) >= 0x40000)
    || (LOBYTE(v36) = *(_DWORD *)(BugCheckParameter2 + 48) & 0x1C, (_BYTE)v36 == 8)
    && (v36 = *(_DWORD *)(BugCheckParameter2 + 72), (v36 & 1) != 0) )
  {
    LOBYTE(v36) = v40;
    --*(_DWORD *)(v40 + 1500);
  }
  return v36;
}
