/*
 * XREFs of ?SmCompressCtxNewThreadNeeded@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1403EEC98
 * Callers:
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403EEB50 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxNewThreadNeeded(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r8d
  int v3; // edx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(v1 + 44);
  v3 = *(_DWORD *)(v1 + 40);
  result = 0;
  if ( v2 - v3 < 0 )
    return **(_QWORD **)(a1 + 24) > (unsigned __int64)(unsigned int)(32 * *(_DWORD *)(a1 + 156));
  return result;
}
