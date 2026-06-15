/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@6@Z @ 0x1800FF7F4
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@AEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@8@Z @ 0x18007506C (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCha.c)
 * Callees:
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x1800146A8 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x18003EC8C (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077420 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800DEFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     ??4?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F9A68 (--4-$vector@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_ptr_t@.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        __int64 a1,
        const struct SaDeviceParams *a2,
        CEndpointCharacteristics **a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        void *a9,
        void *a10)
{
  __int64 v14; // rcx
  CEndpointCharacteristics *v15; // rsi
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // r9
  __int64 *v21; // rsi
  int SaDevice; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rbx
  CResourcePriorityTracker *v26; // rax
  _QWORD *v27; // rbx
  __int64 v29[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v30[2]; // [rsp+90h] [rbp-19h] BYREF
  int Buf1[4]; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+2Fh]
  __int64 v33; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v34; // [rsp+F0h] [rbp+47h] BYREF

  *(_DWORD *)(a1 + 152) = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)*a3 + 56LL))(*a3);
  if ( *(_QWORD *)(a1 + 136) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v14 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 136) = a4;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *a3;
  v16 = (_QWORD *)(a1 + 144);
  v17 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  CEndpointCharacteristics::TryGetCustomResourceManagerService(
    v15,
    &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
    (void **)(a1 + 144));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl)
    && *v16 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct SaDeviceParams *))(*(_QWORD *)*v16 + 80LL))(
      *v16,
      *(unsigned int *)(a1 + 152),
      a2);
  }
  v18 = CloneSaDeviceParams(a2, (void ***)(a1 + 48));
  v19 = v18;
  if ( v18 >= 0 )
  {
    v33 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
    v20 = *(_QWORD *)(a1 + 48);
    *(_OWORD *)v29 = *(_OWORD *)(v20 + 80);
    *(_OWORD *)v30 = *(_OWORD *)(v20 + 64);
    *(_OWORD *)Buf1 = *(_OWORD *)(v20 + 48);
    v21 = (__int64 *)a8;
    SaDevice = CreateSaDevice(
                 a3,
                 a5,
                 a6,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(v20 + 8),
                 (IID *)Buf1,
                 v30,
                 *(_QWORD *)(v20 + 32),
                 *(_QWORD *)(v20 + 40),
                 *(struct tWAVEFORMATEX **)(v20 + 16),
                 *(_QWORD *)(v20 + 24),
                 v29,
                 (IID *)a9,
                 a10,
                 (__int64 **)a8,
                 (IUnknown **)&v33);
    v19 = SaDevice;
    if ( SaDevice >= 0 )
    {
      v25 = v33;
      if ( *(_QWORD *)(a1 + 104) != v33 )
      {
        v34 = v33;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v34);
        v34 = *(_QWORD *)(a1 + 104);
        *(_QWORD *)(a1 + 104) = v25;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
      }
      v26 = (CResourcePriorityTracker *)operator new[](0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v34 = (__int64)v26;
      v27 = (_QWORD *)a7;
      if ( v26 )
        v26 = CResourcePriorityTracker::CResourcePriorityTracker(v26, *(_DWORD *)(a7 + 8));
      *(_QWORD *)(a1 + 56) = v26;
      if ( v26 )
      {
        *(_BYTE *)(a1 + 96) = a5 == 1;
        *(_QWORD *)(a1 + 64) = *v27;
        *v27 = 0LL;
        std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::operator=((__int64 *)(a1 + 72), v21);
        v19 = 0;
        goto LABEL_23;
      }
      v19 = -2147024882;
      v23 = 2147942414LL;
      v24 = 2865LL;
    }
    else
    {
      v23 = (unsigned int)SaDevice;
      v24 = 2860LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v23);
LABEL_23:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
    return v19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB27,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
