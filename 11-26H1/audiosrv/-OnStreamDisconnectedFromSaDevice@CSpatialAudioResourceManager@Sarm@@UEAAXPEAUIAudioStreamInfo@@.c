/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@553@Z @ 0x180004328 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U1@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18005CCB0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x18005CDC4 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082D78 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C2528 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801269C0 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801279C4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 i; // rdx
  __int64 v11; // rsi
  int v12; // r15d
  char v13; // r12
  __int64 v14; // rax
  int v15; // edi
  std::_Ref_count_base *v16; // rcx
  int v17; // eax
  int v18; // [rsp+20h] [rbp-79h]
  __int64 v19; // [rsp+50h] [rbp-49h] BYREF
  int v20; // [rsp+58h] [rbp-41h] BYREF
  int v21; // [rsp+5Ch] [rbp-3Dh] BYREF
  __int64 v22; // [rsp+60h] [rbp-39h] BYREF
  __int128 *v23; // [rsp+68h] [rbp-31h] BYREF
  __int64 v24; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v25[2]; // [rsp+78h] [rbp-21h] BYREF
  int v26; // [rsp+88h] [rbp-11h]
  int v27; // [rsp+8Ch] [rbp-Dh]
  _QWORD *v28; // [rsp+B0h] [rbp+17h]
  __int128 v29; // [rsp+B8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice", 0x17Cu);
  v7 = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2)(
      a2,
      &GUID_04c50d49_105a_4a6b_8af7_0de59e20ce12,
      &v19);
    v8 = v19;
  }
  if ( v8 )
  {
    v5 = (unsigned int)v8 % *((_DWORD *)this + 52);
    v9 = *((_QWORD *)this + 24);
    if ( v9 )
    {
      for ( i = *(_QWORD *)(v9 + 8 * v5); i; i = *(_QWORD *)(i + 104) )
      {
        if ( *(_DWORD *)(i + 112) == (_DWORD)v8 && *(_QWORD *)i == v8 )
        {
          v7 = i + 8;
          break;
        }
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
  {
    v11 = *(_QWORD *)(v7 + 8);
    if ( !v11 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x186,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v6);
    v12 = *(_DWORD *)(v7 + 52);
    if ( (unsigned int)dword_1801D32B0 > 4 )
    {
      v22 = *(_QWORD *)(v7 + 8);
      v20 = v12;
      v21 = *(_DWORD *)(v7 + 80);
      LODWORD(v19) = *(_DWORD *)(v7 + 84);
      v29 = *(_OWORD *)(v7 + 16);
      v23 = &v29;
      v24 = *(_QWORD *)(v7 + 40);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v8,
        (__int64)&unk_1801A7ECF,
        v5,
        (__int64)v6,
        (__int64)&v24,
        (__int64 *)&v23,
        (__int64)&v19,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v22);
    }
    Sarm::CSpatialAudioResourceManager::RemoveStream(this, (struct Sarm::CStreamResource *)v7);
    v13 = *(_BYTE *)(v11 + 8);
    v14 = *(_QWORD *)(v11 + 16);
    if ( !v14 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x8F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
        (const char *)0x887C0100LL,
        v18);
    v15 = *(_DWORD *)(v14 + 20) - *(_DWORD *)(v14 + 24);
    if ( *(_DWORD *)(v11 + 12) )
      goto LABEL_36;
    if ( *(_QWORD *)v11 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 112);
    if ( *((_QWORD *)this + 15) )
    {
LABEL_36:
      if ( *((_QWORD *)this + 25) )
      {
        if ( v13 )
        {
          if ( v15 )
          {
            v25[0] = off_180178328;
            v25[1] = this;
            v26 = v12;
            v27 = HIDWORD(v29);
            v28 = v25;
            v17 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 304));
            if ( v17 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1AF,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (const char *)(unsigned int)v17,
                v18);
          }
        }
      }
    }
    else
    {
      Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
      v16 = qword_1801D7D90;
      qword_1801D7D90 = 0LL;
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
