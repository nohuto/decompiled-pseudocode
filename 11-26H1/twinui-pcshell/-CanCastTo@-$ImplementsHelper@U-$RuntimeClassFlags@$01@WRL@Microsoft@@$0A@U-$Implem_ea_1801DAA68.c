/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801DAA68
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801DA9F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801DA9F0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E8D98 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFt.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v3; // eax
  unsigned int CanCastTo; // ecx
  BOOL IsEqualGUID; // eax
  _QWORD *v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r10

  if ( *(_DWORD *)a2 == -2119300642 )
  {
    if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68.Data2
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68.Data4 )
    {
      goto LABEL_12;
    }
    v3 = *(_DWORD *)&GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68.Data4[4];
  }
  else
  {
    if ( *(_DWORD *)a2 != 215244401
      || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf.Data2
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf.Data4 )
    {
      goto LABEL_12;
    }
    v3 = *(_DWORD *)&GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf.Data4[4];
  }
  if ( *(_DWORD *)(a2 + 12) == v3 )
  {
    *a3 = a1;
    return 0;
  }
LABEL_12:
  IsEqualGUID = InlineIsEqualGUID((const struct _GUID *)a2, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade);
  CanCastTo = 0;
  if ( IsEqualGUID )
  {
    *v7 = v9;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::CanCastTo(
                  v9 + 8,
                  v8,
                  v7);
    if ( CanCastTo == -2147467262 )
      return (unsigned int)-2147467262;
  }
  return CanCastTo;
}
