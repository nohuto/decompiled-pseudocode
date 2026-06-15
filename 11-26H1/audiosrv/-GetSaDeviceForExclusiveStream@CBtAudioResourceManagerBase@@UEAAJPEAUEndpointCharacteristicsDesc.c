/*
 * XREFs of ?GetSaDeviceForExclusiveStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E3940
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180062BE8 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCEndpointCharacteristics@@@Z @ 0x1800C34B8 (--$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharact.c)
 *     ??0?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800E0204 (--0-$vector@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_ptr_t@.c)
 *     ?CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E09A4 (-CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacter.c)
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E0E20 (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManagerBase::GetSaDeviceForExclusiveStream(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 **a7,
        const wchar_t *a8)
{
  __int64 (*v12)(void); // rbx
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  int v16; // eax
  const WCHAR *v17; // r8
  int SaDeviceOnMicrophoneEndpoint; // eax
  unsigned int v19; // edi
  int ExclusiveSaDeviceOnRenderEndpoint; // eax
  unsigned int v21; // edi
  __int64 *v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v23; // [rsp+48h] [rbp-30h]
  __int64 *v24; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF

  v26 = 0LL;
  v12 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 72) + 24LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v26);
  try
  {
    v13 = v12();
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        186LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v13);
    if ( !v26 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)0x887C0079LL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
      return 2289827961LL;
    }
    std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>(
      &v22,
      a7);
    if ( v23 == v24 )
      std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Emplace_reallocate<CEndpointCharacteristics * &>(
        &v22,
        v23,
        &v26);
    else
      wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
        v23++,
        v26);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
    v17 = *(const WCHAR **)(*a2 + 48LL);
    if ( v16 == 1 )
    {
      if ( CompareStringOrdinal(*(LPCWCH *)(a1 + 64), -1, v17, -1, 1) != 2 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC6,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x8000FFFFLL);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        return 2147549183LL;
      }
      SaDeviceOnMicrophoneEndpoint = CBtAudioResourceManagerBase::CreateSaDeviceOnMicrophoneEndpoint(
                                       (CBtAudioResourceManagerBase *)a1,
                                       (int)a2,
                                       a3,
                                       a4,
                                       a5,
                                       a6,
                                       (__int64)&v22,
                                       a8);
      v19 = SaDeviceOnMicrophoneEndpoint;
      if ( SaDeviceOnMicrophoneEndpoint < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC7,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)SaDeviceOnMicrophoneEndpoint);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        return v19;
      }
    }
    else
    {
      if ( CompareStringOrdinal(*(LPCWCH *)(a1 + 56), -1, v17, -1, 1) != 2 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCE,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x8000FFFFLL);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        return 2147549183LL;
      }
      ExclusiveSaDeviceOnRenderEndpoint = CBtAudioResourceManagerBase::CreateExclusiveSaDeviceOnRenderEndpoint(
                                            a1,
                                            (int)a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6,
                                            (__int64)&v22,
                                            (__int64)a8);
      v21 = ExclusiveSaDeviceOnRenderEndpoint;
      if ( ExclusiveSaDeviceOnRenderEndpoint < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD0,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)ExclusiveSaDeviceOnRenderEndpoint);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        return v21;
      }
    }
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD5,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                           v14);
  }
  return result;
}
