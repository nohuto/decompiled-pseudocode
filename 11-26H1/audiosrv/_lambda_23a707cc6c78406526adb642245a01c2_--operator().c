/*
 * XREFs of _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800EA614
 * Callers:
 *     ?DeactivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEBU_GUID@@@Z @ 0x1800EB6C0 (-DeactivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ??1?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800E9F84 (--1-$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@SA@XZ @ 0x1800EB5E4 (-CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winr.c)
 *     ?CurrentSession@?$consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingController@UIBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800EB65C (-CurrentSession@-$consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingCon.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800EDC1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800EDCC8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall lambda_23a707cc6c78406526adb642245a01c2_::operator()(__int64 *a1)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  int *v5; // rcx
  char v6; // dl
  char v7; // r8
  char v8; // r9
  char v9; // r10
  char v10; // r11
  char v11; // bl
  char v12; // di
  char v13; // si
  unsigned int v14; // eax
  HRESULT v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // [rsp+40h] [rbp-68h] BYREF
  IUnknown *v19; // [rsp+48h] [rbp-60h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-58h] BYREF
  int Buf2; // [rsp+58h] [rbp-50h] BYREF
  __int16 v22; // [rsp+5Ch] [rbp-4Ch]
  __int16 v23; // [rsp+5Eh] [rbp-4Ah]
  char v24; // [rsp+60h] [rbp-48h]
  char v25; // [rsp+61h] [rbp-47h]
  char v26; // [rsp+62h] [rbp-46h]
  char v27; // [rsp+63h] [rbp-45h]
  char v28; // [rsp+64h] [rbp-44h]
  char v29; // [rsp+65h] [rbp-43h]
  char v30; // [rsp+66h] [rbp-42h]
  char v31; // [rsp+67h] [rbp-41h]
  int v32; // [rsp+68h] [rbp-40h] BYREF
  __int128 v33; // [rsp+70h] [rbp-38h]
  __int128 Buf1; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56664216>::GetImpl'::`2'::impl) )
  {
    winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController::CreateDefault();
    v3 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0, 0LL, 0, 3u, 0LL, 0);
    v4 = v3;
    if ( v3 >= 0 )
    {
      winrt::impl::consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingController<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingController>::CurrentSession(
        &pProxy,
        &v19);
      if ( v19 )
      {
        v5 = (int *)*a1;
        v6 = *(_BYTE *)(*a1 + 8);
        v7 = *(_BYTE *)(*a1 + 9);
        v8 = *(_BYTE *)(*a1 + 10);
        v9 = *(_BYTE *)(*a1 + 11);
        v10 = *(_BYTE *)(*a1 + 12);
        v11 = *(_BYTE *)(*a1 + 13);
        v12 = *(_BYTE *)(*a1 + 14);
        v13 = *((_BYTE *)v5 + 15);
        Buf2 = *v5;
        v22 = *((_WORD *)v5 + 2);
        v23 = *((_WORD *)v5 + 3);
        v24 = v6;
        v25 = v7;
        v26 = v8;
        v27 = v9;
        v28 = v10;
        v29 = v11;
        v30 = v12;
        v31 = v13;
        Buf1 = 0LL;
        v32 = 0;
        v33 = 0LL;
        v14 = ((__int64 (__fastcall *)(IUnknown *, __int128 *))v19->lpVtbl[2].Release)(v19, &Buf1);
        winrt::check_hresult(&v18, v14, &v32);
        if ( !memcmp_0(&Buf1, &Buf2, 0x10uLL) )
        {
          v15 = CoSetProxyBlanket(v19, 0xFFFFFFFF, 0, 0LL, 0, 3u, 0LL, 0);
          v16 = v15;
          if ( v15 >= 0 )
          {
            v32 = 0;
            v33 = 0LL;
            v17 = ((__int64 (__fastcall *)(IUnknown *))v19->lpVtbl[3].QueryInterface)(v19);
            winrt::check_hresult(&v18, v17, &v32);
            winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v19);
            winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
            return 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x176,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
              (const char *)(unsigned int)v15);
            winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v19);
            winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
            return v16;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x16D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
            (const char *)0x80070057LL);
          winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v19);
          winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
          return 2147942487LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
          (const char *)0x80070057LL);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v19);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
        return 2147942487LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)(unsigned int)v3);
      winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&pProxy);
      return v4;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)0x80004001LL);
    return 2147500033LL;
  }
}
