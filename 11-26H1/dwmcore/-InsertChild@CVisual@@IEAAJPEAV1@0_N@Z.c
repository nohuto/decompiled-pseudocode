/*
 * XREFs of ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1800260F4
 * Callers:
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18021BDDC (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020E7C (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x180025C10 (-RemoveChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800264A4 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x18002655C (-reserve_region@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@d.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::InsertChild(CVisual *this, CVisual **a2, CVisual **a3, char a4)
{
  CVisual *v7; // rsi
  __int64 *v8; // r15
  unsigned __int64 v9; // r13
  unsigned __int64 i; // rdi
  struct CVisual **v11; // rbx
  const char *v12; // r9
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rax
  CVisual *v15; // rcx
  int v16; // edx
  int v17; // r8d
  __int64 *v19; // rcx
  unsigned __int64 v20; // rax
  CVisual *v21; // rcx
  CVisual **v22; // rax
  int v23; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = this;
  if ( a2[11] == this )
    goto LABEL_22;
  if ( a3 )
  {
    if ( a3[11] == this )
    {
      v8 = (__int64 *)((char *)this + 80);
      v9 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 10);
      for ( i = detail::pointer_buffer_impl<CVisual *,0>::last(v8); ; i -= 8LL )
      {
        v11 = (struct CVisual **)(i - 8);
        if ( i == v9 || *v11 == (struct CVisual *)a3 )
          break;
      }
      if ( i == detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v8) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x261,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
          v12);
      if ( a4 )
        v11 = (struct CVisual **)i;
      v13 = (_QWORD *)((char *)v7 + 80);
      goto LABEL_12;
    }
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
      (const char *)0x80070057LL,
      v23);
    return 2147942487LL;
  }
  v13 = (_QWORD *)((char *)this + 80);
  v19 = (__int64 *)((char *)this + 80);
  if ( a4 )
    v20 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v19);
  else
    v20 = detail::pointer_buffer_impl<CVisual *,0>::last(v19);
  v11 = (struct CVisual **)v20;
LABEL_12:
  v14 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v13);
  *(_QWORD *)detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::reserve_region(
               v13,
               (__int64)((__int64)v11 - v14) >> 3) = a2;
  detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v13);
  (*((void (__fastcall **)(CVisual **))*a2 + 1))(a2);
  v15 = a2[11];
  if ( v15 )
    CVisual::RemoveChild(v15, (struct CVisual *)a2);
  a2[11] = v7;
  CVisual::OnOuterTransformChanged((CVisual *)a2);
  CVisual::OnClipChanged((CVisual *)a2);
  if ( (*((_BYTE *)a2 + 102) & 0x20) != 0 )
  {
    CVisual::DirtyForVisibleChild(v7, (struct CVisual *)a2);
    v16 = *((_DWORD *)a2 + 65) + 1;
    if ( (*((_BYTE *)a2 + 103) & 2) == 0 )
      v16 = *((_DWORD *)a2 + 65);
    v17 = *((_DWORD *)a2 + 64) + 1;
    if ( *((char *)a2 + 102) >= 0 )
      v17 = *((_DWORD *)a2 + 64);
    if ( v17 || v16 )
    {
      v21 = v7;
      do
      {
        *((_DWORD *)v7 + 64) += v17;
        *((_DWORD *)v7 + 65) += v16;
        if ( (*((_BYTE *)v7 + 102) & 0x20) == 0 )
          break;
        v7 = (CVisual *)*((_QWORD *)v7 + 11);
        if ( v21 )
        {
          v22 = (CVisual **)*((_QWORD *)v21 + 11);
          v21 = (CVisual *)v22;
          if ( v22 )
            v21 = v22[11];
        }
      }
      while ( v7 != v21 );
    }
  }
  return 0LL;
}
