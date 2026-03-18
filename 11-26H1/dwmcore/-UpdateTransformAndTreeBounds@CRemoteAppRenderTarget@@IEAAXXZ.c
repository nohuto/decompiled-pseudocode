/*
 * XREFs of ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802566B4
 * Callers:
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x180255A00 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180057CB8 (-IsEquivalentTo@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@.c)
 */

void __fastcall CRemoteAppRenderTarget::UpdateTransformAndTreeBounds(CRemoteAppRenderTarget *this)
{
  int v2; // eax
  __m128i v3; // xmm2
  __m128i v4; // xmm3
  float v5; // xmm0_4
  int v6; // eax
  __m128i v7; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 14) )
  {
    v2 = *((_DWORD *)this + 30);
    v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 544));
    v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 545));
    v7 = *(__m128i *)((char *)this + 260);
    v5 = (float)v2;
    v6 = *((_DWORD *)this + 31);
    *(float *)v3.m128i_i32 = _mm_cvtepi32_ps(v3).m128_f32[0];
    *(float *)v4.m128i_i32 = _mm_cvtepi32_ps(v4).m128_f32[0];
    *((_DWORD *)this + 65) = v3.m128i_i32[0];
    *((_DWORD *)this + 66) = v4.m128i_i32[0];
    *((float *)this + 67) = v5 + *(float *)v3.m128i_i32;
    *((float *)this + 68) = (float)v6 + *(float *)v4.m128i_i32;
    *((_QWORD *)this + 24) = 1065353216LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_DWORD *)this + 52) = 0;
    *(_QWORD *)((char *)this + 212) = 1065353216LL;
    *(_QWORD *)((char *)this + 220) = 0LL;
    *((_DWORD *)this + 57) = 0;
    *((_QWORD *)this + 29) = 1065353216LL;
    *((_DWORD *)this + 60) = v3.m128i_i32[0] ^ _xmm;
    *(_QWORD *)((char *)this + 244) = v4.m128i_i32[0] ^ (unsigned int)_xmm;
    *((_DWORD *)this + 63) = 1065353216;
    *((_BYTE *)this + 257) &= 0xE9u;
    *((_BYTE *)this + 257) |= 0x29u;
    *((_BYTE *)this + 256) = -88;
    if ( !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEquivalentTo(
            &v7,
            (const __m128i *)((char *)this + 260)) )
    {
      *(_BYTE *)(*((_QWORD *)this + 14) + 2628LL) = 1;
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
    }
    *((_BYTE *)this + 2188) = 0;
  }
  else
  {
    *((_QWORD *)this + 24) = 1065353216LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_DWORD *)this + 52) = 0;
    *(_QWORD *)((char *)this + 212) = 1065353216LL;
    *(_QWORD *)((char *)this + 220) = 0LL;
    *((_DWORD *)this + 57) = 0;
    *((_QWORD *)this + 29) = 1065353216LL;
    *((_QWORD *)this + 30) = 0LL;
    *((_DWORD *)this + 62) = 0;
    *((_DWORD *)this + 63) = 1065353216;
    *((_BYTE *)this + 257) &= 0xE9u;
    *((_BYTE *)this + 257) |= 0x29u;
    *((_BYTE *)this + 256) = -86;
    *(_QWORD *)((char *)this + 268) = 0LL;
    *(_QWORD *)((char *)this + 260) = 0LL;
  }
}
