/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1402842C0
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x14020E040 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     GetCurrentThreadCompositedDpi @ 0x140090E74 (GetCurrentThreadCompositedDpi.c)
 *     GetMonitorRect @ 0x140091000 (GetMonitorRect.c)
 *     ExpandedMonitorSpace @ 0x140159B3C (ExpandedMonitorSpace.c)
 *     GetPhysicalScreenRect @ 0x1401E2F60 (GetPhysicalScreenRect.c)
 */

char __fastcall GetHimetricScaleForMonitor(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int j; // eax
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __int64 v9; // rcx
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __m128i v11; // xmm8
  __int64 v12; // rdx
  __m128i *PhysicalScreenRect; // rax
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  unsigned int v16; // r11d
  unsigned int i; // r9d
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF

  LOBYTE(j) = W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF;
  if ( (_BYTE)j == 2 )
  {
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    v7 = *(__m128i *)GetMonitorRect((__int64)&v21, a1);
    v8 = *(__m128i *)(*(_QWORD *)(a1 + 40) + 28LL);
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi(v9);
    v11 = *(__m128i *)ExpandedMonitorSpace((__int64)&v21, CurrentThreadCompositedDpi);
    PhysicalScreenRect = (__m128i *)GetPhysicalScreenRect(&v21, v12);
    v14 = (_mm_cvtsi128_si32(_mm_srli_si128(*PhysicalScreenRect, 8)) - _mm_cvtsi128_si32(*PhysicalScreenRect))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7));
    v15 = v14;
    v16 = (_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) - _mm_cvtsi128_si32(v11))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - _mm_cvtsi128_si32(v8));
    for ( i = v16; v15; i = v18 )
    {
      v18 = v15;
      v15 = i % v15;
    }
    v19 = v14 / i;
    for ( j = v16 / i; v19 > 0x7FFFFFFF || j > 0x7FFFFFFF; j >>= 1 )
      v19 >>= 1;
    if ( !j || !v19 )
    {
      v19 = 1;
      j = 1;
    }
    *a2 = v19;
    *a3 = j;
  }
  return j;
}
