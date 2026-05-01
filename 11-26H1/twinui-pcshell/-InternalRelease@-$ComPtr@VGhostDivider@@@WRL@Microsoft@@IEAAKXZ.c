/*
 * XREFs of ?InternalRelease@?$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CE64C
 * Callers:
 *     ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@PEAUIImmersiveMonitorManager@@PEAUHWND__@@W4GhostDividerPlacement@@W4GhostDividerSize@@AEBU_GUID@@PEAPEAX@Z @ 0x1802990D0 (-GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@PEAUIImmersiv.c)
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x180299204 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 *     ??1?$ComPtr@VGhostDivider@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B8278 (--1-$ComPtr@VGhostDivider@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CE7B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1801CE7B0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<GhostDivider>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v1);
  }
  return result;
}
