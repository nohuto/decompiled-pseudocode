/*
 * XREFs of DxgkCheckAdapterPnPTransitionDoneInSession @ 0x1404404D4
 * Callers:
 *     _lambda_4d219c55c1944bedc25da37a83fa6654_::operator() @ 0x1401CC30C (_lambda_4d219c55c1944bedc25da37a83fa6654_--operator().c)
 *     _lambda_9212365dda97cb37a6803fd149b753fd_::operator() @ 0x1401CC574 (_lambda_9212365dda97cb37a6803fd149b753fd_--operator().c)
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401CC7CC (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckAdapterPnPTransitionDoneInCurrentSession@DXGSESSIONMGR@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1404403F0 (-CheckAdapterPnPTransitionDoneInCurrentSession@DXGSESSIONMGR@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DxgkCheckAdapterPnPTransitionDoneInSession(struct DXGADAPTER *a1)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  Global = DXGGLOBAL::GetGlobal();
  return DXGSESSIONMGR::CheckAdapterPnPTransitionDoneInCurrentSession(*((DXGSESSIONMGR **)Global + 123), a1, v3, v4);
}
