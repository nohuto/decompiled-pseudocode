/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180112540
 * Callers:
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801123BC (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetSuperWetInkSource@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVCSuperWetSource@@@Z @ 0x18021C8F0 (-SetSuperWetInkSource@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVC.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x18021CB84 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x180282CD0 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x180285930 (-Initialize@CTextVisual@@MEAAJXZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18001F6E0 (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@IEAAPEAPEAVCResource@@_K0@Z @ 0x180024AB0 (-reserve_region@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail.c)
 *     ?UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x18021CD94 (-UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x180230F14 (-RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  struct CResource *v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax

  if ( a2 != this[31] )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)this);
    v4 = this[31];
    if ( v4 && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v4 + 64LL))(v4, 143LL) )
      CSuperWetInkManager::UnregisterSuperWetInkVisual(
        *((CSuperWetInkManager **)g_pComposition + 82),
        (struct CVisual *)this);
    if ( a2 )
    {
      v5 = detail::pointer_buffer_impl<CResource *,0>::last((__int64 *)a2 + 4);
      v6 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)a2 + 4);
      *(_QWORD *)detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::reserve_region(
                   (__int64 *)a2 + 4,
                   (__int64)(v5 - v6) >> 3) = this;
      detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)a2 + 4);
      (*(void (__fastcall **)(struct CContent *))(*(_QWORD *)a2 + 8LL))(a2);
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[31]);
    this[31] = a2;
    if ( a2 && (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 143LL) )
      CSuperWetInkManager::RegisterSuperWetInkVisual(
        *((CSuperWetInkManager **)g_pComposition + 82),
        (struct CVisual *)this);
    CVisual::UpdateContentFlags((CVisual *)this);
    CVisual::PropagateFlags((__int64)this, 0x15u);
  }
  return 0LL;
}
