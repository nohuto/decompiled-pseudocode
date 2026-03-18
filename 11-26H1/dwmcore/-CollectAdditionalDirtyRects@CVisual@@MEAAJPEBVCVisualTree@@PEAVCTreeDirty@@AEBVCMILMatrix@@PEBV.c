/*
 * XREFs of ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058B30
 * Callers:
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800588A0 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@.c)
 * Callees:
 *     ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057FC0 (-AdjustContentWorldBounds@CVisual@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x1800594E0 (-HasPixelSnappedContent@CVisual@@IEBA_NXZ.c)
 *     ?Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A2A4 (-Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CMergedDirtyRect@@QEAAXXZ @ 0x180192DC4 (-Reset@CMergedDirtyRect@@QEAAXXZ.c)
 *     ?Optimize@?$CMergedRectBase@$03@@AEAAXXZ @ 0x180252FCC (-Optimize@-$CMergedRectBase@$03@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRects(
        CVisual *this,
        __int64 a2,
        CTreeDirty *a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v5; // r10
  unsigned int v6; // r15d
  __int64 v8; // rax
  _BYTE *v9; // r11
  __int64 v10; // rdx
  __int64 *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // r12d
  unsigned int i; // esi
  float v17; // xmm10_4
  float v18; // xmm9_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // esi
  unsigned int j; // edi
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm4_4
  float v37; // xmm2_4
  float v38; // xmm5_4
  float v39; // xmm3_4
  float v40; // xmm6_4
  int v41; // eax
  __int128 v42; // [rsp+38h] [rbp-51h] BYREF
  __int128 v43; // [rsp+48h] [rbp-41h] BYREF
  __int64 v45; // [rsp+100h] [rbp+77h]

  v45 = a4;
  v5 = (_DWORD *)*((_QWORD *)this + 28);
  v6 = 0;
  if ( (*v5 & 0x40000000) == 0 )
    return v6;
  v8 = (unsigned int)v5[1];
  v9 = v5 + 2;
  v10 = 0LL;
  if ( (_DWORD)v8 )
  {
    while ( *v9 != 2 )
    {
      v10 = (unsigned int)(v10 + 1);
      ++v9;
      if ( (unsigned int)v10 >= (unsigned int)v8 )
        goto LABEL_63;
    }
  }
  else
  {
LABEL_63:
    if ( (unsigned int)v10 >= (unsigned int)v8 )
    {
      v11 = 0LL;
      goto LABEL_5;
    }
  }
  v11 = (__int64 *)((char *)&v5[2 * v10] + ((v8 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_5:
  v12 = *v11;
  if ( v12 )
  {
    v13 = 0LL;
    if ( g_pComposition )
      v13 = *((_QWORD *)g_pComposition + 110);
    if ( *(_QWORD *)v12 == v13 && (*(_DWORD *)(v12 + 180) || *(_DWORD *)(v12 + 8)) )
    {
      v14 = 0LL;
      if ( g_pComposition )
        v14 = *((_QWORD *)g_pComposition + 110);
      if ( *(_QWORD *)v12 != v14 )
        CMergedDirtyRect::Reset((CMergedDirtyRect *)v12);
      if ( !*(_BYTE *)(v12 + 176) )
      {
        CMergedRectBase<4>::Optimize(v12 + 8);
        a4 = v45;
      }
      v15 = *(_DWORD *)(v12 + 8);
      if ( v12 == -12 && v15 )
        goto LABEL_93;
      for ( i = 0; i < v15; ++i )
      {
        v42 = 0LL;
        v43 = *(_OWORD *)(v12 + 16LL * i + 12);
        CMILMatrix::Transform2DBoundsHelper<1>(a4, &v43, &v42);
        v17 = *((float *)&v42 + 2);
        v18 = *(float *)&v42;
        if ( *((float *)&v42 + 2) > *(float *)&v42 )
        {
          v19 = *((float *)&v42 + 3);
          v20 = *((float *)&v42 + 1);
          if ( *((float *)&v42 + 3) > *((float *)&v42 + 1) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 344LL))(this) )
              v21 = FLOAT_0_5;
            else
              v21 = 0.0;
            if ( CVisual::HasPixelSnappedContent(this) )
              v21 = v21 + 0.5;
            if ( v21 != 0.0 )
            {
              if ( v18 <= (float)(v21 - 3.4028235e38) )
                v18 = FLOAT_N3_4028235e38;
              else
                v18 = v18 - v21;
              *(float *)&v42 = v18;
              if ( v20 <= (float)(v21 - 3.4028235e38) )
                v20 = FLOAT_N3_4028235e38;
              else
                v20 = v20 - v21;
              *((float *)&v42 + 1) = v20;
              if ( (float)(3.4028235e38 - v21) <= v17 )
                v17 = FLOAT_3_4028235e38;
              else
                v17 = v17 + v21;
              *((float *)&v42 + 2) = v17;
              if ( (float)(3.4028235e38 - v21) <= v19 )
                v19 = FLOAT_3_4028235e38;
              else
                v19 = v19 + v21;
              *((float *)&v42 + 3) = v19;
            }
            if ( a5 )
            {
              v22 = *(float *)a5;
              if ( *(float *)a5 > v18 )
              {
                LODWORD(v42) = *(_DWORD *)a5;
                v18 = v22;
              }
              v23 = *(float *)(a5 + 4);
              v24 = v20;
              if ( v23 > v20 )
              {
                DWORD1(v42) = *(_DWORD *)(a5 + 4);
                v20 = v23;
                v24 = v23;
              }
              v25 = v17;
              if ( v17 > *(float *)(a5 + 8) )
              {
                DWORD2(v42) = *(_DWORD *)(a5 + 8);
                v17 = *((float *)&v42 + 2);
                v25 = *((float *)&v42 + 2);
              }
              v26 = v19;
              if ( v19 > *(float *)(a5 + 12) )
              {
                HIDWORD(v42) = *(_DWORD *)(a5 + 12);
                v19 = *((float *)&v42 + 3);
                v26 = *((float *)&v42 + 3);
              }
              if ( v25 <= v18 || v26 <= v24 )
              {
                v19 = 0.0;
                v17 = 0.0;
                v20 = 0.0;
                v18 = 0.0;
                v42 = 0uLL;
              }
            }
            if ( v17 > v18 && v19 > v20 )
            {
              v27 = CTreeDirty::Add(a3);
              v6 = v27;
              if ( v27 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xD48u, 0LL);
                return v6;
              }
            }
          }
        }
        a4 = v45;
      }
      v28 = 0LL;
      if ( g_pComposition )
        v28 = *((_QWORD *)g_pComposition + 110);
      if ( *(_QWORD *)v12 != v28 )
        CMergedDirtyRect::Reset((CMergedDirtyRect *)v12);
      if ( !*(_BYTE *)(v12 + 348) )
        CMergedRectBase<4>::Optimize(v12 + 180);
      v29 = *(_DWORD *)(v12 + 180);
      if ( v12 == -184 )
      {
        if ( v29 )
        {
LABEL_93:
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
      }
      for ( j = 0; j < v29; ++j )
      {
        v42 = 0LL;
        v43 = *(_OWORD *)(v12 + 16LL * j + 184);
        CMILMatrix::Transform2DBoundsHelper<1>(v45, &v43, &v42);
        if ( CVisual::AdjustContentWorldBounds(this, (float *)&v42) )
        {
          v32 = *(float *)&v42;
          if ( a5 )
          {
            v33 = *(float *)a5;
            if ( *(float *)a5 > *(float *)&v42 )
            {
              LODWORD(v42) = *(_DWORD *)a5;
              v32 = v33;
            }
            v34 = *((float *)&v42 + 1);
            v35 = *(float *)(a5 + 4);
            v36 = *((float *)&v42 + 1);
            if ( v35 > *((float *)&v42 + 1) )
            {
              DWORD1(v42) = *(_DWORD *)(a5 + 4);
              v34 = v35;
              v36 = v35;
            }
            v37 = *((float *)&v42 + 2);
            v38 = *((float *)&v42 + 2);
            if ( *((float *)&v42 + 2) > *(float *)(a5 + 8) )
            {
              DWORD2(v42) = *(_DWORD *)(a5 + 8);
              v37 = *((float *)&v42 + 2);
              v38 = *((float *)&v42 + 2);
            }
            v39 = *((float *)&v42 + 3);
            v40 = *((float *)&v42 + 3);
            if ( *((float *)&v42 + 3) > *(float *)(a5 + 12) )
            {
              HIDWORD(v42) = *(_DWORD *)(a5 + 12);
              v39 = *((float *)&v42 + 3);
              v40 = *((float *)&v42 + 3);
            }
            if ( v38 <= v32 || v40 <= v36 )
            {
              v39 = 0.0;
              v37 = 0.0;
              v34 = 0.0;
              v32 = 0.0;
              v42 = 0uLL;
            }
          }
          else
          {
            v39 = *((float *)&v42 + 3);
            v37 = *((float *)&v42 + 2);
            v34 = *((float *)&v42 + 1);
          }
          if ( v37 > v32 && v39 > v34 )
          {
            v41 = CTreeDirty::Add(a3);
            v6 = v41;
            if ( v41 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xD62u, 0LL);
              return v6;
            }
          }
        }
      }
    }
  }
  return v6;
}
