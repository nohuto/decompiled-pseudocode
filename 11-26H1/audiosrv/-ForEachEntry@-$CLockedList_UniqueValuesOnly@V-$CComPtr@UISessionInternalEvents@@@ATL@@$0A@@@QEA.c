/*
 * XREFs of ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180013780
 * Callers:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015E40 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001C520 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180023F90 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180041710 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800494A0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x180049784 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18006D4D0 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180070D90 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18007E0B0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     _lambda_bcf9c58b74ebdaae84df57cea6a1304a_::operator() @ 0x1800CD640 (_lambda_bcf9c58b74ebdaae84df57cea6a1304a_--operator().c)
 *     ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800CF540 (-SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800139B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180013B50 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@0@@Z @ 0x180013B7C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISess.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180013CA8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Copy_n_unchecked4@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@_KPEAU12@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@PEAU12@_K0@Z @ 0x1800CD050 (--$_Copy_n_unchecked4@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, void **))
{
  unsigned __int64 v4; // r12
  const char *v5; // r9
  __int64 v6; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  unsigned __int64 v8; // rsi
  __int64 size_of; // rax
  _QWORD **v10; // r13
  _QWORD *v11; // rdi
  _QWORD **i; // rsi
  void (__fastcall *v13)(_QWORD, void **); // r14
  _QWORD *v14; // rcx
  _QWORD *j; // rbx
  const struct std::nothrow_t *v16; // r12
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v18 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v21 = lpCriticalSection;
    v6 = 0LL;
    if ( &v18 == (__int128 *)&lpCriticalSection[1] )
    {
      v11 = (_QWORD *)*((_QWORD *)&v18 + 1);
    }
    else
    {
      DebugInfo = lpCriticalSection[1].DebugInfo;
      v8 = (__int64)(*(_QWORD *)&lpCriticalSection[1].LockCount - (_QWORD)DebugInfo) >> 4;
      if ( v8 )
      {
        if ( v8 > 0xFFFFFFFFFFFFFFFLL )
          std::_Xlength_error("vector too long");
        size_of = std::_Get_size_of_n<16>(v8);
        v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
        v10 = (_QWORD **)v6;
        *(_QWORD *)&v18 = v6;
        v4 = v6 + 16 * v8;
        v19 = v4;
        do
        {
          ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
            v6,
            *(_QWORD *)&DebugInfo->Type);
          *(_DWORD *)(v6 + 8) = DebugInfo->CriticalSection;
          v6 += 16LL;
          DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 16);
          --v8;
        }
        while ( v8 );
        std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
          v6,
          v6);
        v11 = (_QWORD *)v6;
        *((_QWORD *)&v18 + 1) = v6;
        goto LABEL_8;
      }
      v6 = 0LL;
      std::_Copy_n_unchecked4<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry *,unsigned __int64,CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry *>(
        DebugInfo,
        0LL,
        0LL);
      std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
        0LL,
        0LL);
      v11 = 0LL;
      *((_QWORD *)&v18 + 1) = 0LL;
    }
    v10 = (_QWORD **)v18;
LABEL_8:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    for ( i = v10; i != (_QWORD **)v6; i += 2 )
    {
      v13 = **a2;
      v14 = *i;
      v21 = v14;
      if ( v14 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 8LL))(v14, *v14);
      v13(a2, &v21);
    }
    if ( v10 )
    {
      for ( j = v10; j != v11; j += 2 )
      {
        if ( *j )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 16LL))(*j);
      }
      v16 = (const struct std::nothrow_t *)((v4 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
      v22 = (unsigned __int64)v16;
      v21 = v10;
      if ( (unsigned __int64)v16 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v21, &v22);
        v10 = (_QWORD **)v21;
        v16 = (const struct std::nothrow_t *)v22;
      }
      operator delete(v10, v16);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xC7,
                     (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                     v5);
    return (unsigned int)v21;
  }
  return result;
}
