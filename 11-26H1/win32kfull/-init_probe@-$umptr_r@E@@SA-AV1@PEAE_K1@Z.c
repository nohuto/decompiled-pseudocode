/*
 * XREFs of ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x140079040
 * Callers:
 *     NtGdiSetBitmapBits @ 0x140078AE0 (NtGdiSetBitmapBits.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x140078CC0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiStretchDIBitsInternal @ 0x14007C4E0 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x14007DD60 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateBitmap @ 0x1401BBA40 (NtGdiCreateBitmap.c)
 *     NtGdiPolyDraw @ 0x140206AD0 (NtGdiPolyDraw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall umptr_r<unsigned char>::init_probe(__int64 a1, volatile void *a2, unsigned __int64 a3, ULONG a4)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  if ( is_mul_ok(a3, 1uLL) )
  {
    ProbeForRead(a2, (unsigned int)a3, a4);
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}
