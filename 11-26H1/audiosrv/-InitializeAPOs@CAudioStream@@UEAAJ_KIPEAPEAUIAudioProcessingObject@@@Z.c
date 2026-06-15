/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18008C010
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x18003784C (-InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180040FD8 (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18005B360 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??$try_com_query_to@UIAudioMeter@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioMeter@@@Z @ 0x1800674D0 (--$try_com_query_to@UIAudioMeter@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessi.c)
 *     ??$try_com_query_to@UIAPOWrapperSrv@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAPOWrapperSrv@@@Z @ 0x180067560 (--$try_com_query_to@UIAPOWrapperSrv@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProce.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=1
__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct AudioSrvTelemetryProvider *v7; // rax
  unsigned int v8; // esi
  __int64 *v9; // r14
  struct IAudioProcessingObject **v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ebx
  int v26; // eax
  unsigned int v27; // ebx
  unsigned int i; // esi
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // ebx
  int v32; // eax
  unsigned int v33; // ebx
  int v34[2]; // [rsp+20h] [rbp-148h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+28h] [rbp-140h] BYREF
  unsigned int v36[2]; // [rsp+30h] [rbp-138h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v7 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v7 + 1),
    "AudioStream_InitializeAPOs",
    0LL);
  if ( !*((_BYTE *)this + 41) )
    *((_DWORD *)this + 31) = 1;
  *(_QWORD *)v34 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v35 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  v8 = 0;
  v9 = (__int64 *)((char *)this + 168);
  while ( v8 < a3 )
  {
    *(_QWORD *)v36 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)v36);
    v10 = &a4[v8];
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, unsigned int *))(*v10)->lpVtbl->QueryInterface)(
           *v10,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           v36) >= 0 )
    {
      v11 = *v9;
      v12 = *(_QWORD *)v36;
      *v9 = *(_QWORD *)v36;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v36);
    *(_QWORD *)v36 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)v36);
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, unsigned int *))(*v10)->lpVtbl->QueryInterface)(
           *v10,
           &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
           v36) >= 0 )
    {
      v13 = *((_QWORD *)this + 22);
      v14 = *(_QWORD *)v36;
      *((_QWORD *)this + 22) = *(_QWORD *)v36;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v36);
    *(_QWORD *)v36 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, unsigned int *))(*v10)->lpVtbl->QueryInterface)(
           *v10,
           &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9,
           v36) >= 0 )
    {
      v15 = *((_QWORD *)this + 24);
      v16 = *(_QWORD *)v36;
      *((_QWORD *)this + 24) = *(_QWORD *)v36;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v36);
    *(_QWORD *)v36 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)v36);
    if ( wil::try_com_query_to<IAudioMeter,IAudioProcessingObject * &>(v10, (__int64)v36) )
    {
      v17 = *((_QWORD *)this + 23);
      v18 = *(_QWORD *)v36;
      *((_QWORD *)this + 23) = *(_QWORD *)v36;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 23) + 32LL))(
              *((_QWORD *)this + 23),
              (char *)this + 84);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x241,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v19,
          v34[0]);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 384LL))(g_PolicyManager) )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 40LL))(*((_QWORD *)this + 23), 1LL);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v36);
    *(_QWORD *)v36 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, unsigned int *))(*v10)->lpVtbl->QueryInterface)(
           *v10,
           &GUID_8ab91395_f920_4132_873f_7a40607f7901,
           v36) >= 0 )
    {
      v20 = *((_QWORD *)this + 25);
      v21 = *(_QWORD *)v36;
      *((_QWORD *)this + 25) = *(_QWORD *)v36;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v36);
    v22 = *(_QWORD *)v34;
    *(_QWORD *)v34 = 0LL;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, int *))(*v10)->lpVtbl->QueryInterface)(
           *v10,
           &GUID_0e0823fe_8765_49d4_9cca_c008a449bef1,
           v34) >= 0 )
    {
      *(_QWORD *)v36 = 0LL;
      v23 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 536LL))(
              *((_QWORD *)this + 9),
              v36);
      v24 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25A,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v23);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v34);
        CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
        return v24;
      }
      v26 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v34 + 24LL))(*(_QWORD *)v34, v36);
      v27 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v26);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v34);
        CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
        return v27;
      }
    }
    if ( *v9 && *((_QWORD *)this + 22) && *((_QWORD *)this + 24) && *((_QWORD *)this + 23) && *(_QWORD *)v34 )
      break;
    ++v8;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
  for ( i = 0; i < a3; ++i )
  {
    *(_QWORD *)v36 = 0LL;
    if ( wil::try_com_query_to<IAPOWrapperSrv,IAudioProcessingObject * &>(&a4[i], (__int64)v36) )
    {
      if ( *((_QWORD *)this + 27) == *((_QWORD *)this + 28) )
      {
        std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
          (_QWORD *)this + 26,
          *((_QWORD *)this + 27),
          (__int64 *)v36);
      }
      else
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
          *((__int64 **)this + 27),
          (__int64 *)v36);
        *((_QWORD *)this + 27) += 8LL;
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v36);
  }
  if ( *((_BYTE *)this + 41) )
    goto LABEL_63;
  v29 = *v9;
  if ( !*v9 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x277,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004002LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v34);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return 2147500034LL;
  }
  if ( !*((_QWORD *)this + 22) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x278,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004002LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v34);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return 2147500034LL;
  }
  v36[0] = 0;
  v30 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 40LL))(v29, v36);
  v31 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v30);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v34);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return v31;
  }
  v32 = CAudioStream::InitializeVolumeCoefficientCount(this, v36[0]);
  v33 = v32;
  if ( v32 >= 0 )
  {
LABEL_63:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v34);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v32);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v34);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return v33;
  }
}
