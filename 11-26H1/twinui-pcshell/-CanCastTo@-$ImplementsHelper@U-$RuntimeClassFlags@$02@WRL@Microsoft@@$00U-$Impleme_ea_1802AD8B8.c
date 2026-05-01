/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@@Details@23@UIWeakReferenceSource@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802AD8B8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806AECE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806AECE0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801BFECC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotif.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>>,IWeakReferenceSource,IVirtualDesktopSwitcherViewHostInternal>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  _DWORD *v4; // r9
  __int64 result; // rax
  const struct _GUID *v6; // r9
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r10
  unsigned int v10; // r11d

  v3 = a1;
  if ( *(_DWORD *)a2 == 468129636
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_1be71764_e771_4442_b78f_eda2c7f067f3.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3.Data4[4]
    || InlineIsEqualGUID((const struct _GUID *)a2, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9) )
  {
    goto LABEL_6;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>::CanCastTo(
             v3 + 8,
             v4,
             a3);
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v6, &GUID_00000038_0000_0000_c000_000000000046) )
    {
LABEL_6:
      *a3 = v3;
      return 0LL;
    }
    if ( InlineIsEqualGUID(v7, &GUID_1ed755e6_0150_4780_a937_c85c00302079) )
    {
      *v8 = v9 + 8;
      return 0LL;
    }
    return v10;
  }
  return result;
}
