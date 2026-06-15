/*
 * XREFs of ?PreStartStream@CVADServer@@UEAAJXZ @ 0x180112E40
 * Callers:
 *     AudioServerPreStartStream @ 0x1801163E0 (AudioServerPreStartStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005A59C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::PreStartStream(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v3; // rdi
  __int64 *v4; // r14
  int (__fastcall *v5)(__int64, __int64 *); // rbx
  struct AudioSrvTelemetryProvider *v6; // rax
  _DWORD *v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 (__fastcall *v17)(struct IAudioPolicyManager *, __int64, char *); // rbx
  int v18; // eax
  int v20[2]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  int v22; // [rsp+90h] [rbp+38h] BYREF
  __int64 v23; // [rsp+98h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+A0h] [rbp+48h] BYREF
  const wchar_t *v25; // [rsp+A8h] [rbp+50h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v3 = *((_QWORD *)this + 22);
  v4 = (__int64 *)((char *)this + 144);
  v24 = v1;
  v23 = 0LL;
  if ( v3 )
  {
    if ( *v4 )
    {
      v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v3 + 8) + 24LL);
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v23);
      if ( v5(v3 + 8, &v23) >= 0 )
      {
        v6 = AudioSrvTelemetryProvider::Instance();
        v7 = (_DWORD *)*((_QWORD *)v6 + 1);
        if ( *v7 > 4u && tlgKeywordOn(*((_QWORD *)v6 + 1), 512LL) )
        {
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
          v9 = *v4;
          v22 = v8;
          v10 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 64LL))(v9 + 8);
          v11 = *((_QWORD *)this + 22);
          v25 = v10;
          *(_QWORD *)v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 80LL))(v11 + 8);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            (__int64)v7,
            byte_1801A7A2E,
            v12,
            v13,
            (__int64)v20,
            &v25,
            (__int64)&v22);
        }
      }
    }
  }
  if ( *((_DWORD *)this + 40) )
  {
    if ( *v4 )
    {
      if ( *((_QWORD *)this + 22) )
      {
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 65);
        v17 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, char *))(*(_QWORD *)g_PolicyManager
                                                                                      + 224LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 65);
        v18 = v17(
                g_PolicyManager,
                (*((_QWORD *)this + 22) + 8LL) & -(__int64)(*((_QWORD *)this + 22) != 0LL),
                (char *)this + 520);
        v14 = v18;
        if ( v18 >= 0 )
        {
          v14 = 0;
          goto LABEL_17;
        }
        v16 = (unsigned int)v18;
        v15 = 1724LL;
      }
      else
      {
        v14 = -2004287487;
        v15 = 1718LL;
        v16 = 2290679809LL;
      }
    }
    else
    {
      v14 = -2004287487;
      v15 = 1717LL;
      v16 = 2290679809LL;
    }
  }
  else
  {
    v14 = -2004287487;
    v15 = 1716LL;
    v16 = 2290679809LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v16);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v24);
  return v14;
}
