/*
 * XREFs of ?Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEBUtagRIMPOINTERINFONODE@@K_K_N@Z @ 0x140226748
 * Callers:
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAVCIVTouchSerializer@@@Z @ 0x14021E5E8 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x14018673C (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 */

__int64 __fastcall CIVTouchSerializer::Serialize(
        CIVTouchSerializer *this,
        struct _IVRIMPOINTERINFONODE **a2,
        const struct tagRIMPOINTERINFONODE *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v9; // r10
  __int64 *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  char *v14; // rdx
  int v15; // eax
  __m128i v16; // xmm3
  __m128i v17; // xmm2
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __m128i v20; // xmm5
  __m128i v21; // xmm4

  v5 = *((unsigned int *)this + 3);
  if ( !CIVSerializer::Ensure(this, (a5 + 7) & 0xFFFFFFF8) )
    return 3221225495LL;
  v11 = v5 + *(_QWORD *)(v7 + 16);
  *v10 = v11;
  if ( v8 )
  {
    v12 = v11 + 12;
    v13 = v8;
    v14 = (char *)a3 + 10;
    do
    {
      *(_DWORD *)(v12 - 12) = *(_DWORD *)(v14 - 10);
      *(_WORD *)(v12 - 4) = *((_WORD *)v14 - 1);
      *(_WORD *)v12 = *(_WORD *)v14;
      *(_DWORD *)(v12 + 140) = *(_DWORD *)(v14 + 150);
      *(_DWORD *)(v12 + 144) = *(_DWORD *)(v14 + 154);
      *(_OWORD *)(v12 + 148) = *(_OWORD *)(v14 + 158);
      v15 = *(_DWORD *)(v14 + 6);
      if ( v15 == 2 )
      {
        *(_DWORD *)(v12 + 92) = *(_DWORD *)(v14 + 102);
        *(_DWORD *)(v12 + 96) = *(_DWORD *)(v14 + 106);
        *(_OWORD *)(v12 + 100) = *(_OWORD *)(v14 + 110);
        *(_OWORD *)(v12 + 116) = *(_OWORD *)(v14 + 126);
        *(_DWORD *)(v12 + 132) = *(_DWORD *)(v14 + 142);
        *(_DWORD *)(v12 + 136) = *(_DWORD *)(v14 + 146);
      }
      else if ( v15 == 3 )
      {
        *(_DWORD *)(v12 + 92) = *(_DWORD *)(v14 + 102);
        *(_DWORD *)(v12 + 96) = *(_DWORD *)(v14 + 106);
        *(_DWORD *)(v12 + 100) = *(_DWORD *)(v14 + 110);
        *(_DWORD *)(v12 + 104) = *(_DWORD *)(v14 + 114);
        *(_DWORD *)(v12 + 108) = *(_DWORD *)(v14 + 118);
        *(_DWORD *)(v12 + 112) = *(_DWORD *)(v14 + 122);
      }
      v16 = *(__m128i *)(v14 + 70);
      v17 = *(__m128i *)(v14 + 6);
      v18 = *(_OWORD *)(v14 + 38);
      v19 = *(_OWORD *)(v14 + 54);
      v20 = *(__m128i *)(v14 + 22);
      v21 = *(__m128i *)(v14 + 86);
      v14 += 192;
      *(_DWORD *)(v12 + 4) = v17.m128i_i32[0];
      *(_DWORD *)(v12 + 8) = v17.m128i_i32[1];
      *(_DWORD *)(v12 + 60) = _mm_cvtsi128_si32(v16);
      *(_QWORD *)(v12 + 76) = v21.m128i_i64[0];
      *(_DWORD *)(v12 + 16) = _mm_srli_si128(v17, 8).m128i_i32[1];
      *(_OWORD *)(v12 + 28) = v18;
      *(_OWORD *)(v12 + 44) = v19;
      *(_DWORD *)(v12 + 64) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 4));
      *(_DWORD *)(v12 + 68) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
      *(_DWORD *)(v12 + 72) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 12));
      *(_DWORD *)(v12 + 84) = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
      *(_QWORD *)(v12 + 20) = _mm_srli_si128(v20, 8).m128i_u64[0];
      v12 += 176LL;
      --v13;
    }
    while ( v13 );
  }
  *v10 = (*v10 - *(_QWORD *)(v9 + 16)) | 1;
  return 0LL;
}
