/*
 * XREFs of ?GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140236DAC
 * Callers:
 *     NtGdiScaleRgn @ 0x140236D50 (NtGdiScaleRgn.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140015840 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GrepScaleRgn(DC **a1, HRGN a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[40]; // [rsp+28h] [rbp-40h] BYREF
  int v9; // [rsp+50h] [rbp-18h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v7, a2, 0, 0);
  v3 = 0;
  if ( v7 )
  {
    if ( (unsigned int)DC::bDpiScaleTransform(*a1) )
    {
      RGNOBJ::vScale(
        &v7,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v4 + 524), (__m128)*(unsigned int *)(v4 + 528)).m128_u64[0]);
      v5 = v7;
    }
    if ( !v9 )
    {
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v7);
      v5 = v7;
    }
    if ( v5 )
      _InterlockedDecrement16((volatile signed __int16 *)(v5 + 12));
    v3 = 1;
  }
  else if ( !v9 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v7);
    if ( v7 )
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 12));
  }
  PopThreadGuardedObject(v8);
  return v3;
}
