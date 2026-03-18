/*
 * XREFs of ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x1800D5144
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800CAB74 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x1800D52F8 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5338 (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800D5360 (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$_Try_emplace@AEBQEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@AEBQEBVCVisualTree@@@Z @ 0x1800D57B0 (--$_Try_emplace@AEBQEBVCVisualTree@@$$V@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedSha.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProjectedShadowCaster::UpdateVisualProperty(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2)
{
  __int64 v3; // rbx
  unsigned __int64 CurrentFrameId; // rax
  float v5; // xmm0_4
  __int64 v6; // rcx
  CVisual **v7; // r10
  __int64 v8; // rdx
  char v9; // r8
  __int64 v10; // rax
  char v11; // si
  bool v12; // al
  __int128 v13; // xmm0
  __int32 v14; // xmm1_4
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-10h] BYREF
  bool v17; // [rsp+60h] [rbp+20h] BYREF
  struct CVisualTree *v18; // [rsp+68h] [rbp+28h] BYREF

  v18 = a2;
  v3 = *(_QWORD *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const * const &,>(
                    (char *)this + 88,
                    v16,
                    &v18);
  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v3 + 48) != CurrentFrameId )
  {
    *(_QWORD *)(v3 + 48) = CurrentFrameId;
    v17 = 0;
    v5 = CProjectedShadowCaster::ComputeEffectiveAlpha(this, v18, &v17);
    v6 = *((_QWORD *)this + 9);
    v7 = (CVisual **)v18;
    v8 = v6;
    v9 = 0;
    while ( v6 && (*(_BYTE *)(v6 + 102) & 0x20) != 0 && *(char *)(v6 + 101) >= 0 )
    {
      if ( v6 == *((_QWORD *)v18 + 9) )
      {
        v9 = 1;
        break;
      }
      if ( v8 )
      {
        v10 = *(_QWORD *)(v8 + 88);
        v8 = v10;
        if ( v10 )
        {
          if ( v6 == v10 )
            break;
          v8 = *(_QWORD *)(v10 + 88);
          if ( v6 == v8 )
            break;
        }
      }
      v6 = *(_QWORD *)(v6 + 88);
    }
    v11 = 0;
    v12 = v17;
    if ( *(float *)(v3 + 40) != v5 || *(_BYTE *)(v3 + 56) != v17 || *(_BYTE *)(v3 + 57) != v9 )
    {
      *(float *)(v3 + 40) = v5;
      v11 = 1;
      *(_BYTE *)(v3 + 56) = v12;
      *(_BYTE *)(v3 + 57) = v9;
      v7 = (CVisual **)v18;
    }
    v17 = 0;
    CProjectedShadowCaster::CalculateCasterBounds((__int64)this, (__int64)&v15, v7, (char *)&v17);
    if ( *(_BYTE *)(v3 + 76) == v17
      && (COERCE_FLOAT(v14 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]),
          COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 60) - *(float *)&v15) & v14) <= 0.0000011920929)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 64) - *((float *)&v15 + 1)) & v14) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 68) - *((float *)&v15 + 2)) & v14) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 72) - *((float *)&v15 + 3)) & v14) <= 0.0000011920929 )
    {
      if ( !v11 )
        return;
    }
    else
    {
      v13 = v15;
      *(_BYTE *)(v3 + 76) = v17;
      *(_OWORD *)(v3 + 60) = v13;
      Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(v3 + 80);
    }
    (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, CProjectedShadowCaster *))(*(_QWORD *)this + 80LL))(
      this,
      0LL,
      this);
    CProjectedShadowCaster::RequestRedraw(this);
  }
}
