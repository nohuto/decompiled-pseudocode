/*
 * XREFs of ?OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ @ 0x180047054
 * Callers:
 *     wistd::__function::__func__lambda_aaad54b922abc5e442df18eef91493fd__void___cdecl(unsigned_short_const___unsigned___int64)_::operator() @ 0x1800C5240 (wistd--__function--__func__lambda_aaad54b922abc5e442df18eef91493fd__void___cdecl(unsigned_short_.c)
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800471A0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     std::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void_::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void___lambda_6df2cf51e0961803ba69b59cc0e43997__0_ @ 0x1800B08D8 (std--_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void_--_Func_impl_no_alloc__l.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAudioRenderEndpointChangeDelegator::OnActiveRenderEndpointChanged(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *i; // rdi
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rbx
  struct CSerialWorkQueue *SerialWorkQueue; // r14
  int v9; // eax
  int v10; // [rsp+20h] [rbp-50h]
  __int64 v11[7]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  const char *v14; // [rsp+A0h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+A8h] [rbp+38h]
  const char *v16; // [rsp+B0h] [rbp+40h]

  v2 = this + 1;
  EnterCriticalSection(this + 1);
  v15 = v2;
  for ( i = &this[2].DebugInfo->Type; i; i = (_QWORD *)*i )
  {
    v7 = (const char *)i[1];
    v16 = v7;
    if ( v7 )
      (*(void (__fastcall **)(const char *))(*(_QWORD *)v7 + 8LL))(v7);
    SerialWorkQueue = GetSerialWorkQueue();
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(const char *))(*(_QWORD *)v7 + 8LL))(v7);
    v12 = 0LL;
    v12 = std::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void_::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void___lambda_6df2cf51e0961803ba69b59cc0e43997__0_(
            v11,
            &v14);
    v9 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, v11);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEAE,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v9,
        v10);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
    if ( v7 )
      (*(void (__fastcall **)(const char *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v4 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*(_DWORD *)(v4 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x200LL) == *(_QWORD *)(v4 + 24) )
  {
    v14 = "ActiveRenderEndpointChanged";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v4,
      (unsigned int)&unk_1801A2CC0,
      v5,
      v6,
      (__int64)&v14);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
