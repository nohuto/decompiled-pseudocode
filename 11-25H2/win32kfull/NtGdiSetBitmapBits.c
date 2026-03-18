/*
 * XREFs of NtGdiSetBitmapBits @ 0x140092CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x140092D1C (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x140093084 (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 */

__int64 __fastcall NtGdiSetBitmapBits(HSURF a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  umptr_r<unsigned char>::init_probe(v6, a3, a2, 1LL);
  if ( v6[0] )
    return (unsigned int)GreSetBitmapBitsInternal(a1);
  return v3;
}
