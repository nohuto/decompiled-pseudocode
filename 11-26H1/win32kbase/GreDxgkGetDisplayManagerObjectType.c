/*
 * XREFs of GreDxgkGetDisplayManagerObjectType @ 0x1401F9DD4
 * Callers:
 *     ?EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401720C4 (-EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetHandleProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140243480 (-SetHandleProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkGetDisplayManagerObjectType(__int64 a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (**)(void))(DxgkWin32kInterface + 496))();
}
