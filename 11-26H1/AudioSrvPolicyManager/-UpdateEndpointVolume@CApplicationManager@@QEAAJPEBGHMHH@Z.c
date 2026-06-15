/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18003D428
 * Callers:
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x1800429BC (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180042BAC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180026DEC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::UpdateEndpointVolume(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        int a3,
        float a4,
        int a5,
        unsigned int a6)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  const struct _tlgProvider_t *v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  const struct _tlgProvider_t *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  int v25[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  CApplicationManager *v28; // [rsp+70h] [rbp+10h] BYREF

  v28 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v26 = v8;
  v24 = 0LL;
  v9 = *(_QWORD *)g_VolumeProvider;
  v24 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, __int64 *))(v9 + 40))(
          g_VolumeProvider,
          a2,
          &v24);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( !a5 )
      goto LABEL_20;
    v13 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    v14 = a6;
    if ( *(_DWORD *)v13 > 4u && tlgKeywordOn((__int64)v13, 0x20000LL) )
    {
      LODWORD(v28) = v14;
      *(_QWORD *)v25 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v15,
        byte_18005A883,
        v16,
        v17,
        (_BYTE **)v25,
        (__int64)&v28);
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v24 + 144LL))(
            v24,
            v14,
            &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
            0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 2969LL;
    }
    else
    {
LABEL_20:
      if ( !a3 )
        goto LABEL_16;
      v19 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      if ( *(_DWORD *)v19 > 4u && tlgKeywordOn((__int64)v19, 0x20000LL) )
      {
        *(float *)&v28 = a4;
        *(_QWORD *)v25 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v20,
          byte_18005A841,
          v21,
          v22,
          (_BYTE **)v25,
          (__int64)&v28);
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v24 + 56LL))(
              v24,
              v18,
              &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
              0LL);
      v11 = v10;
      if ( v10 >= 0 )
      {
LABEL_16:
        v11 = 0;
        goto LABEL_17;
      }
      v12 = 2982LL;
    }
  }
  else
  {
    v12 = 2957LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
  return v11;
}
