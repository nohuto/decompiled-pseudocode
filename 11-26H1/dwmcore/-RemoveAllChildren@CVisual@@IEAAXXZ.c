/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180024E5C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?DetachFromChannel@CVisual@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18010BD40 (-DetachFromChannel@CVisual@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1801B3214 (-ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDR.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?empty@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x1800186A0 (-empty@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QE.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020674 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?clear@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAAXXZ @ 0x1801A9D24 (-clear@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  __int64 *v1; // r15
  int v3; // esi
  int v4; // r14d
  struct CVisual **i; // rbx
  struct CVisual *v6; // rdi
  int v7; // ecx
  __int64 v8; // rax
  CVisual *v9; // rcx
  CVisual *v10; // rdx
  CVisual **v11; // rax

  v1 = (__int64 *)((char *)this + 80);
  if ( !detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::empty((_QWORD *)this + 10) )
  {
    v3 = 0;
    v4 = 0;
    for ( i = (struct CVisual **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v1);
          i != (struct CVisual **)detail::pointer_buffer_impl<CVisual *,0>::last(v1);
          ++i )
    {
      v6 = *i;
      if ( *i )
      {
        *i = 0LL;
        if ( (*((_BYTE *)v6 + 102) & 0x20) != 0 )
        {
          CVisual::DirtyForInvisibleChild(this, v6);
          v4 += *((_DWORD *)v6 + 65);
          v7 = v3 + *((_DWORD *)v6 + 64);
          v3 = v7 + 1;
          if ( *((char *)v6 + 102) >= 0 )
            v3 = v7;
          if ( (*((_BYTE *)v6 + 103) & 2) != 0 )
            ++v4;
        }
        v8 = *(_QWORD *)v6;
        *((_QWORD *)v6 + 11) = 0LL;
        (*(void (__fastcall **)(struct CVisual *))(v8 + 16))(v6);
      }
    }
    detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::clear(v1);
    if ( v3 || v4 )
    {
      v9 = this;
      v10 = this;
      do
      {
        *((_DWORD *)v9 + 64) -= v3;
        *((_DWORD *)v9 + 65) -= v4;
        if ( (*((_BYTE *)v9 + 102) & 0x20) == 0 )
          break;
        v9 = (CVisual *)*((_QWORD *)v9 + 11);
        if ( v10 )
        {
          v11 = (CVisual **)*((_QWORD *)v10 + 11);
          v10 = (CVisual *)v11;
          if ( v11 )
            v10 = v11[11];
        }
      }
      while ( v9 != v10 );
    }
    CVisual::PropagateFlags((__int64)this, 5u);
  }
}
