/*
 * XREFs of ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024D660
 * Callers:
 *     <none>
 * Callees:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x14021C100 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14024CA30 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x1403EEC68 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x1403EECC8 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x14043C534 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x1404BBC7C (-SmCompressCtxCompletePendingEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread(void *a1)
{
  __int64 v1; // rbx
  __int64 *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 **v8; // rdx
  KIRQL v9; // di
  int v10; // r14d
  int v11; // r15d
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v13; // edi
  KIRQL v14; // si
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  _QWORD **v17; // rcx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rcx
  KIRQL v20; // al
  KIRQL v21; // di
  _DWORD *v22; // r8
  KIRQL v23; // al
  __int64 v24; // rax
  __int64 *v25; // rcx
  PVOID Object[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v28; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v29; // [rsp+58h] [rbp-41h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-39h]
  __int64 v31[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v32; // [rsp+80h] [rbp-19h]
  __int64 v33; // [rsp+88h] [rbp-11h]
  __int64 v34; // [rsp+90h] [rbp-9h]
  __int64 v35; // [rsp+98h] [rbp-1h] BYREF
  __int128 v36; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v37; // [rsp+B0h] [rbp+17h]
  __int64 retaddr; // [rsp+F8h] [rbp+5Fh]
  __int64 v40; // [rsp+108h] [rbp+6Fh] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  Object[0] = (PVOID)(*(_QWORD *)a1 + 80LL);
  v31[0] = *((_QWORD *)a1 + 1);
  v40 = -50000000LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v31[1] = v1;
  v4 = *v3;
  Object[1] = (PVOID)(v1 + 32);
  v5 = *(_QWORD *)(v4 + 2136);
  v33 = *((_QWORD *)a1 + 3);
  v34 = *((_QWORD *)a1 + 4);
  v32 = v5;
  v36 = (unsigned __int64)&v35;
  *(_QWORD *)&v37 = (char *)&v36 + 8;
  BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
  ++*(_DWORD *)(v1 + 156);
  v8 = *(__int64 ***)(v1 + 112);
  v9 = v6;
  if ( *v8 != (__int64 *)(v1 + 104) )
    goto LABEL_2;
  v28 = v1 + 104;
  v29 = (__int64 *)v8;
  *v8 = &v28;
  *(_QWORD *)(v1 + 112) = &v28;
  KeSetActualBasePriorityThread(BugCheckParameter1, *(unsigned int *)(v1 + 152), v7);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdateThreadTopology(v1, BugCheckParameter1);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1, v9);
  KeSetEvent(*((PRKEVENT *)a1 + 2), 0, 0);
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      Timeout = (LARGE_INTEGER *)&v40;
      if ( *(_DWORD *)(v1 + 156) <= 1u )
        Timeout = 0LL;
      v13 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrKernel, 0, 0, Timeout, 0LL);
      if ( v13 == 258 )
        break;
      v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
      if ( !v13 )
        goto LABEL_52;
      ++*(_DWORD *)(v1 + 160);
      v11 = 1;
      v15 = 0LL;
      while ( 1 )
      {
        if ( *(_DWORD *)(v1 + 156) <= 1u || *((_DWORD *)v3 + 11) - *((_DWORD *)v3 + 10) <= 0 )
        {
          v16 = *(_QWORD **)(v1 + 24);
          v17 = (_QWORD **)(v1 + 16);
          if ( v16 == (_QWORD *)(v1 + 16) )
          {
            v18 = 0LL;
          }
          else
          {
            v18 = *v17;
            *v17 = (_QWORD *)**v17;
            if ( v18 == v16 )
            {
              *(_QWORD *)(v1 + 24) = v1 + 16;
              *v17 = 0LL;
            }
            else
            {
              --*v16;
            }
          }
        }
        else
        {
          if ( !v15 )
            goto LABEL_52;
          v18 = 0LL;
        }
        if ( !*(_DWORD *)(v1 + 36) )
        {
          if ( (v19 = **(_QWORD **)(v1 + 24), !v18) && v19 || v19 > (unsigned int)(32 * *(_DWORD *)(v1 + 160)) )
            v10 = 1;
        }
        if ( !v18 )
        {
          --*(_DWORD *)(v1 + 160);
          v11 = 0;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)v1 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)v1, retaddr);
        if ( v10 )
        {
          KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
          v10 = 0;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        __writecr8(v14);
        if ( !v18 )
          break;
        v15 = (__int64)(v18 - 9);
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry((__int64)v31, v15);
        v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
        if ( *(_DWORD *)(*(_QWORD *)(v1 + 8) + 44LL) - *(_DWORD *)(*(_QWORD *)(v1 + 8) + 40LL) < 0
          && **(_QWORD **)(v1 + 24) > (unsigned __int64)(unsigned int)(32 * *(_DWORD *)(v1 + 156)) )
        {
          KeSetEvent((PRKEVENT)(v1 + 56), 0, 0);
        }
      }
      while ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompletePendingEntry(v31) )
        ;
      if ( *(_QWORD *)(v1 + 128) != v1 + 120 )
      {
        v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 136));
        v21 = v20;
        if ( !*(_DWORD *)(v1 + 140) )
        {
          *(_DWORD *)(v1 + 140) = 1;
          SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(v1, v31[0], v20);
        }
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 136), v21);
      }
      while ( (__int128 *)v37 != (__int128 *)((char *)&v36 + 8) )
      {
        v22 = (_DWORD *)*((_QWORD *)&v36 + 1);
        *((_QWORD *)&v36 + 1) = **((_QWORD **)&v36 + 1) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v22 == (_DWORD *)v37 )
        {
          *((_QWORD *)&v36 + 1) = 0LL;
          *(_QWORD *)&v37 = (char *)&v36 + 8;
        }
        else
        {
          *(_QWORD *)v37 = *(_QWORD *)v37 & 7LL | (8LL * (*(_QWORD *)v37 >> 3) - 8);
        }
        if ( (*v22 & 2) != 0 )
          --DWORD2(v37);
        SmHwAcceleratorPartitionMgrFreeDescriptor(v32, v22);
      }
    }
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
    v14 = v23;
    if ( *(_DWORD *)(v1 + 156) > 1u )
      break;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1, v23);
  }
LABEL_52:
  if ( !*(_DWORD *)(v1 + 36) && *(_QWORD *)(v1 + 24) != v1 + 16 )
    v10 = 1;
  v24 = v28;
  v25 = v29;
  if ( *(__int64 **)(v28 + 8) != &v28 || (__int64 *)*v29 != &v28 )
LABEL_2:
    __fastfail(3u);
  *v29 = v28;
  *(_QWORD *)(v24 + 8) = v25;
  if ( v11 )
    --*(_DWORD *)(v1 + 160);
  --*(_DWORD *)(v1 + 156);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
  if ( v10 )
    KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  __writecr8(v14);
  _InterlockedDecrement((volatile signed __int32 *)v3 + 11);
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxDeleteThreadParams(a1);
}
