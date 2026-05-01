/*
 * XREFs of ?CanCastTo@?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A47B0
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E751C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ChainInterfaces@UIAp.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ChainInterfaces<IApplicationFrameServiceTestability,IApplicationFrameService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r11

  v3 = 0;
  v4 = a1;
  if ( *(_DWORD *)a2 == -686947152
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_d70e04b0_f4dc_4c91_ab02_836e3f6c552c.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_d70e04b0_f4dc_4c91_ab02_836e3f6c552c.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_d70e04b0_f4dc_4c91_ab02_836e3f6c552c.Data4[4]
    || InlineIsEqualGUID((const struct _GUID *)a2, &GUID_88b25c81_171b_48b0_91d6_c75846bcf035) )
  {
    *a3 = v4;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
