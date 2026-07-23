/*
 * XREFs of ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640190
 * Callers:
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640444 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x1403EDA40 (RtlGetCompressionWorkSpaceSize.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x1403EE8AC (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403EEE8C (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 */

int __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(__int64 a1, int a2)
{
  __int64 *v2; // rdi
  int result; // eax
  int IdealProcessor; // eax
  __int64 v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(__int64 **)(a1 + 8);
  CompressFragmentWorkSpaceSize = 0;
  result = RtlGetCompressionWorkSpaceSize(word_140017648[a2], (PULONG)(a1 + 164), &CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    result = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(
               a1,
               *v2,
               0LL,
               (__int64 (__fastcall *)(void *))SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread);
    if ( result >= 0 )
    {
      IdealProcessor = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(
                         (__int64)v2,
                         *(_DWORD *)(a1 + 168),
                         0);
      v6 = *v2;
      v7 = IdealProcessor;
      result = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(a1, v6, (__int64)&v7, 0LL);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
