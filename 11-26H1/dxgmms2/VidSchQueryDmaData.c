/*
 * XREFs of VidSchQueryDmaData @ 0x14009936C
 * Callers:
 *     ?VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z @ 0x140126C64 (-VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z.c)
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x140099458 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchQueryDmaData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // rdi
  unsigned int i; // r8d
  __int64 v10; // rdx
  __int64 result; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  unsigned int v16; // [rsp+44h] [rbp+1Ch]

  v16 = HIDWORD(a3);
  v5 = *(__int64 **)(a1 + 696);
  v6 = a3;
  if ( a2 < *(_DWORD *)(a1 + 768) )
    v5 += a2;
  v8 = *v5;
  VidSchiBlockDriverCallback(a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 2900); ++i )
  {
    v10 = 208LL * i;
    if ( *(_DWORD *)(v10 + v8 + 16632) != 3 && *(_QWORD *)(v10 + v8 + 16648) == __PAIR64__(v16, v6) )
    {
      result = 0LL;
      v12 = *(_OWORD *)(v10 + v8 + 16672);
      *(_OWORD *)a4 = *(_OWORD *)(v10 + v8 + 16656);
      v13 = *(_OWORD *)(v10 + v8 + 16688);
      *(_OWORD *)(a4 + 16) = v12;
      v14 = *(_OWORD *)(v10 + v8 + 16704);
      *(_OWORD *)(a4 + 32) = v13;
      v15 = *(_OWORD *)(v10 + v8 + 16720);
      *(_OWORD *)(a4 + 48) = v14;
      *(_QWORD *)&v14 = *(_QWORD *)(v10 + v8 + 16736);
      *(_OWORD *)(a4 + 64) = v15;
      *(_QWORD *)(a4 + 80) = v14;
      return result;
    }
  }
  return 3221225485LL;
}
