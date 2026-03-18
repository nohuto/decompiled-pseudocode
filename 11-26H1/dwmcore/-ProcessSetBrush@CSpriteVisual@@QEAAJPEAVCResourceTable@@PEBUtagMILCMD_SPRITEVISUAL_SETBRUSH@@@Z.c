/*
 * XREFs of ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180023C38
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18001F6E0 (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@IEAAPEAPEAVCResource@@_K0@Z @ 0x180024AB0 (-reserve_region@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x18021CD94 (-UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x180230F14 (-RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::ProcessSetBrush(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVISUAL_SETBRUSH *a3)
{
  unsigned int v3; // eax
  __int64 *v4; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rcx
  struct CResource *v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0LL;
  if ( !v3
    || v3 < *((_DWORD *)a2 + 7)
    && (v6 = *((_DWORD *)a2 + 6) * v3, v7 = *((_QWORD *)a2 + 5), v8 = (unsigned int)v6, *(_DWORD *)(v6 + v7))
    && (v10 = *(_QWORD *)(v6 + v7 + 8)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL))(v10, 16LL)
    && (v4 = *(__int64 **)(v8 + v7 + 8)) != 0LL )
  {
    if ( v4 != (__int64 *)this[31] )
    {
      CVisual::ClearContentTreeDataCaches((CVisual *)this);
      v11 = this[31];
      if ( v11 && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v11 + 64LL))(v11, 143LL) )
        CSuperWetInkManager::UnregisterSuperWetInkVisual(
          *((CSuperWetInkManager **)g_pComposition + 82),
          (struct CVisual *)this);
      if ( v4 )
      {
        v12 = detail::pointer_buffer_impl<CResource *,0>::last(v4 + 4);
        v13 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v4 + 4);
        *(_QWORD *)detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::reserve_region(
                     v4 + 4,
                     (__int64)(v12 - v13) >> 3) = this;
        detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v4 + 4);
        (*(void (__fastcall **)(__int64 *))(*v4 + 8))(v4);
      }
      CResource::UnRegisterNotifierInternal((CResource *)this, this[31]);
      this[31] = (struct CResource *)v4;
      if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v4 + 64))(v4, 143LL) )
        CSuperWetInkManager::RegisterSuperWetInkVisual(
          *((CSuperWetInkManager **)g_pComposition + 82),
          (struct CVisual *)this);
      CVisual::UpdateContentFlags((CVisual *)this);
      CVisual::PropagateFlags((__int64)this, 0x15u);
    }
    return 0;
  }
  else
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x3Cu, 0LL);
  }
  return v9;
}
