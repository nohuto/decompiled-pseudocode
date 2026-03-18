/*
 * XREFs of MiInitializeForkMaps @ 0x140961828
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140961614 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiMapSinglePage @ 0x14036A87C (MiMapSinglePage.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiInitializeForkMaps(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __m128i si128; // xmm0
  unsigned __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  v3 = a1[1];
  v7 = 0LL;
  memset_0(a1 + 10, 0, 0xA8uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(__m128i *)(a1 + 7) = si128;
  a1[9] = si128.m128i_i64[0];
  a1[6] = v3;
  MiInitializePageColorBase(v1 + 1024, 3, 0, (__int64)&v7);
  MiCreateUltraThreadContext((__int64)(a1 + 15), (__int64)&v7, 8, 0LL);
  if ( *((_BYTE *)a1 + 240) )
    return 0LL;
  v5 = MiMapSinglePage(0LL, 0LL, 1073741856LL, 2uLL);
  a1[13] = v5;
  return v5 == 0 ? 0xC000009A : 0;
}
