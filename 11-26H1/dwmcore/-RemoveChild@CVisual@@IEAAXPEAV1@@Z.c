/*
 * XREFs of ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x180025C10
 * Callers:
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x180025D40 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1800260F4 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18021BDDC (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020674 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x180026858 (-clear_region@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2)
{
  __int64 *v2; // rbp
  CVisual *v3; // rdi
  unsigned __int64 v5; // r14
  struct CVisual **i; // rbx
  unsigned __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rax
  CVisual *v11; // rcx
  CVisual **v12; // rax

  v2 = (__int64 *)((char *)this + 80);
  v3 = this;
  v5 = detail::pointer_buffer_impl<CVisual *,0>::last((__int64 *)this + 10);
  for ( i = (struct CVisual **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v2);
        i != (struct CVisual **)v5 && *i != a2;
        ++i )
  {
    ;
  }
  if ( i != (struct CVisual **)detail::pointer_buffer_impl<CVisual *,0>::last(v2) )
  {
    v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v2);
    detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::clear_region(
      v2,
      (__int64)((__int64)i - v7) >> 3,
      1LL);
    detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v2);
    if ( (*((_BYTE *)a2 + 102) & 0x20) != 0 )
    {
      CVisual::DirtyForInvisibleChild(v3, a2);
      v8 = *((_DWORD *)a2 + 64) + 1;
      if ( *((char *)a2 + 102) >= 0 )
        v8 = *((_DWORD *)a2 + 64);
      v9 = *((_DWORD *)a2 + 65) + 1;
      if ( (*((_BYTE *)a2 + 103) & 2) == 0 )
        v9 = *((_DWORD *)a2 + 65);
      if ( v8 || v9 )
      {
        v11 = v3;
        do
        {
          *((_DWORD *)v3 + 64) -= v8;
          *((_DWORD *)v3 + 65) -= v9;
          if ( (*((_BYTE *)v3 + 102) & 0x20) == 0 )
            break;
          v3 = (CVisual *)*((_QWORD *)v3 + 11);
          if ( v11 )
          {
            v12 = (CVisual **)*((_QWORD *)v11 + 11);
            v11 = (CVisual *)v12;
            if ( v12 )
              v11 = v12[11];
          }
        }
        while ( v3 != v11 );
      }
    }
    v10 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 11) = 0LL;
    (*(void (__fastcall **)(struct CVisual *))(v10 + 16))(a2);
  }
}
