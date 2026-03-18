/*
 * XREFs of ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18028B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Draw@CCompositionTextLine@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18026B598 (-Draw@CCompositionTextLine@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18028B97C (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTextVisualContent::Draw(
        CTextVisualContent *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CVisual *CurrentVisual; // rax
  __int64 v7; // rdx
  CTextVisualContent *v8; // rcx
  __int64 **TreeData; // r13
  __int64 v11; // rax
  unsigned int v12; // ebx
  CCompositionTextLine *v13; // rsi
  CCompositionTextLine *v14; // rax
  __int64 v15; // r12
  int DrawListCacheForTextObject; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  CCompositionTextLine **v23; // rsi
  CCompositionTextLine **v24; // r12
  __int64 v25; // rax
  CCompositionTextLine **v26; // rsi
  CCompositionTextLine **v27; // r15
  CCompositionTextLine *v28; // r12
  CCompositionTextLine *v29; // [rsp+30h] [rbp-10h]
  CCompositionTextLine *v30; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct CDrawListCache *v32; // [rsp+88h] [rbp+48h] BYREF
  struct D2D_SIZE_F *v33; // [rsp+90h] [rbp+50h]

  v33 = a3;
  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  TreeData = CVisual::FindTreeData(CurrentVisual, *(const struct CVisualTree **)(v7 + 7944));
  if ( TreeData )
  {
    v11 = *((_QWORD *)this + 9);
    v12 = 0;
    v13 = *(CCompositionTextLine **)(v11 + 672);
    v14 = *(CCompositionTextLine **)(v11 + 680);
    v29 = v14;
    while ( v13 != v14 )
    {
      v15 = *(_QWORD *)v13;
      v32 = 0LL;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(
                                     v8,
                                     a2,
                                     (struct CTreeData *)TreeData,
                                     v12,
                                     &v32);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 32LL;
LABEL_11:
        v20 = (unsigned int)DrawListCacheForTextObject;
        goto LABEL_12;
      }
      v18 = *(_QWORD *)(v15 + 88);
      if ( v18 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v18 + 208LL))(
                v18,
                a2,
                v33,
                v32);
        v17 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x61,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
            (const char *)(unsigned int)v19);
          v20 = v17;
          v21 = 36LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
            (const char *)v20);
          wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v32);
          return v17;
        }
      }
      ++v12;
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v32);
      v14 = v29;
      v13 = (CCompositionTextLine *)((char *)v13 + 8);
    }
    v22 = *((_QWORD *)this + 9);
    v23 = *(CCompositionTextLine ***)(v22 + 720);
    v24 = *(CCompositionTextLine ***)(v22 + 728);
    while ( v23 != v24 )
    {
      v30 = *v23;
      v32 = 0LL;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(
                                     v8,
                                     a2,
                                     (struct CTreeData *)TreeData,
                                     v12,
                                     &v32);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 46LL;
        goto LABEL_11;
      }
      DrawListCacheForTextObject = CCompositionTextLine::Draw(v30, a2, v33, v32);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 50LL;
        goto LABEL_11;
      }
      ++v12;
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v32);
      ++v23;
    }
    v25 = *((_QWORD *)this + 9);
    v26 = *(CCompositionTextLine ***)(v25 + 696);
    v27 = *(CCompositionTextLine ***)(v25 + 704);
    while ( v26 != v27 )
    {
      v28 = *v26;
      v32 = 0LL;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(
                                     v8,
                                     a2,
                                     (struct CTreeData *)TreeData,
                                     v12,
                                     &v32);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 60LL;
        goto LABEL_11;
      }
      DrawListCacheForTextObject = CCompositionTextLine::Draw(v28, a2, v33, v32);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 64LL;
        goto LABEL_11;
      }
      ++v12;
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v32);
      ++v26;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
}
