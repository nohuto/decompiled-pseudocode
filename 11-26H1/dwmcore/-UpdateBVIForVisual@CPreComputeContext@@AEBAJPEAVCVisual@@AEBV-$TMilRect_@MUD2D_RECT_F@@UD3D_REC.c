/*
 * XREFs of ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800925E0
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180058488 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180057A70 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800900E0 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?push_back@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUVisualTreePathUnit@CVisualTreePath@@@Z @ 0x18009204C (-push_back@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUn.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180092940 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800D3570 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D47B0 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x18014BB1C (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1801B25AC (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1802079DC (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18021C1E0 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CPreComputeContext::UpdateBVIForVisual(__int64 a1, CVisual *a2, float *a3, __int64 a4, __int64 a5)
{
  bool v5; // cc
  __int64 v7; // rax
  CVisual *v8; // r12
  const struct CVisualTree *v9; // rbx
  struct CTreeData *v10; // r14
  struct CBackdropVisualImage **i; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r9
  struct CBackdropVisualImage *v14; // rdi
  int v15; // ebx
  bool v17; // bl
  DwmDbg::Backdrops *v18; // rcx
  const char **DebugString; // rax
  DwmDbg::DbgString *v20; // rbx
  DwmDbg::DbgString *v21; // rax
  struct CBackdropVisualImage *v22; // [rsp+38h] [rbp-41h] BYREF
  __int64 v23; // [rsp+40h] [rbp-39h]
  __int128 v24; // [rsp+48h] [rbp-31h] BYREF
  char *v25; // [rsp+58h] [rbp-21h] BYREF
  _BYTE *v26; // [rsp+60h] [rbp-19h] BYREF
  _BYTE *v27; // [rsp+68h] [rbp-11h]
  __int64 *v28; // [rsp+70h] [rbp-9h]
  _BYTE v29[32]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v30; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v5 = a3[2] <= *a3;
  v23 = a5;
  if ( v5 || a3[3] <= a3[1] )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 328LL);
  v26 = v29;
  *(_QWORD *)&v24 = 0LL;
  v27 = v29;
  v28 = &v30;
  *((_QWORD *)&v24 + 1) = v7;
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::push_back(
    (__int64 *)&v26,
    &v24);
  v8 = *(CVisual **)(*((_QWORD *)v26 + 1) + 72LL);
  v9 = (const struct CVisualTree *)*((_QWORD *)v27 - 1);
  v10 = CVisual::EnsureTreeData(a2, v9);
  for ( i = (struct CBackdropVisualImage **)*((_QWORD *)v10 + 18); ; ++i )
  {
    if ( i == *((struct CBackdropVisualImage ***)v10 + 19) )
    {
      v14 = 0LL;
      goto LABEL_19;
    }
    v12 = (_QWORD *)*((_QWORD *)*i + 202);
    if ( *((_QWORD *)*i + 203) - (_QWORD)v12 == v27 - v26 )
      break;
LABEL_24:
    ;
  }
  v13 = v26 - (_BYTE *)v12;
  while ( v12 != *((_QWORD **)*i + 203) )
  {
    if ( *v12 != *(_QWORD *)((char *)v12 + v13) || v12[1] != *(_QWORD *)((char *)v12 + v13 + 8) )
      goto LABEL_24;
    v12 += 2;
  }
  *((_QWORD *)*i + 222) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 31) + 24LL) + 880LL);
  v14 = *i;
  if ( *i )
  {
    CMILRefCountImpl::AddReference((struct CBackdropVisualImage *)((char *)v14 + 8));
    goto LABEL_10;
  }
LABEL_19:
  v22 = 0LL;
  v17 = CVisual::GetVisualTreeNoRef(v8) == v9;
  if ( v14 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v14);
  CBackdropVisualImage::Create(g_pComposition, a2, (const struct CVisualTreePath *)&v26, v17, &v22);
  v14 = v22;
  CTreeData::SetBackdropVisualImage(v10, (const struct CVisualTreePath *)&v26, v22);
  if ( DwmDbg::Backdrops::IsEtwEnabled(v18) )
  {
    DebugString = (const char **)CVisualTreePath::GetDebugString(&v26, &v22);
    v20 = DwmDbg::DbgString::DbgString(&v25, "pBVI=0x%p, bviPath=[%s]", v14, *DebugString);
    v21 = DwmDbg::DbgString::DbgString((char **)&v24, "Visual-CreatedNewBVI");
    DwmDbg::Backdrops::LogBrushEtwEvent(v21, a2, v20);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v22);
  }
LABEL_10:
  v15 = CBackdropVisualImage::ValidateRootAndSourceRectangle(v14, v23);
  if ( v14 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v14);
  if ( v15 >= 0 )
  {
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64 *)&v26);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x704,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v15);
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64 *)&v26);
  return (unsigned int)v15;
}
