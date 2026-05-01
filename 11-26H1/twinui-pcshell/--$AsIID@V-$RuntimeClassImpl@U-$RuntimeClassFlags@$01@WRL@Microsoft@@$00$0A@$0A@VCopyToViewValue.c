/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D0DDC
 * Callers:
 *     ?QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800D08F0 (-QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C36C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToVie.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D0FA4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIObjectWithSite@@UISer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rdx
  int CanCastTo; // ebx
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::CanCastTo(
                  a1,
                  a2,
                  a3,
                  a1);
    if ( CanCastTo == -2147467262 )
    {
      v7 = v6 + 80;
      if ( *v3 == 276
        && v3[1] == *(_DWORD *)&GUID_00000114_0000_0000_c000_000000000046.Data2
        && v3[2] == *(_DWORD *)GUID_00000114_0000_0000_c000_000000000046.Data4
        && v3[3] == *(_DWORD *)&GUID_00000114_0000_0000_c000_000000000046.Data4[4]
        || (v7 += 8LL, *v3 == 594609810)
        && v3[1] == *(_DWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data2
        && v3[2] == *(_DWORD *)GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data4
        && v3[3] == *(_DWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data4[4]
        || (v7 += 8LL, *v3 == -1414719331)
        && v3[1] == *(_DWORD *)&GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb.Data2
        && v3[2] == *(_DWORD *)GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb.Data4
        && v3[3] == *(_DWORD *)&GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb.Data4[4] )
      {
        *v5 = v7;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = -2147467262;
      }
    }
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)CanCastTo;
  }
}
