/*
 * XREFs of ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403D1C68
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403D1D10 (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 */

__int64 __fastcall DmmProcessHPDFiltering(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5412;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 3160) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, v9);
  LOBYTE(v10) = a4;
  LODWORD(v9) = VIDPN_MGR::ProcessHPDFiltering(v9, a2, a3, v10, a5);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  return (unsigned int)v9;
}
