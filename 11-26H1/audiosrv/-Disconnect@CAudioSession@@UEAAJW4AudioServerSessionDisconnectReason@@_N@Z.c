/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800494A0
 * Callers:
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180049440 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CDE50 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180013780 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800149BC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001AE10 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800371DC (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x180049784 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ??$_Insert_counted_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180049934 (--$_Insert_counted_range@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180049B60 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  struct AudioSrvTelemetryProvider *v5; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  const char *v9; // r9
  enum AudioSessionDisconnectReason v10; // edi
  __int128 *v11; // rcx
  __int64 *v12; // r12
  __int64 v13; // r15
  unsigned int v14; // r14d
  __int64 result; // rax
  __int64 *v16; // rax
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  __int128 v21; // [rsp+38h] [rbp-70h] BYREF
  __int64 v22; // [rsp+48h] [rbp-60h]
  void (__fastcall **v23[2])(_QWORD, void **); // [rsp+50h] [rbp-58h] BYREF
  int v24; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 *v26; // [rsp+B0h] [rbp+8h] BYREF
  int v27; // [rsp+B8h] [rbp+10h] BYREF
  char v28; // [rsp+C0h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+C8h] [rbp+20h] BYREF

  v28 = a3;
  v5 = AudioSrvTelemetryProvider::Instance();
  try
  {
    v8 = *((_QWORD *)v5 + 1);
    if ( *(_DWORD *)v8 > 4u
      && (*(_DWORD *)(v8 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v8 + 24) & 0x200LL) == *(_QWORD *)(v8 + 24) )
    {
      v27 = a2;
      v26 = *(__int64 **)(a1 + 656);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned int)&unk_1801A44F1,
        v6,
        v7,
        (__int64)&v26,
        (__int64)&v27);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
    v29 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
    v10 = DisconnectReasonExclusiveModeOverride;
    v11 = (__int128 *)(a1 + 112);
    if ( a2 != 5 )
      goto LABEL_4;
    if ( *(_QWORD *)(a1 + 112) == *(_QWORD *)(a1 + 120) )
    {
      if ( a1 != -64 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
      result = 0LL;
    }
    else
    {
      if ( !*(_BYTE *)(**(_QWORD **)v11 + 40LL) )
      {
LABEL_4:
        v21 = 0LL;
        v22 = 0LL;
        v26 = 0LL;
        v12 = 0LL;
        v13 = 0LL;
        if ( v11 != &v21 )
        {
          v12 = *(__int64 **)v11;
          *(_QWORD *)v11 = 0LL;
          *(_QWORD *)&v21 = v12;
          v26 = *(__int64 **)(a1 + 120);
          v16 = v26;
          *(_QWORD *)(a1 + 120) = 0LL;
          *((_QWORD *)&v21 + 1) = v16;
          v13 = *(_QWORD *)(a1 + 128);
          *(_QWORD *)(a1 + 128) = 0LL;
          v22 = v13;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Insert_counted_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
          a1 + 176,
          *(_QWORD *)(a1 + 184),
          v21,
          (__int64)((__int64)v26 - v21) >> 3);
        if ( a1 != -136 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
        if ( v12 )
        {
          std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(v12, v26);
          std::_Deallocate<16>(v12, (struct std::nothrow_t *)((v13 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        if ( a1 != -64 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
        v14 = CAudioSession::DisconnectStreamList((CAudioSession *)a1);
        if ( !*(_DWORD *)(a1 + 336) )
          CAudioSession::PostStateCheckExpirationWork((CAudioSession *)a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v23[0] = (void (__fastcall **)(_QWORD, void **))&CAudioSessionDisconnected::`vftable';
        v23[1] = (void (__fastcall **)(_QWORD, void **))a1;
        v24 = a2;
        CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
          (LPCRITICAL_SECTION)(a1 + 432),
          v23);
        if ( !v28 )
          goto LABEL_15;
        if ( !a2 )
        {
          v10 = DisconnectReasonDeviceRemoval;
          goto LABEL_36;
        }
        v17 = a2 - 1;
        if ( !v17 )
          goto LABEL_31;
        v18 = v17 - 1;
        if ( !v18 )
        {
          v10 = DisconnectReasonFormatChanged;
          goto LABEL_36;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          v10 = DisconnectReasonSessionLogoff;
          goto LABEL_36;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v10 = DisconnectReasonSessionDisconnected;
          goto LABEL_36;
        }
        if ( v20 != 1 )
LABEL_31:
          v10 = DisconnectReasonServerShutdown;
LABEL_36:
        CAudioSession::NotifyClientOfDisconnection((CAudioSession *)a1, v10);
LABEL_15:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        return v14;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v29);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x96D,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v9);
  }
  return result;
}
