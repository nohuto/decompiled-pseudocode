/*
 * XREFs of ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18000E770 (-size@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurf.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEBAPEAPEAVCCompositionSurfaceBitmap@@XZ @ 0x18004D970 (-last@-$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEBAPEAPEAVCCompositionS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?erase_unchecked@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCCompositionSurfaceBitmap@@@2@V?$basic_iterator@QEAVCCompositionSurfaceBitmap@@@2@0@Z @ 0x1800DF6F8 (-erase_unchecked@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCComp.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x1800DF830 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1800DF85C (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAAPEAPEAVCCompositionSurfaceBitmap@@_K0@Z @ 0x1800DFBE8 (-reserve_region@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompo.c)
 *     ?empty@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x1800DFF9C (-empty@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSur.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x1800E03D0 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?GetSurfaceManager@@YAPEAVCSurfaceManager@@XZ @ 0x18012C884 (-GetSurfaceManager@@YAPEAVCSurfaceManager@@XZ.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180186600 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801CA050 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 */

__int64 __fastcall CWindowNode::SetFlipExSurface(struct CComposition **this, void *a2)
{
  unsigned int v4; // r15d
  bool v5; // r14
  int HasNonEmptyContent; // r12d
  struct CSurfaceManager *SurfaceManager; // rax
  int v8; // eax
  struct CResource *v9; // rdi
  __int64 *v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // r8d
  _QWORD v18[9]; // [rsp+30h] [rbp-48h] BYREF
  CCompositionSurfaceBitmap *v19; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  HasNonEmptyContent = (unsigned __int8)CWindowNode::HasNonEmptyContent((CWindowNode *)this);
  if ( a2 )
  {
    v19 = 0LL;
    SurfaceManager = GetSurfaceManager();
    v8 = CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
           (struct CSurfaceManager *)((char *)SurfaceManager + 16),
           this[3],
           a2,
           &v19);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x168u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
      return v4;
    }
    v9 = v19;
    if ( CCompositionSurfaceBitmap::GetRenderingRealization(v19) )
    {
      CWindowNode::DiscardFlipExSurfaces((CWindowNode *)this);
      *((_BYTE *)this + 896) |= 8u;
      v10 = (__int64 *)(this + 104);
      v5 = 1;
    }
    else
    {
      v10 = (__int64 *)(this + 104);
      if ( detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::size((__int64 *)this + 104) == 16 )
      {
        if ( ((_BYTE)this[112] & 8) != 0 )
        {
          v11 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(this + 104);
          CResource::UnRegisterNotifierInternal((CResource *)this, *(struct CResource **)(v11 + 8));
          v12 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(this + 104);
          v21 = v12 + 8;
          v20 = v12 + 16;
          detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::erase_unchecked(
            this + 104,
            v18,
            &v21,
            &v20);
        }
        else
        {
          CWindowNode::DiscardOldestFlipExSurfaces((CWindowNode *)this, 1uLL);
        }
      }
    }
    CResource::RegisterNotifier((CResource *)this, v9);
    v13 = detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(v10);
    v14 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(v10);
    *(_QWORD *)detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::reserve_region(
                 v10,
                 (__int64)(v13 - v14) >> 3) = v9;
    detail::pointer_buffer_impl<CBaseExpression *,0>::first(v10);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  }
  else if ( !detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::empty(this + 104) )
  {
    CWindowNode::DiscardFlipExSurfaces((CWindowNode *)this);
    v5 = ((_BYTE)this[112] & 8) != 0;
    *((_BYTE *)this + 896) &= ~8u;
  }
  v15 = HasNonEmptyContent ^ (unsigned __int8)CWindowNode::HasNonEmptyContent((CWindowNode *)this);
  v16 = v15 | 4;
  if ( !v5 )
    v16 = v15;
  if ( v16 )
    CWindowNode::Invalidate((CVisual *)this, 2, v16);
  return v4;
}
