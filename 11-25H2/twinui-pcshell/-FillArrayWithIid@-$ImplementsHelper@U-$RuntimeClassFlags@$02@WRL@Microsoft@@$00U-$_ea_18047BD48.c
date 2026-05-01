/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18047BD48
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18047C430 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18047C430.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * (unsigned int)*a2) = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  v4 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v4) = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  v5 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v5) = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  v6 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v6) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  v7 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v7) = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
  v8 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v8) = GUID_6a5e657d_223a_4875_838b_c311ed73523b;
  v9 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v9) = GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa;
  *(GUID *)(a3 + 16LL * v3) = GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c;
  *a2 = v3 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::FillArrayWithIid();
}
