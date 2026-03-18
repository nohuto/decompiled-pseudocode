/*
 * XREFs of SmSwapStore @ 0x140AEA064
 * Callers:
 *     SmStoreCompressionStart @ 0x140AE9D90 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140AE9E34 (SmStoreCompressionStop.c)
 *     MiInSwapStoreWorker @ 0x140AE9FA0 (MiInSwapStoreWorker.c)
 * Callees:
 *     SmKmStoreGet @ 0x140354B70 (SmKmStoreGet.c)
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1403F4448 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 *     SmpKeyedStoreEntryGet @ 0x140409DF0 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmSwapStore(__int64 a1, int a2)
{
  __int64 v3; // rbx
  unsigned __int64 *v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  _KPROCESS *Process; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = SmpKeyedStoreEntryGet((struct _KTHREAD *)(v3 + 2344), (unsigned __int64 *)&Process, 0, 0LL);
  if ( !v4 )
    return 3221226021LL;
  v5 = (_DWORD *)SmKmStoreGet(v3, *((_WORD *)v4 + 8));
  v7 = 2;
  if ( a2 != 2 )
    v7 = a2 != 0;
  return SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(v6, v5, v7);
}
