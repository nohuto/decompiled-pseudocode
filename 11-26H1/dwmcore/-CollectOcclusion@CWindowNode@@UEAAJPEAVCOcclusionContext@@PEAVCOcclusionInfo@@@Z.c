/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800DF2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800DFBBC (-GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800E0A80 (-CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x1801896A0 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180193F90 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FBE18 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1802020AC (-GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1802021A4 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?FlushOcclusionRects@COcclusionContext@@QEAAXXZ @ 0x1802037B0 (-FlushOcclusionRects@COcclusionContext@@QEAAXXZ.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@@Z @ 0x1802048E8 (-CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFlipExSurfaceClipShape@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1802683B4 (-GetFlipExSurfaceClipShape@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3)
{
  int v6; // eax
  struct CCompositionSurfaceBitmap *CurrentFlip; // rax
  struct CCompositionSurfaceBitmap *v8; // r15
  char *v9; // r12
  int (__fastcall *v10)(char *, __int64 *); // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-69h]
  int v18; // [rsp+20h] [rbp-69h]
  int v19[2]; // [rsp+30h] [rbp-59h] BYREF
  char v20; // [rsp+38h] [rbp-51h]
  __int128 v21; // [rsp+40h] [rbp-49h] BYREF
  __int128 v22; // [rsp+50h] [rbp-39h] BYREF
  _OWORD v23[4]; // [rsp+60h] [rbp-29h] BYREF
  char v24; // [rsp+A0h] [rbp+17h]
  __int16 v25; // [rsp+A1h] [rbp+18h]
  char v26; // [rsp+A3h] [rbp+1Ah]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  char v28; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v29; // [rsp+F8h] [rbp+6Fh] BYREF

  v21 = 0LL;
  v28 = 0;
  v29 = 0LL;
  v6 = CVisual::CollectOcclusion(this, a2, a3);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)(unsigned int)v6,
      v17);
  COcclusionContext::FlushOcclusionRects(a2);
  *((_DWORD *)a3 + 13) = *((_DWORD *)a2 + 317);
  CurrentFlip = CWindowNode::GetCurrentFlipExSurface(this);
  v8 = CurrentFlip;
  if ( CurrentFlip )
  {
    v9 = (char *)CurrentFlip + 72;
    v10 = *(int (__fastcall **)(char *, __int64 *))(*((_QWORD *)CurrentFlip + 9) + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v29);
    if ( v10(v9, &v29) >= 0 )
    {
      *(_QWORD *)v19 = 0LL;
      v20 = 0;
      CWindowNode::GetFlipExSurfaceClipShape(this, (struct CShapePtr *)v19);
      LOBYTE(v11) = 1;
      if ( (int)CWindowNode::GetEffectiveBounds(this, v11, v19, &v21, &v28) >= 0 )
      {
        v12 = *(_QWORD *)v19;
        v22 = v21;
        if ( v28 )
          v12 = 0LL;
        CWindowNode::CollectOcclusionHelper((_DWORD)this, (_DWORD)v9, (unsigned int)&v22, (_DWORD)a2, v12);
        if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(a2) )
        {
          v26 = 0;
          v23[0] = _mm_load_si128((const __m128i *)&_xmm);
          v23[1] = _mm_load_si128((const __m128i *)&_xmm);
          v25 = 41;
          v23[2] = _mm_load_si128((const __m128i *)&_xmm);
          v23[3] = _mm_load_si128((const __m128i *)&_xmm);
          v24 = -86;
          if ( (int)CWindowNode::ApplyTextureToLocalTransform(this, 0LL) >= 0 )
          {
            v13 = COcclusionContext::CheckAndRecordOverlayCandidate(
                    (_DWORD)a2,
                    (_DWORD)this,
                    *((_QWORD *)v8 + 12),
                    (unsigned int)v23,
                    *(__int64 *)v19);
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x265,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
                (const char *)(unsigned int)v13,
                v18);
          }
        }
      }
      CShapePtr::~CShapePtr((CShapePtr *)v19);
    }
  }
  COcclusionContext::FlushOcclusionRects(a2);
  *((_DWORD *)a3 + 12) = *((_DWORD *)a2 + 317);
  if ( (*((_BYTE *)this + 896) & 4) != 0 )
  {
    v14 = *(_QWORD *)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103);
    if ( v14 )
    {
      if ( !*((_BYTE *)this + 745)
        && (*((_BYTE *)this + 764) & 2) == 0
        && (int)CWindowNode::EnsureEffectiveSpriteClip(this) >= 0
        && (int)CWindowNode::GetEffectiveBounds(this, 0LL, (char *)this + 880, &v21, &v28) >= 0 )
      {
        v15 = 0LL;
        if ( !v28 )
          v15 = *((_QWORD *)this + 110);
        v22 = v21;
        CWindowNode::CollectOcclusionHelper((_DWORD)this, v14 + 104, (unsigned int)&v22, (_DWORD)a2, v15);
      }
    }
  }
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return 0LL;
}
