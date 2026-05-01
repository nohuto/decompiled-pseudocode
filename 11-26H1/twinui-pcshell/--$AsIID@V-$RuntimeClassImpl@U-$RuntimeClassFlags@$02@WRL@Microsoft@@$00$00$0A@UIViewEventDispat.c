/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D040C
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800CF9C0 (--$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 *     ??$AsWeak@VUwpWindowEventDispatcher@@@WRL@Microsoft@@YAJPEAVUwpWindowEventDispatcher@@PEAVWeakRef@01@@Z @ 0x1800D02D4 (--$AsWeak@VUwpWindowEventDispatcher@@@WRL@Microsoft@@YAJPEAVUwpWindowEventDispatcher@@PEAVWeakRe.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIUwpWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D0400 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEvent.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@UIWindowEventDispatcherHostTermination@ViewManagerInterop@89Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D07F4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIPrivilegedOperationsC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IUwpWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  int CanCastTo; // ebx
  __int64 v6; // r9
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // r9
  int v11; // r10d
  int v12; // eax

  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      v3 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
      goto LABEL_5;
    }
LABEL_6:
    a1 += 8LL;
    if ( *a2 != 56
      || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      v4 = a1 + 8;
      if ( *a2 == -1073500785
        && a2[1] == *(_DWORD *)&GUID_c003ad8f_609c_4f72_980c_76060cb652ab.Data2
        && a2[2] == *(_DWORD *)GUID_c003ad8f_609c_4f72_980c_76060cb652ab.Data4
        && a2[3] == *(_DWORD *)&GUID_c003ad8f_609c_4f72_980c_76060cb652ab.Data4[4] )
      {
        goto LABEL_74;
      }
      v4 += 8LL;
      if ( *a2 == 573863684
        && a2[1] == *(_DWORD *)&GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a.Data2
        && a2[2] == *(_DWORD *)GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a.Data4
        && a2[3] == *(_DWORD *)&GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a.Data4[4] )
      {
        goto LABEL_74;
      }
      v4 += 8LL;
      if ( *a2 == 1489087544
        && a2[1] == *(_DWORD *)&GUID_58c1ac38_4edf_4ada_aa81_375958b4c848.Data2
        && a2[2] == *(_DWORD *)GUID_58c1ac38_4edf_4ada_aa81_375958b4c848.Data4
        && a2[3] == *(_DWORD *)&GUID_58c1ac38_4edf_4ada_aa81_375958b4c848.Data4[4] )
      {
        goto LABEL_74;
      }
      v4 += 8LL;
      if ( *a2 == -249330968
        && a2[1] == *(_DWORD *)&GUID_f12382e8_15a2_49d0_8c5d_5f886a12cb9c.Data2
        && a2[2] == *(_DWORD *)GUID_f12382e8_15a2_49d0_8c5d_5f886a12cb9c.Data4
        && a2[3] == *(_DWORD *)&GUID_f12382e8_15a2_49d0_8c5d_5f886a12cb9c.Data4[4] )
      {
        goto LABEL_74;
      }
      v4 += 8LL;
      if ( *a2 == -214933634
        && a2[1] == *(_DWORD *)&GUID_f3305f7e_8b9b_41f2_be95_4e832447c357.Data2
        && a2[2] == *(_DWORD *)GUID_f3305f7e_8b9b_41f2_be95_4e832447c357.Data4
        && a2[3] == *(_DWORD *)&GUID_f3305f7e_8b9b_41f2_be95_4e832447c357.Data4[4] )
      {
        goto LABEL_74;
      }
      if ( *a2 == 1943455045
        && a2[1] == *(_DWORD *)&GUID_73d6c545_9771_4aba_bb8c_713133ed635a.Data2
        && a2[2] == *(_DWORD *)GUID_73d6c545_9771_4aba_bb8c_713133ed635a.Data4
        && a2[3] == *(_DWORD *)&GUID_73d6c545_9771_4aba_bb8c_713133ed635a.Data4[4] )
      {
        *a3 = v4 + 8;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo != -2147467262 )
        goto LABEL_51;
      v6 = v4 + 24;
      if ( *a2 == 51241642
        && a2[1] == *(_DWORD *)&GUID_030de2aa_3f4c_47de_9c7b_0bada6462586.Data2
        && a2[2] == *(_DWORD *)GUID_030de2aa_3f4c_47de_9c7b_0bada6462586.Data4
        && a2[3] == *(_DWORD *)&GUID_030de2aa_3f4c_47de_9c7b_0bada6462586.Data4[4]
        || (v6 = v4 + 32, *a2 == 1260763374)
        && a2[1] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
        && a2[2] == *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
        && a2[3] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4]
        || (v6 = v4 + 40, *a2 == -62389853)
        && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
      {
        *a3 = v6;
LABEL_49:
        CanCastTo = 0;
        goto LABEL_51;
      }
      if ( (v8 = v4 + 80, *a2 == -428157847)
        && a2[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
        && a2[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
        && a2[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4]
        || (v8 = v6 + 48, *a2 == 1834041537)
        && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = v8;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo != -2147467262
        || (CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection,Windows::Internal::Shell::ViewManagerInterop::IWindowEventDispatcherHostTermination>::CanCastTo(v6 + 104),
            CanCastTo != v11) )
      {
LABEL_51:
        if ( CanCastTo < 0 )
          return (unsigned int)CanCastTo;
LABEL_52:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)CanCastTo;
      }
      v4 = v10 + 152;
      if ( *v9 == -1796592748 )
      {
        if ( v9[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
          && v9[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
        {
          v12 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
          goto LABEL_73;
        }
      }
      else if ( *v9 == 3
             && v9[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
             && v9[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
      {
        v12 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
LABEL_73:
        if ( v9[3] == v12 )
        {
LABEL_74:
          *a3 = v4;
          goto LABEL_49;
        }
      }
      CanCastTo = v11;
      goto LABEL_51;
    }
LABEL_80:
    *a3 = a1;
    CanCastTo = 0;
    goto LABEL_52;
  }
  if ( *a2 != -1350114592 )
  {
    if ( *a2 == -168860621
      && a2[1] == *(_DWORD *)&GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e.Data2
      && a2[2] == *(_DWORD *)GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e.Data4
      && a2[3] == *(_DWORD *)&GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e.Data4[4] )
    {
      goto LABEL_80;
    }
    goto LABEL_6;
  }
  if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    goto LABEL_6;
  }
  v3 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_5:
  if ( a2[3] != v3 )
    goto LABEL_6;
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
