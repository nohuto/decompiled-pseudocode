/*
 * XREFs of ?CanCastTo@?$ChainInterfaces@UIVirtualDesktopHotkeyHandlerPrivate@@UIVirtualDesktopHotkeyHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1788
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopHotkeyHandlerPrivate@@UIVirtualDesktopHotkeyHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIVirtualDesktopHotkeyHandlerPrivate2@@UIVirtualDesktopHotkeyHandlerPrivate@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopHotkeyHandlerPrivate@@UIVirtualDesktopHotkeyHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIVirtualDesktopHotkeyHandlerPrivate2@@UIVirtualDesktopHotkeyHandlerPrivate@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800A1668 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterfac.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ChainInterfaces<IVirtualDesktopHotkeyHandlerPrivate,IVirtualDesktopHotkeyHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r11

  v3 = 0;
  v4 = a1;
  if ( *(_DWORD *)a2 == 1628027921
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6109bc11_9cd9_4c61_b840_97ee12fba4b2.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6109bc11_9cd9_4c61_b840_97ee12fba4b2.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6109bc11_9cd9_4c61_b840_97ee12fba4b2.Data4[4]
    || InlineIsEqualGUID((const struct _GUID *)a2, &GUID_44b664ec_253c_4f5c_827b_78fb573756ae) )
  {
    *a3 = v4;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
