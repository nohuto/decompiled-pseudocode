/*
 * XREFs of ?init_probe@?$umptr_w@E@@SA?AV1@PEAE_K1@Z @ 0x1400A4D70
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1400A50E0 (NtGdiGetBitmapBits.c)
 *     NtGdiGetDIBitsInternal @ 0x1400B4540 (NtGdiGetDIBitsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall umptr_w<unsigned char>::init_probe(__int64 a1, volatile void *a2, unsigned __int64 a3, ULONG a4)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  if ( is_mul_ok(a3, 1uLL) )
  {
    ProbeForWrite(a2, (unsigned int)a3, a4);
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}
