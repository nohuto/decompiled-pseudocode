/*
 * XREFs of ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180057D90
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180058488 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1800D4500 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x1801D9264 (-GetCursorShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     _CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::operator() @ 0x180256B00 (_CCaptureRenderTarget--AddCursorInvalidRects_--_2_--_lambda_1_--operator().c)
 *     _CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2_::operator() @ 0x180256BFC (_CCaptureRenderTarget--RenderCursors_--_18_--_lambda_2_--operator().c)
 *     ?IsValid@CPositionedLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18026CF40 (-IsValid@CPositionedLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisualTree::_IsInTree(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  float v6; // xmm8_4
  __int64 v7; // rdi
  unsigned __int32 v8; // xmm10_4
  __int64 v9; // rax
  _DWORD *v10; // rdx
  float v11; // xmm6_4
  float v12; // xmm0_4
  __int64 v13; // rax
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v17; // edx
  float *v18; // rcx
  __int64 v19; // rax
  _BYTE *v20; // r8
  __int64 v21; // rcx
  float **v22; // r14
  float *v23; // r14

  v4 = a2;
  v6 = FLOAT_1_0;
  v7 = a2;
  v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  while ( 1 )
  {
    if ( !v4 )
      return 0;
    if ( (unsigned int)(a3 - 1) <= 1 )
    {
      if ( (*(_BYTE *)(v4 + 102) & 0x20) == 0 || *(char *)(v4 + 101) < 0 )
        return 0;
      if ( a3 == 2 )
      {
        v10 = *(_DWORD **)(v4 + 224);
        v11 = FLOAT_1_0;
        if ( (*v10 & 0x1000000) == 0 )
          goto LABEL_14;
        v19 = (unsigned int)v10[1];
        v20 = v10 + 2;
        v21 = 0LL;
        if ( (_DWORD)v19 )
        {
          while ( *v20 != 8 )
          {
            v21 = (unsigned int)(v21 + 1);
            ++v20;
            if ( (unsigned int)v21 >= (unsigned int)v19 )
              goto LABEL_32;
          }
        }
        else
        {
LABEL_32:
          if ( (unsigned int)v21 >= (unsigned int)v19 )
          {
            v22 = 0LL;
LABEL_26:
            v23 = *v22;
            if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v23 + 64LL))(v23, 48LL) )
              v11 = v23[20];
LABEL_14:
            v12 = fminf(1.0, fmaxf(v11, 0.0));
            if ( v4 == *(_QWORD *)(a1 + 72) )
            {
              v15 = FLOAT_1_0;
            }
            else
            {
              v13 = *(_QWORD *)(v4 + 216);
              if ( (*(_DWORD *)(v13 + 4) & 0x8000000) != 0 )
              {
                v17 = *(float *)(v13 + 12);
                v18 = (float *)(v13 + 12);
                if ( (LODWORD(v17) & 0x7F000000) != 0x5000000 )
                {
                  do
                  {
                    v18 = (float *)((char *)v18 + (LODWORD(v17) & 0xFFFFFF) + 4);
                    v17 = *v18;
                  }
                  while ( (*(_DWORD *)v18 & 0x7F000000) != 0x5000000 );
                }
                v14 = v18[1];
              }
              else
              {
                v14 = FLOAT_1_0;
              }
              v15 = fminf(1.0, fmaxf(v14, 0.0));
            }
            v6 = v6 * (float)(v12 * v15);
            if ( COERCE_FLOAT(LODWORD(v6) & v8) < 0.0000011920929 )
              return 0;
            goto LABEL_7;
          }
        }
        v22 = (float **)((char *)&v10[2 * v21] + ((v19 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
        goto LABEL_26;
      }
    }
LABEL_7:
    if ( v4 == *(_QWORD *)(a1 + 72) )
      return 1;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 88);
      v7 = v9;
      if ( v9 )
      {
        if ( v4 == v9 )
          return 0;
        v7 = *(_QWORD *)(v9 + 88);
        if ( v4 == v7 )
          return 0;
      }
    }
    v4 = *(_QWORD *)(v4 + 88);
  }
}
