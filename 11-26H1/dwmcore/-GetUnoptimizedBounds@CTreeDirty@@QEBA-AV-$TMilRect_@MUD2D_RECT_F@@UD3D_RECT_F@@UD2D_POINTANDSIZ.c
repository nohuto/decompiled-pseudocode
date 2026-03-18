/*
 * XREFs of ?GetUnoptimizedBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005B090
 * Callers:
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008D260 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F5F0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeDirty::GetUnoptimizedBounds(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  float *v4; // rcx
  float *v5; // r8
  float v6; // xmm1_4
  int v7; // r9d
  float v8; // xmm2_4
  int v9; // eax
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  __int64 result; // rax

  v2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_BYTE *)(a1 + 2324) )
  {
    result = a2;
    *(_OWORD *)a2 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else
  {
    v3 = *(unsigned int *)(a1 + 16);
    v4 = (float *)(a1 + 20);
    if ( !v4 && v3 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v5 = &v4[4 * v3];
    if ( v4 != v5 )
    {
      v6 = 0.0;
      do
      {
        if ( v6 > *(float *)a2 )
        {
          if ( *(float *)(a2 + 12) > *(float *)(a2 + 4) )
          {
            v7 = v2;
            goto LABEL_8;
          }
          v6 = *(float *)(a2 + 8);
        }
        v7 = 1;
LABEL_8:
        v8 = *v4;
        if ( v4[2] <= *v4 || v4[3] <= v4[1] )
          v9 = 1;
        else
          v9 = v2;
        if ( v7 )
        {
          if ( v9
            || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues(
                                   v4,
                                   a2,
                                   v5) )
          {
            *(_QWORD *)(a2 + 8) = v2;
            v6 = 0.0;
            *(_QWORD *)a2 = v2;
          }
          else
          {
            *(_OWORD *)a2 = *(_OWORD *)v4;
            v6 = *(float *)(a2 + 8);
          }
        }
        else if ( !v9 )
        {
          if ( *(float *)a2 > v8 )
            *(float *)a2 = v8;
          v10 = v4[1];
          if ( *(float *)(a2 + 4) > v10 )
            *(float *)(a2 + 4) = v10;
          v11 = v4[2];
          if ( v11 > v6 )
          {
            *(float *)(a2 + 8) = v11;
            v6 = v11;
          }
          v12 = v4[3];
          if ( v12 > *(float *)(a2 + 12) )
            *(float *)(a2 + 12) = v12;
        }
        v4 += 4;
      }
      while ( v4 != v5 );
    }
    return a2;
  }
  return result;
}
