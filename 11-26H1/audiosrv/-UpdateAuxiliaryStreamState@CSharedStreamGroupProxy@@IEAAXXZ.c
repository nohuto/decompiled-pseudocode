/*
 * XREFs of ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18005BB34
 * Callers:
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x18005ADF0 (-StopStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x18005B730 (-StartStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18005BAE0 (-OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18005BB10 (-OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005BCD4 (-OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnConnectedToStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005C130 (-OnConnectedToStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@@PEBG@Z @ 0x1800FA620 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007CC50 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_18007CC50.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSharedStreamGroupProxy::UpdateAuxiliaryStreamState(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _DWORD *v3; // rcx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  void *v7; // rdx
  _DWORD *v8; // rcx
  struct _RTL_CRITICAL_SECTION *OwningThread; // [rsp+30h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 1776);
  EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 1776));
  OwningThread = v2;
  if ( !*(_QWORD *)&this[44].LockCount )
    goto LABEL_13;
  EnterCriticalSection(this + 10);
  v10 = this + 10;
  v11 = *(_OWORD *)&this[43].LockSemaphore;
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  if ( LODWORD(this[9].SpinCount) )
  {
    if ( LOBYTE(this[11].DebugInfo) )
      goto LABEL_12;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&this[44].LockCount + 32LL))(*(_QWORD *)&this[44].LockCount);
    LOBYTE(this[11].DebugInfo) = 1;
    v3 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v3 <= 4u || !tlgKeywordOn((__int64)v3, 512LL) )
      goto LABEL_12;
    v7 = &unk_1801A6B64;
  }
  else
  {
    if ( !LOBYTE(this[11].DebugInfo) )
      goto LABEL_12;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&this[44].LockCount + 40LL))(*(_QWORD *)&this[44].LockCount);
    LOBYTE(this[11].DebugInfo) = 0;
    v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v8 <= 4u || !tlgKeywordOn((__int64)v8, 512LL) )
      goto LABEL_12;
    v7 = &unk_1801A6B37;
  }
  OwningThread = (struct _RTL_CRITICAL_SECTION *)this[43].OwningThread;
  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
    v4,
    (_DWORD)v7,
    v5,
    v6,
    (__int64)&OwningThread);
LABEL_12:
  EtwEventActivityIdControl(4LL, &v12);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
LABEL_13:
  if ( v2 )
    LeaveCriticalSection(v2);
}
