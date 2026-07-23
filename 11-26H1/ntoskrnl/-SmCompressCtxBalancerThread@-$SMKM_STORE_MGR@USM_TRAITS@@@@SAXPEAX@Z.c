/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403EEB50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x1403EE8AC (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x1403EEC68 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ?SmCompressCtxNewThreadNeeded@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1403EEC98 (-SmCompressCtxNewThreadNeeded@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403EEE8C (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(PRKEVENT *P, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  KIRQL v5; // si
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  int IdealProcessor; // [rsp+60h] [rbp+8h] BYREF

  v3 = (__int64)*P;
  Object[0] = &(*P)[3].Header.WaitListHead;
  Object[1] = (PVOID)(v3 + 56);
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25LL, a3);
  KeSetEvent(P[2], 0, 0);
  while ( KeWaitForMultipleObjects(2u, Object, WaitAny, WrKernel, 0, 0, 0LL, 0LL) )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3);
    KeResetEvent((PRKEVENT)(v3 + 56));
    if ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxNewThreadNeeded(v3) )
    {
      IdealProcessor = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(
                         *(_QWORD *)(v3 + 8),
                         *(unsigned int *)(v3 + 168),
                         1LL);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v3, v5);
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v3, (__int64)P[1], (__int64)&IdealProcessor, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v3, v5);
    }
  }
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxDeleteThreadParams(P);
}
