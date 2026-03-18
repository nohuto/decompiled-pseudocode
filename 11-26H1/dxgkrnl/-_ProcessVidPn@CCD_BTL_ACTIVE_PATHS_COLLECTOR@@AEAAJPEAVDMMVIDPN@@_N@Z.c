/*
 * XREFs of ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x14034482C
 * Callers:
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x140269C0C (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1402AA220 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x140343DA0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1404055A0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_0_.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1402AAE98 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2,
        bool a3)
{
  char *v3; // rsi
  unsigned int v6; // edi
  struct DMMVIDPNPRESENTPATH *v7; // rbx
  char *v8; // rcx
  __int64 Container; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 result; // rax
  char *v12; // rcx

  v3 = (char *)a2 + 96;
  v6 = 0;
  if ( a2 == (struct DMMVIDPN *)-96LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 467;
  }
  v7 = 0LL;
  v8 = (char *)*((_QWORD *)v3 + 3);
  if ( v8 != v3 + 24 )
    v7 = (struct DMMVIDPNPRESENTPATH *)(v8 - 8);
  while ( v7 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)(v3 + 160));
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(Container + 48));
    result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, ContainingAdapter, v7, 1, a3);
    v6 = result;
    if ( (int)result < 0 )
      return result;
    v12 = (char *)*((_QWORD *)v7 + 1);
    v7 = (struct DMMVIDPNPRESENTPATH *)(v12 - 8);
    if ( v12 == v3 + 24 )
      v7 = 0LL;
  }
  return v6;
}
