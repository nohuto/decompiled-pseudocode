/*
 * XREFs of ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x140349170
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x140349A8C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x14034737C (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGET *a1,
        VIDPN_MGR **this)
{
  const struct DXGADAPTER *ContainingAdapter; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  const struct DMMVIDEOPRESENTTARGET *v7; // rbx
  const struct DMMVIDEOPRESENTTARGET *v9; // rbx
  const struct DMMVIDEOPRESENTTARGETSET *v10; // rcx
  const struct DMMVIDEOPRESENTTARGET *v11; // rdi

  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
  for ( i = a1; ; i = v7 )
  {
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)this, i);
    v7 = NextTarget;
    if ( !NextTarget )
      break;
    if ( !*((_DWORD *)NextTarget + 23)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(ContainingAdapter, NextTarget, a1)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(ContainingAdapter, a1, v7) )
    {
      return v7;
    }
  }
  v9 = 0LL;
  v10 = this[3];
  v11 = 0LL;
  if ( v10 != (const struct DMMVIDEOPRESENTTARGETSET *)(this + 3) )
    v9 = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v10 - 8);
  for ( ; v9; v9 = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)this, v9) )
  {
    if ( !*((_DWORD *)v9 + 23)
      && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(ContainingAdapter, v9, v11)
      && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(ContainingAdapter, a1, v9) )
    {
      v11 = v9;
    }
  }
  return v11;
}
