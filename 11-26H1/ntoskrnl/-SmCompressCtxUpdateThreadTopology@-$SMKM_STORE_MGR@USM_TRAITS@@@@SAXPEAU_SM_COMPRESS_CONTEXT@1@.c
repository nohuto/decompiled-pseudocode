/*
 * XREFs of ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x1403EECC8
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024D660 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressManagerRefreshTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140640330 (-SmCompressManagerRefreshTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetIdealProcessorThreadEx @ 0x140204930 (KeSetIdealProcessorThreadEx.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403EEE8C (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdateThreadTopology(__int64 a1, struct _KTHREAD *a2)
{
  __int64 v2; // rbx
  volatile unsigned int IdealProcessor; // eax

  v2 = *(_QWORD *)(a1 + 8);
  KeSetUserAffinityThread(a2, v2 + 328);
  IdealProcessor = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(v2, *(unsigned int *)(a1 + 168), 1LL);
  return KeSetIdealProcessorThreadEx(a2, IdealProcessor, 0LL);
}
