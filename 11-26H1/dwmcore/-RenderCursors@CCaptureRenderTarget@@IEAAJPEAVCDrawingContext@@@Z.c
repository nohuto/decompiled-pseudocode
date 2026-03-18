/*
 * XREFs of ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802579B0
 * Callers:
 *     ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180257B50 (-RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800D3570 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x180122110 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18020899C (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 *     gsl::final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___::_final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___ @ 0x180256A18 (gsl--final_action__CCaptureRenderTarget--RenderCursors_--_2_--_lambda_1___--_final_action__CCapt.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2__long_CVisual___CVisualTree_____CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2____::_2_::_Guard_type::__Guard_type @ 0x180256A60 (_std--_Global_new_std--_Func_impl_no_alloc__CCaptureRenderTarget--RenderCursors_--_18_--_lambda_.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderCursors(CCaptureRenderTarget *this, struct CDrawingContext *a2)
{
  bool v2; // zf
  struct CVisualTree *v4; // rbx
  __int64 v5; // rdx
  struct CVisualTree *v6; // r11
  __int64 v7; // rdi
  CVisual *v8; // r10
  struct CVisualTree *VisualTreeNoRef; // rax
  __int64 v10; // r10
  __int64 i; // r14
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  int v14; // eax
  unsigned int v15; // ebx
  int v17[2]; // [rsp+20h] [rbp-99h] BYREF
  __int64 v18; // [rsp+28h] [rbp-91h] BYREF
  void *v19; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-81h] BYREF
  char v21; // [rsp+50h] [rbp-69h]
  _BYTE v22[56]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD *v23; // [rsp+90h] [rbp-29h]
  char v24; // [rsp+A0h] [rbp-19h] BYREF
  int v25; // [rsp+E0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  char v27; // [rsp+120h] [rbp+67h] BYREF
  struct CDrawingContext *v28; // [rsp+128h] [rbp+6Fh] BYREF
  char v29; // [rsp+130h] [rbp+77h] BYREF
  struct CVisualTree *RootVisualTree; // [rsp+138h] [rbp+7Fh] BYREF

  v28 = a2;
  v2 = *((_DWORD *)this + 46) == 1;
  v20[0] = &v29;
  v29 = 0;
  v20[1] = &v28;
  v20[2] = &v27;
  v27 = 0;
  v21 = 1;
  if ( v2 )
  {
    v4 = (struct CVisualTree *)*((_QWORD *)this + 14);
    RootVisualTree = CVisualTree::GetRootVisualTree(v4);
    v6 = RootVisualTree;
    *(_QWORD *)v17 = *((_QWORD *)v4 + 9);
    if ( RootVisualTree == v4 )
    {
      v7 = *((_QWORD *)this + 327);
      if ( v7 )
      {
        v8 = (CVisual *)*((_QWORD *)this + 327);
        do
        {
          VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v8);
          if ( VisualTreeNoRef )
          {
            v6 = VisualTreeNoRef;
            RootVisualTree = VisualTreeNoRef;
          }
          v8 = *(CVisual **)(v10 + 88);
        }
        while ( v8 );
        *(_QWORD *)v17 = v7;
      }
    }
    if ( v6 != v4 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 578); i = (unsigned int)(i + 1) )
      {
        v12 = *((_QWORD *)this + 3);
        v18 = *(_QWORD *)(*((_QWORD *)this + 286) + 8 * i);
        v25 = 0;
        v13 = std::_Allocate<16,std::_Default_allocate_traits>(0x48uLL, v5);
        *v13 = &off_1802E8830;
        v13[1] = this;
        v13[2] = &RootVisualTree;
        v13[3] = &v27;
        v13[4] = v17;
        v13[5] = &v24;
        v13[6] = &v28;
        v13[7] = &v18;
        v13[8] = &v29;
        v19 = 0LL;
        std::_Global_new_std::_Func_impl_no_alloc__CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2__long_CVisual___CVisualTree_____CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2____::_2_::_Guard_type::__Guard_type(&v19);
        v23 = v13;
        v14 = CComposition::ForEachCursorVisual(v12, (__int64)v22);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x204,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
            (const char *)(unsigned int)v14);
          goto LABEL_16;
        }
      }
    }
  }
  v15 = 0;
LABEL_16:
  gsl::final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___::_final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___((__int64)v20);
  return v15;
}
