/*
 * XREFs of _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800EA9D0
 * Callers:
 *     ?ActivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBU_GUID@@@Z @ 0x1800EB130 (-ActivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEAV-$vector@V-$com_ptr_t@VCEndpointC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@Uguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAPEAUguid@winrt@@QEAU23@$$QEAU23@@Z @ 0x1800E88C0 (--$_Emplace_reallocate@Uguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@.c)
 *     ??$call@P6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingParametersStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingParametersStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingParametersStatics@456782@@Z@Z @ 0x1800E8FC8 (--$call@P6A-AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     ??$make_scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@YA?A_PV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@0@Z @ 0x1800E942C (--$make_scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simpl.c)
 *     ??1?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800E9F84 (--1-$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$vector_view@Uguid@winrt@@@param@winrt@@QEAA@XZ @ 0x1800E9FE0 (--1-$vector_view@Uguid@winrt@@@param@winrt@@QEAA@XZ.c)
 *     ??R_lambda_aa3be214326bf97ef71c4d714e593d62_@@QEBA@AEBUIBluetoothAudioSharingControllerStatics@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@Z @ 0x1800EA96C (--R_lambda_aa3be214326bf97ef71c4d714e593d62_@@QEBA@AEBUIBluetoothAudioSharingControllerStatics@I.c)
 *     ?CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@SA@XZ @ 0x1800EB5E4 (-CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winr.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800EDC1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800EDCC8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18013A130 (-GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator()(__int64 a1)
{
  CEndpointCharacteristics **v2; // r14
  CEndpointCharacteristics **v3; // r13
  int PropertyStoreProperty; // eax
  unsigned int v5; // ebx
  __int64 v7; // r15
  char v8; // dl
  char v9; // r8
  char v10; // r9
  char v11; // r10
  char v12; // r11
  char v13; // bl
  char v14; // di
  char v15; // si
  _BYTE *v16; // rdx
  HRESULT v17; // eax
  __int64 *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  char v21; // dl
  char v22; // r8
  char v23; // r9
  char v24; // r10
  char v25; // r11
  char v26; // bl
  char v27; // di
  char v28; // si
  unsigned int v29; // eax
  unsigned int v30; // eax
  IUnknown *v31; // rbx
  HRESULT v32; // eax
  unsigned int v33; // ebx
  int v34; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-A0h] BYREF
  IUnknown *pProxy[2]; // [rsp+50h] [rbp-98h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+60h] [rbp-88h] BYREF
  int v38; // [rsp+80h] [rbp-68h] BYREF
  __int128 v39; // [rsp+88h] [rbp-60h]
  IUnknown *v40[2]; // [rsp+A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v2 = **(CEndpointCharacteristics ****)a1;
  v3 = *(CEndpointCharacteristics ***)(*(_QWORD *)a1 + 8LL);
  while ( v2 != v3 )
  {
    memset(&pvar, 0, sizeof(pvar));
    PropertyStoreProperty = CEndpointCharacteristics::GetPropertyStoreProperty(*v2, &PKEY_Device_ContainerId, &pvar);
    v5 = PropertyStoreProperty;
    if ( PropertyStoreProperty < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)PropertyStoreProperty);
      PropVariantClear((PROPVARIANT *)&pvar);
      return v5;
    }
    if ( pvar.vt != 72 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)0x8000FFFFLL);
      PropVariantClear((PROPVARIANT *)&pvar);
      return 2147549183LL;
    }
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_BYTE *)(pvar.hVal.QuadPart + 8);
    v9 = *(_BYTE *)(pvar.hVal.QuadPart + 9);
    v10 = *(_BYTE *)(pvar.hVal.QuadPart + 10);
    v11 = *(_BYTE *)(pvar.hVal.QuadPart + 11);
    v12 = *(_BYTE *)(pvar.hVal.QuadPart + 12);
    v13 = *(_BYTE *)(pvar.hVal.QuadPart + 13);
    v14 = *(_BYTE *)(pvar.hVal.QuadPart + 14);
    v15 = *(_BYTE *)(pvar.hVal.QuadPart + 15);
    v40[0] = *pvar.ppunkVal;
    LOBYTE(v40[1]) = v8;
    BYTE1(v40[1]) = v9;
    BYTE2(v40[1]) = v10;
    BYTE3(v40[1]) = v11;
    BYTE4(v40[1]) = v12;
    BYTE5(v40[1]) = v13;
    BYTE6(v40[1]) = v14;
    HIBYTE(v40[1]) = v15;
    v16 = *(_BYTE **)(v7 + 8);
    if ( v16 == *(_BYTE **)(v7 + 16) )
    {
      std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid>((const void **)v7, v16, (__int128 *)v40);
    }
    else
    {
      *(_OWORD *)v16 = *(_OWORD *)v40;
      *(_QWORD *)(v7 + 8) += 16LL;
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    ++v2;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56664216>::GetImpl'::`2'::impl) )
  {
    winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController::CreateDefault();
    v17 = CoSetProxyBlanket(pProxy[0], 0xFFFFFFFF, 0, 0LL, 0, 3u, 0LL, 0);
    v19 = v17;
    if ( v17 >= 0 )
    {
      v40[0] = (IUnknown *)&qword_1801D6AE8;
      _InterlockedIncrement64(&qword_1801D6AE8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics> )
      {
        _lambda_aa3be214326bf97ef71c4d714e593d62_::operator()(
          (__int64)v18,
          &v35,
          (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics>);
        _InterlockedDecrement64(&qword_1801D6AE8);
      }
      else
      {
        _InterlockedDecrement64(&qword_1801D6AE8);
        v40[0] = (IUnknown *)_lambda_4d657e961041e624fe5d1ab9f4050edc_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics>::call<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters (*)(winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics const &)>(
          v18,
          (__int64)&v35,
          (void (__fastcall **)(__int64, __int64 *))v40);
      }
      v20 = *(_QWORD *)(a1 + 16);
      v21 = *(_BYTE *)(v20 + 8);
      v22 = *(_BYTE *)(v20 + 9);
      v23 = *(_BYTE *)(v20 + 10);
      v24 = *(_BYTE *)(v20 + 11);
      v25 = *(_BYTE *)(v20 + 12);
      v26 = *(_BYTE *)(v20 + 13);
      v27 = *(_BYTE *)(v20 + 14);
      v28 = *(_BYTE *)(v20 + 15);
      v40[0] = *(IUnknown **)v20;
      LOBYTE(v40[1]) = v21;
      BYTE1(v40[1]) = v22;
      BYTE2(v40[1]) = v23;
      BYTE3(v40[1]) = v24;
      BYTE4(v40[1]) = v25;
      BYTE5(v40[1]) = v26;
      BYTE6(v40[1]) = v27;
      HIBYTE(v40[1]) = v28;
      v38 = 0;
      v39 = 0LL;
      *(_OWORD *)&pvar.vt = *(_OWORD *)v40;
      v29 = (*(__int64 (__fastcall **)(__int64, struct tagPROPVARIANT *))(*(_QWORD *)v35 + 56LL))(v35, &pvar);
      winrt::check_hresult(&v34, v29, &v38);
      winrt::impl::make_scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>(
        (__int64 *)&pvar,
        **(_QWORD **)(a1 + 8),
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
      *((_BYTE *)&pvar.decVal + 16) = 1;
      v40[0] = 0LL;
      v38 = 0;
      v39 = 0LL;
      v30 = ((__int64 (__fastcall *)(IUnknown *, __int64, _QWORD, IUnknown **))pProxy[0]->lpVtbl[3].QueryInterface)(
              pProxy[0],
              v35,
              *(_QWORD *)&pvar.vt,
              v40);
      winrt::check_hresult(&v34, v30, &v38);
      v31 = v40[0];
      winrt::param::vector_view<winrt::guid>::~vector_view<winrt::guid>(&pvar);
      v32 = CoSetProxyBlanket(v31, 0xFFFFFFFF, 0, 0LL, 0, 3u, 0LL, 0);
      v33 = v32;
      if ( v32 >= 0 )
      {
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(v40);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v35);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(pProxy);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x140,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)(unsigned int)v32);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(v40);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v35);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(pProxy);
        return v33;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x133,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)v17);
      winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(pProxy);
      return v19;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x129,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)0x80004001LL);
    return 2147500033LL;
  }
}
