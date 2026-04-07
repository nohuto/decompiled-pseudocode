/*
 * XREFs of ?OnGraphicsDeviceLost@CWindowBorder@@UEAAXXZ @ 0x1800DE660
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBorderBrush@CBorderSprite@@QEAAJ$$QEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000BC70 (-UpdateBorderBrush@CBorderSprite@@QEAAJ$$QEAV-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@st.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateStyle@CProjectionBorderVisual@@QEAAXXZ @ 0x180094558 (-UpdateStyle@CProjectionBorderVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowBorder::OnGraphicsDeviceLost(CWindowBorder *this)
{
  CProjectionBorderVisual *v1; // rdi
  __int64 v2; // rcx

  v1 = (CWindowBorder *)((char *)this - 184);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    CBorderSprite::UpdateBorderBrush(v2);
    CProjectionBorderVisual::UpdateStyle(v1);
  }
}
