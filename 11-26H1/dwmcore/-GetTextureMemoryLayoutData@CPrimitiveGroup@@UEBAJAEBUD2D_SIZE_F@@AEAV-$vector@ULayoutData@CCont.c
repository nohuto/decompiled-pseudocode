/*
 * XREFs of ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18027DD10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18009CCB0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18009D10C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800AFB20 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x18027D7D0 (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 */

__int64 __fastcall CPrimitiveGroup::GetTextureMemoryLayoutData(
        CPrimitiveGroupDrawListGenerator **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // esi
  int **ContentRegion; // rax
  __m128i si128; // xmm6
  float v10; // xmm2_4
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  void *v15[2]; // [rsp+38h] [rbp-89h]
  __m128i v16; // [rsp+48h] [rbp-79h] BYREF
  __int128 v17; // [rsp+58h] [rbp-69h]
  _OWORD v18[2]; // [rsp+68h] [rbp-59h]
  _QWORD v19[2]; // [rsp+88h] [rbp-39h] BYREF
  int v20; // [rsp+98h] [rbp-29h]
  __int64 v21; // [rsp+9Ch] [rbp-25h]
  _BYTE v22[64]; // [rsp+A8h] [rbp-19h] BYREF

  if ( *(_QWORD *)a3 != *(_QWORD *)(a3 + 8) )
    *(_QWORD *)(a3 + 8) = *(_QWORD *)a3;
  v5 = 0;
  v19[0] = v22;
  v19[1] = v22;
  v20 = 4;
  v21 = 4LL;
  v6 = CPrimitiveGroup::EnsureDrawListGenerator((CPrimitiveGroup *)a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1E6u, 0LL);
  }
  else
  {
    ContentRegion = (int **)CPrimitiveGroupDrawListGenerator::GetContentRegion(a1[16]);
    HIDWORD(v21) = 0;
    CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,16,0>>(
      ContentRegion,
      (__int64)v19);
    if ( HIDWORD(v21) )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      do
      {
        *(_OWORD *)((char *)v18 + 8) = 0LL;
        *(float *)v15 = (float)*(int *)(v19[0] + 16LL * v5);
        *((float *)v15 + 1) = (float)*(int *)(v19[0] + 16LL * v5 + 4);
        *(float *)&v15[1] = (float)*(int *)(v19[0] + 16LL * v5 + 8);
        *((float *)&v15[1] + 1) = (float)*(int *)(v19[0] + 16LL * v5 + 12);
        *((float *)&v17 + 2) = *(float *)v15;
        LODWORD(v10) = _mm_shuffle_ps(*(__m128 *)v15, *(__m128 *)v15, 85).m128_u32[0];
        *((float *)&v17 + 3) = v10;
        LODWORD(v18[0]) = _mm_shuffle_ps(*(__m128 *)v15, *(__m128 *)v15, 170).m128_u32[0];
        DWORD1(v18[0]) = _mm_shuffle_ps(*(__m128 *)v15, *(__m128 *)v15, 255).m128_u32[0];
        if ( *(float *)v15 == 0.0 && v10 == 0.0 )
          *(_QWORD *)&v17 = 0LL;
        else
          *(_QWORD *)&v17 = __PAIR64__(LODWORD(v10), (unsigned int)v15[0]);
        v11 = *(_QWORD *)(a3 + 8);
        v16 = si128;
        if ( v11 == *(_QWORD *)(a3 + 16) )
        {
          std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
            (void **)a3,
            v11,
            (__int128 *)v16.m128i_i8);
        }
        else
        {
          v12 = v17;
          v13 = v18[0];
          *(__m128i *)v11 = si128;
          *(_OWORD *)(v11 + 16) = v12;
          *(_OWORD *)(v11 + 32) = v13;
          *(_QWORD *)(v11 + 48) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
          *(_QWORD *)(a3 + 8) += 56LL;
        }
        ++v5;
      }
      while ( v5 < HIDWORD(v21) );
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v19);
  return v7;
}
