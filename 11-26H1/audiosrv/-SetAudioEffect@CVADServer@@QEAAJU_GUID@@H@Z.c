/*
 * XREFs of ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x180113690
 * Callers:
 *     AudioServerSetAudioEffect @ 0x180116980 (AudioServerSetAudioEffect.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004E974 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_t_ea_18004E974.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800D54F8 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVADServer::SetAudioEffect(CVADServer *this, struct _GUID *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  struct AudioSrvTelemetryProvider *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v15; // [rsp+40h] [rbp-29h] BYREF
  struct _GUID *v16; // [rsp+48h] [rbp-21h] BYREF
  const wchar_t *v17; // [rsp+50h] [rbp-19h] BYREF
  struct _GUID v18; // [rsp+60h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+70h] [rbp+7h] BYREF
  __int128 v20; // [rsp+78h] [rbp+Fh]
  __int128 v21; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v20 = *((_OWORD *)this + 16);
  v21 = v20;
  EtwEventActivityIdControl(4LL, &v21);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  if ( *((_DWORD *)this + 77) == 3 )
  {
    v6 = -2004287422;
    v7 = 2344LL;
LABEL_6:
    v8 = v6;
    goto LABEL_7;
  }
  if ( !*((_QWORD *)this + 22) )
  {
    v7 = 2345LL;
LABEL_5:
    v6 = -2004287487;
    goto LABEL_6;
  }
  if ( !*((_DWORD *)this + 40) )
  {
    v7 = 2346LL;
    goto LABEL_5;
  }
  v9 = AudioSrvTelemetryProvider::Instance();
  v10 = (_DWORD *)*((_QWORD *)v9 + 1);
  if ( *v10 > 4u && tlgKeywordOn(*((_QWORD *)v9 + 1), 512LL) )
  {
    v15 = a3;
    v16 = a2;
    v17 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL) + 64LL))(*((_QWORD *)this + 18) + 8LL);
    *(_QWORD *)&v18.Data1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 22) + 8LL) + 80LL))(*((_QWORD *)this + 22) + 8LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (int)v10,
      (int)&unk_1801A78AB,
      v11,
      v12,
      (__int64)&v18,
      &v17,
      (__int64 *)&v16,
      (__int64)&v15);
  }
  v18 = *a2;
  v13 = CAudioStream::SetAudioEffect(*((CAudioStream **)this + 22), &v18, a3);
  v6 = v13;
  if ( v13 >= 0 )
  {
    v6 = 0;
    goto LABEL_16;
  }
  v8 = (unsigned int)v13;
  v7 = 2357LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v8);
LABEL_16:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  EtwEventActivityIdControl(4LL, &v21);
  return v6;
}
