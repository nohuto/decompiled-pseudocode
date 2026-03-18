/*
 * XREFs of ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x14019024C
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x140349A8C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x14034737C (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(VIDPN_MGR **this)
{
  struct DXGADAPTER *ContainingAdapter; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  const struct DMMVIDEOPRESENTTARGETSET *v4; // r8
  const struct DMMVIDEOPRESENTTARGET *v5; // rdi
  const struct DXGADAPTER *v6; // rbp

  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
  NextTarget = 0LL;
  v4 = this[3];
  v5 = 0LL;
  v6 = ContainingAdapter;
  if ( v4 != (const struct DMMVIDEOPRESENTTARGETSET *)(this + 3) )
    NextTarget = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v4 - 8);
  for ( ; NextTarget; NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)this, NextTarget) )
  {
    if ( !*((_DWORD *)NextTarget + 23) && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v6, NextTarget, v5) )
      v5 = NextTarget;
  }
  return v5;
}
