/*
 * XREFs of ?AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUIUnknown@@@Z @ 0x1800C19CC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18003FB30 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$copy_to@UISubmixProxy@@@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUISubmixProxy@@@Z @ 0x1800814A8 (--$copy_to@UISubmixProxy@@@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     ??$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@?$TokenManager@VCAudioPumpDspResourceTracker@@@@QEAAJAEBUAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@W4TOKEN_ACQUIRE_OPTION@@PEAPEAUIUnknown@@@Z @ 0x1800C0C34 (--$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@_ea_1800C0C34.c)
 *     ?AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEBG0PEAPEAUIUnknown@@@Z @ 0x1800C1BDC (-AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEBG0PEAPEAUIUnknown@@@Z.c)
 *     ?IsStaleToken@@YA_NPEAUIUnknown@@@Z @ 0x1800C207C (-IsStaleToken@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioPumpDspResourceTracker::AcquireAudioPumpDspTokenForEndpoint(
        struct IUnknown *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct IUnknown **a3)
{
  __int64 v5; // rdi
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rax
  CAudioPumpDspResourceTracker *v8; // rcx
  const char *v9; // r9
  __int64 result; // rax
  unsigned int v11; // ebx
  RTL_SRWLOCK *v12; // rax
  RTL_SRWLOCK *v13; // [rsp+20h] [rbp-58h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  unsigned __int16 **v16; // [rsp+40h] [rbp-38h] BYREF
  PROPVARIANT v17; // [rsp+48h] [rbp-30h]
  char v18; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IUnknown *v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int16 *v21; // [rsp+98h] [rbp+20h] BYREF

  v20 = this;
  AcquireSRWLockShared(&stru_1801D65C0);
  v13 = &stru_1801D65C0;
  v5 = qword_1801D65D0;
  v6 = *(RTL_SRWLOCK **)qword_1801D65D0;
  try
  {
    while ( v6 != (RTL_SRWLOCK *)v5 )
    {
      v12 = v6 + 2;
      if ( v6[5].Ptr > (PVOID)7 )
        v12 = (RTL_SRWLOCK *)v12->Ptr;
      pvar[0] = v12;
      pvar[1] = *(PROPVARIANT *)(*(_QWORD *)a2 + 48LL);
      v20 = 0LL;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v20);
      TokenManager<CAudioPumpDspResourceTracker>::AcquireToken<CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext>(
        v6 + 6,
        (__int64)pvar,
        0,
        &v20);
      if ( v20 && !IsStaleToken(v20) )
      {
        wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::copy_to<ISubmixProxy>((__int64 *)&v20, a3);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
        return 0LL;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      v6 = (RTL_SRWLOCK *)v6->Ptr;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
    v21 = 0LL;
    v7 = *((_QWORD *)a2 + 1);
    v16 = &v21;
    v18 = 1;
    v17 = 0LL;
    *(_OWORD *)pvar = 0LL;
    v15 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)(v7 + 1584) + 72LL) + 40LL))(
           *(_QWORD *)(*(_QWORD *)(v7 + 1584) + 72LL),
           &PKEY_Endpoint_AudioPumpDsp_DevicePath,
           pvar) >= 0
      && LOWORD(pvar[0]) == 31 )
    {
      v17 = pvar[1];
      pvar[1] = 0LL;
    }
    PropVariantClear(pvar);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>((void ***)&v16);
    if ( v21
      && (int)CAudioPumpDspResourceTracker::AcquireAudioPumpDspTokenForEndpoint(
                v8,
                v21,
                *(const unsigned __int16 **)(*(_QWORD *)a2 + 48LL),
                a3) >= 0 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v21);
      result = 0LL;
    }
    else
    {
      v11 = CAudioPumpDspResourceTracker::AcquireAudioPumpDspTokenForEndpoint(
              v8,
              L"AudioDg-CPU",
              *(const unsigned __int16 **)(*(_QWORD *)a2 + 48LL),
              a3);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v21);
      result = v11;
    }
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xCB,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiopumpdspmanager.cpp",
                     v9);
    return (unsigned int)v20;
  }
  return result;
}
