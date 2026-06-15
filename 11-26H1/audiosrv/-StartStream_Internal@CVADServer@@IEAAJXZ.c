/*
 * XREFs of ?StartStream_Internal@CVADServer@@IEAAJXZ @ 0x18005A40C
 * Callers:
 *     ?RestoreClientStartedStreams@CVADServer@@QEAAJXZ @ 0x180113410 (-RestoreClientStartedStreams@CVADServer@@QEAAJXZ.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180114220 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005A59C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x18005A6BC (-AcquirePowerReference@CVADServer@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVADServer::StartStream_Internal(CVADServer *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_DWORD *)this + 42) != 1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 224LL))(
           *((_QWORD *)this + 18),
           *((_QWORD *)this + 22));
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x683,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    *((_DWORD *)this + 42) = 1;
    *((_BYTE *)this + 184) = 0;
    CVADServer::AcquirePowerReference(this);
    v12 = 0LL;
    v5 = (__int64 *)(*((_QWORD *)this + 22) + 8LL);
    v6 = *v5;
    v12 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v6 + 24))(v5, &v12) >= 0 )
    {
      v7 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *(_DWORD *)v7 > 4u
        && (*(_DWORD *)(v7 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v7 + 24) & 0x200LL) == *(_QWORD *)(v7 + 24) )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL) + 64LL))(*((_QWORD *)this + 18) + 8LL);
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 22) + 8LL) + 80LL))(*((_QWORD *)this + 22) + 8LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v7,
          (unsigned int)&unk_1801A7A7B,
          v8,
          v9,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v11);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
      IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
