/*
 * XREFs of SearchDmaBufferInAllPool @ 0x1400A4040
 * Callers:
 *     ?VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z @ 0x140126C64 (-VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall SearchDmaBufferInAllPool(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 *v5; // rdx
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rcx

  v2 = (__int64 *)qword_14008A9C0;
  while ( 1 )
  {
    v5 = v2;
    if ( v2 == &qword_14008A9C0 )
      break;
    v6 = v2 - 13;
    v2 = (__int64 *)*v2;
    if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(*v6 + 24) )
    {
      v7 = v5 - 2;
      v8 = (__int64 *)*v7;
      while ( v8 != v7 )
      {
        v9 = v8;
        v8 = (__int64 *)*v8;
        if ( v9[19] == a2 )
          return v9;
      }
    }
  }
  return 0LL;
}
