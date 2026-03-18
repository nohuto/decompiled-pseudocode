/*
 * XREFs of ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?size@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18001F480 (-size@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800D34F8 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?erase_unchecked@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCGdiSpriteBitmap@@@2@V?$basic_iterator@QEAVCGdiSpriteBitmap@@@2@0@Z @ 0x1800DF678 (-erase_unchecked@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitm.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800DF8E4 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1800DF910 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAAPEAPEAVCGdiSpriteBitmap@@_K0@Z @ 0x1800DF9D4 (-reserve_region@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitma.c)
 *     ?empty@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x1800E0098 (-empty@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@d.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x1800E03D0 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEBAPEAPEAVCGdiSpriteBitmap@@XZ @ 0x1800E0830 (-last@-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEBAPEAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x1800E0920 (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 *     ?AttachToWindow@CGdiSpriteBitmap@@QEAAX_N@Z @ 0x18019FE34 (-AttachToWindow@CGdiSpriteBitmap@@QEAAX_N@Z.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x1801C8F24 (McTemplateU0xxx_EventWriteTransfer.c)
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 *     ??R?$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z @ 0x180246460 (--R-$default_delete@VCComposeTop@@@std@@QEBAXPEAVCComposeTop@@@Z.c)
 */

__int64 __fastcall CWindowNode::SetSpriteBitmap(CWindowNode *this, struct CGdiSpriteBitmap *a2)
{
  bool v4; // si
  __int64 v5; // rcx
  int HasNonEmptyContent; // r12d
  unsigned __int64 v7; // r15
  struct CGdiSpriteBitmap **i; // rbx
  struct CResource *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  struct CDesktopTree *DesktopTree; // rax
  __int64 v15; // rcx
  CComposeTop *v16; // rdx
  unsigned __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  HasNonEmptyContent = (unsigned __int8)CWindowNode::HasNonEmptyContent(this);
  if ( a2 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxx_EventWriteTransfer(
        v5,
        &EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
        *((_QWORD *)this + 99),
        *((_QWORD *)this + 98),
        a2);
    v7 = detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>::last((__int64 *)this + 103);
    for ( i = (struct CGdiSpriteBitmap **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103);
          i != (struct CGdiSpriteBitmap **)v7 && *i != a2;
          ++i )
    {
      ;
    }
    if ( i == (struct CGdiSpriteBitmap **)detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>::last((__int64 *)this + 103) )
    {
      if ( *((_BYTE *)this + 745) || *((_BYTE *)a2 + 148) )
      {
        CWindowNode::DiscardGdiSpriteBitmaps(this);
        *((_BYTE *)this + 896) |= 4u;
        v4 = 1;
      }
      else if ( detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size((__int64 *)this + 103) == 16 )
      {
        if ( (*((_BYTE *)this + 896) & 4) != 0 )
        {
          v9 = *(struct CResource **)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103)
                                    + 8);
          *((_BYTE *)v9 + 149) = 0;
          CResource::UnRegisterNotifierInternal(this, v9);
          v10 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103);
          v19 = v10 + 8;
          v18 = v10 + 16;
          detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::erase_unchecked(
            (__int64 *)this + 103,
            &v20,
            &v19,
            &v18);
        }
        else
        {
          CWindowNode::DiscardOldestGdiSpriteBitmaps(this, 1uLL);
        }
      }
      *((_BYTE *)a2 + 152) = *((_BYTE *)this + 744);
      CGdiSpriteBitmap::SetColorKey(a2, (*((_DWORD *)this + 191) & 2) != 0, (CWindowNode *)((char *)this + 840));
      CResource::RegisterNotifier(this, a2);
      v11 = detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>::last((__int64 *)this + 103);
      v12 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103);
      *(_QWORD *)detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::reserve_region(
                   (__int64 *)this + 103,
                   (__int64)(v11 - v12) >> 3) = a2;
      detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103);
      CGdiSpriteBitmap::AttachToWindow(a2, 1);
    }
  }
  else if ( !detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::empty((_QWORD *)this + 103) )
  {
    CWindowNode::DiscardGdiSpriteBitmaps(this);
    v4 = (*((_BYTE *)this + 896) & 4) != 0;
    *((_BYTE *)this + 896) &= ~4u;
  }
  v13 = HasNonEmptyContent ^ (unsigned __int8)CWindowNode::HasNonEmptyContent(this);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 745) )
    {
      DesktopTree = CVisual::GetDesktopTree(this);
      if ( DesktopTree )
      {
        v16 = (CComposeTop *)*((_QWORD *)DesktopTree + 506);
        *((_QWORD *)DesktopTree + 506) = 0LL;
        if ( v16 )
          std::default_delete<CComposeTop>::operator()(v15, v16);
      }
    }
    v13 |= 4u;
    if ( *((_BYTE *)this + 744) )
    {
      CShapePtr::~CShapePtr((CWindowNode *)((char *)this + 880));
      v13 |= 1u;
    }
  }
  if ( v13 )
    CWindowNode::Invalidate(this, 1, v13);
  return 0LL;
}
