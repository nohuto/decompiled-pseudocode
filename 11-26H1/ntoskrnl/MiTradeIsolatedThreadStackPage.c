/*
 * XREFs of MiTradeIsolatedThreadStackPage @ 0x1406F82F8
 * Callers:
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyKstack @ 0x14050CEF4 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140532FD0 (MiSwitchKstackPages.c)
 *     KeTryToFreezeThreadStack @ 0x1405EE9D0 (KeTryToFreezeThreadStack.c)
 */

__int64 __fastcall MiTradeIsolatedThreadStackPage(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  const __m128i *v7; // rsi
  __m128i *v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 *v11; // r8
  unsigned __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-10h]
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( !KeTryToFreezeThreadStack(a1, &v12, a3) )
    return 0LL;
  v7 = (const __m128i *)(48LL * (_QWORD)a3 - 0x220000000000LL);
  v8 = (__m128i *)(48 * a2 - 0x220000000000LL);
  v9 = MiMapPageInHyperSpaceWorker(a2, 0LL, 0x80000000);
  MiCopyKstack((__int64)v8, (__int64)v7, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1);
  MiUnmapPageInHyperSpaceWorker(v9, 0x11u, 0x80000000);
  v16 = 0;
  while ( _interlockedbittestandset64(&v8[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( v8[1].m128i_i64[1] < 0 );
  }
  MiSwitchKstackPages(v8, v7);
  _InterlockedAnd64(&v8[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  MiClearPfnReuseFields((__int64)v7);
  v10 = v7[1].m128i_i64[1];
  v13[0] = 0LL;
  v15 = 0LL;
  v7[1].m128i_i64[1] = v10 & 0xC000000000000000uLL;
  v7[2].m128i_i32[0] &= 0xFFFF0000;
  v13[1] = v12;
  v14 = 0LL;
  KiReleaseThreadStateLock(v12, (__int64)v13, v11);
  result = 1LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
