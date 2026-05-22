/*
 * XREFs of ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1801B2C98
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B24F0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     sqrt @ 0x18009AB90 (sqrt.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGW4WaveformFlags@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800ED5D4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBGW4WaveformFl.c)
 */

void __fastcall MagnifierRecognizer::CheckForTwoFingerPan(MagnifierRecognizer *this)
{
  char v1; // r11
  int v3; // ecx
  int v4; // ecx
  __int64 **v5; // r10
  __int64 *v6; // rcx
  __m128i v7; // xmm2
  __m128i v8; // xmm3
  unsigned __int64 v9; // xmm0_8
  int v10; // edi
  unsigned __int64 v11; // rbx
  double v12; // xmm7_8
  double v13; // xmm6_8
  _QWORD *v14; // rdx
  __int64 *v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+10h]

  v1 = 0;
  if ( !*((_BYTE *)this + 3) || *((_BYTE *)this + 2) )
    return;
  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
    goto LABEL_16;
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( *((_DWORD *)this + 2) <= 1u )
    {
      v14 = (_QWORD *)**((_QWORD **)this + 2);
      if ( 1000000LL * *((_QWORD *)this + 5) < v14[8] - v14[7] )
        *((_BYTE *)this + 3) = 0;
      if ( (int)((v14[6] - v14[5]) * (v14[6] - v14[5])
               + (HIDWORD(v14[6]) - HIDWORD(v14[5])) * (HIDWORD(v14[6]) - HIDWORD(v14[5]))) < (unsigned __int64)(unsigned int)(*((_DWORD *)this + 12) * *((_DWORD *)this + 12)) )
        return;
    }
LABEL_16:
    *((_BYTE *)this + 3) = 0;
    return;
  }
  if ( v4 != 1 )
    goto LABEL_16;
  v5 = (__int64 **)*((_QWORD *)this + 2);
  v6 = *v5;
  v15 = *v5;
  while ( *((_BYTE *)v6 + 25) == v1 )
  {
    if ( (int)((v6[6] - v6[5]) * (v6[6] - v6[5]) + (HIDWORD(v6[6]) - HIDWORD(v6[5])) * (HIDWORD(v6[6]) - HIDWORD(v6[5]))) >= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 13) * *((_DWORD *)this + 13)) )
    {
      *((_BYTE *)this + 3) = v1;
      v15 = *v5;
      v7 = *(__m128i *)(v15 + 5);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator++(&v15);
      v8 = *(__m128i *)(v15 + 5);
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7);
      LODWORD(v16) = v10;
      HIDWORD(v16) = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
      LODWORD(v15) = v9 - v8.m128i_i32[0];
      HIDWORD(v15) = HIDWORD(v9) - v8.m128i_i32[1];
      v11 = HIDWORD(v16);
      v12 = (double)(HIDWORD(v16) * (HIDWORD(v9) - v8.m128i_i32[1]) + v10 * ((int)v9 - v8.m128i_i32[0]));
      v13 = sqrt((double)((HIDWORD(v9) - v8.m128i_i32[1]) * (HIDWORD(v9) - v8.m128i_i32[1])
                        + ((int)v9 - v8.m128i_i32[0]) * ((int)v9 - v8.m128i_i32[0])));
      if ( v12 / (v13 * sqrt((double)((int)v11 * (int)v11 + v10 * v10))) >= *((double *)this + 7) )
        *((_BYTE *)this + 2) = 1;
      return;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator++(&v15);
    v6 = v15;
  }
}
