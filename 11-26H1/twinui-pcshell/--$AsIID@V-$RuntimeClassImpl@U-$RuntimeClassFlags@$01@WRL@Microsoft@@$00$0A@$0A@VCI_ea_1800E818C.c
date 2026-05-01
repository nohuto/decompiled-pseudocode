/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800E818C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E8180 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800E8180.c)
 *     ??$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801DC880 (--$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E82F0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  int CanCastTo; // ebx
  __int64 v5; // rcx

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -62389853
      && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
LABEL_21:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)CanCastTo;
    }
LABEL_5:
    v3 = a1 + 40;
    if ( *a2 == -428157847
      && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4]
      || (v3 = a1 + 48, *a2 == 1834041537)
      && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = v3;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = -2147467262;
    }
    if ( CanCastTo == -2147467262 )
    {
      v5 = a1 + 104;
      if ( *a2 == -1049805059
        && a2[1] == *(_DWORD *)&GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1.Data2
        && a2[2] == *(_DWORD *)GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1.Data4
        && a2[3] == *(_DWORD *)&GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1.Data4[4] )
      {
        *a3 = v5;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::CanCastTo(
                      v5 + 8,
                      a2,
                      a3,
                      v3);
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_21;
  }
  if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_5;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
