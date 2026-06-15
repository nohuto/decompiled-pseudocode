/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180023F90
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180023680 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180024F60 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180013780 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180022E2C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800259E8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180025A18 (--$_Emplace_reallocate@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct CAudioStream *a2)
{
  _QWORD *v4; // rdx
  struct CAudioStream *v5; // rcx
  char *v6; // rsi
  __int64 v7; // rax
  int updated; // eax
  void *v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+20h] [rbp-48h]
  void (__fastcall **v13[7])(_QWORD, void **); // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  struct CAudioStream *v16; // [rsp+88h] [rbp+20h] BYREF

  try
  {
    (*(void (**)(void))(*(_QWORD *)g_PolicyManager + 184LL))();
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v16 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = (_QWORD *)*((_QWORD *)this + 15);
    if ( v4 == *((_QWORD **)this + 16) )
    {
      std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>(
        (char *)this + 112,
        v4,
        &v16);
      v5 = v16;
    }
    else
    {
      v5 = 0LL;
      *v4 = a2;
      *((_QWORD *)this + 15) += 8LL;
    }
    if ( v5 )
      (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = (char *)a2 + 8;
    v7 = *((_QWORD *)a2 + 1);
    v15 = 0LL;
    (*(void (__fastcall **)(char *, __int64 *))(v7 + 24))((char *)a2 + 8, &v15);
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 96LL))(v15) && *((_DWORD *)a2 + 100) == 3 )
      *((_DWORD *)this + 102) = 1;
    if ( g_DuckingManager
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 96LL))(v15)
      && *((_DWORD *)this + 102)
      && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v6 + 56LL))((char *)a2 + 8) != 2 )
    {
      *((_DWORD *)a2 + 100) = 3;
    }
    if ( !(*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v6 + 56LL))((char *)a2 + 8)
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 352LL))(v15) )
    {
      *((_DWORD *)a2 + 100) = 19;
    }
    ++*((_DWORD *)this + 26);
    updated = CAudioStream::UpdateStreamPriority(a2);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA7D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)updated,
        (int)lpCriticalSection);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( this != (CAudioSession *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v13[0] = (void (__fastcall **)(_QWORD, void **))&CAudioStreamCreate::`vftable';
    v13[1] = (void (__fastcall **)(_QWORD, void **))this;
    v13[2] = (void (__fastcall **)(_QWORD, void **))a2;
    CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
      (LPCRITICAL_SECTION)((char *)this + 432),
      v13);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    wil::details::SetEvent(*((wil::details **)a2 + 48), v9);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v15) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xA97,
                     (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                     v10);
    return (unsigned int)v15;
  }
  return result;
}
