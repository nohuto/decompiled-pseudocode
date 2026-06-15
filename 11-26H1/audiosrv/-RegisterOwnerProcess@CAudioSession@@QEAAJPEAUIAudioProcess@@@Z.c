/*
 * XREFs of ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x180049260
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180025A18 (--$_Emplace_reallocate@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180049B60 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSession::RegisterOwnerProcess(CAudioSession *this, struct IAudioProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  int v4; // eax
  unsigned int v5; // edi
  const char *v6; // r9
  __int64 result; // rax
  struct IAudioProcess *v8; // rsi
  struct IAudioProcess **v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // r8d
  int v13; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IAudioProcess *v15; // [rsp+70h] [rbp+8h] BYREF
  struct IAudioProcess *v16; // [rsp+78h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+80h] [rbp+18h] BYREF

  v16 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  v17 = v3;
  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)v16 + 24LL))();
    v5 = v4;
    if ( v4 >= 0 )
    {
      v8 = v16;
      v15 = v16;
      if ( v16 )
        (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 8LL))(v16);
      v9 = (struct IAudioProcess **)*((_QWORD *)this + 89);
      if ( v9 == *((struct IAudioProcess ***)this + 90) )
      {
        std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>(
          (_QWORD *)this + 88,
          (__int64)v9,
          (__int64 *)&v15);
        v10 = (__int64)v15;
      }
      else
      {
        v10 = 0LL;
        *v9 = v8;
        *((_QWORD *)this + 89) += 8LL;
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( *((_BYTE *)this + 728) )
        *((_BYTE *)this + 728) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 96LL))(v16) != 0;
      v11 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *(_DWORD *)v11 > 4u
        && (*(_DWORD *)(v11 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v11 + 24) & 0x200LL) == *(_QWORD *)(v11 + 24) )
      {
        LODWORD(v15) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 40LL))(v16);
        v17 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 82);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v11,
          (unsigned int)&unk_1801A453C,
          v12,
          v13,
          (__int64)&v17,
          (__int64)&v15);
      }
      if ( v3 )
        LeaveCriticalSection(v3);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v4);
      if ( v3 )
        LeaveCriticalSection(v3);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x778,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v6);
  }
  return result;
}
