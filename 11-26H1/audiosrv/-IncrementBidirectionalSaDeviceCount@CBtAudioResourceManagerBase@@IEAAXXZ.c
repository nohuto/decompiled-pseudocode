/*
 * XREFs of ?IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E4510
 * Callers:
 *     ?OnSaDeviceCreation@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800E4A90 (-OnSaDeviceCreation@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x180002784 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E4868 (-NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBtAudioResourceManagerBase::IncrementBidirectionalSaDeviceCount(CBtAudioResourceManagerBase *this)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  _DWORD *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  const wchar_t *v7; // [rsp+40h] [rbp+8h] BYREF
  const wchar_t *v8; // [rsp+48h] [rbp+10h] BYREF
  char *v9; // [rsp+50h] [rbp+18h]

  v2 = (CBtAudioResourceManagerBase *)((char *)this + 528);
  v9 = (char *)this + 528;
  std::_Mutex_base::lock((CBtAudioResourceManagerBase *)((char *)this + 528));
  if ( ++*((_DWORD *)this + 152) == 1 )
  {
    v3 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 0x4000LL) )
    {
      v7 = (const wchar_t *)*((_QWORD *)this + 8);
      v8 = (const wchar_t *)*((_QWORD *)this + 7);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v4,
        (int)&unk_1801A509E,
        v5,
        v6,
        &v8,
        &v7);
    }
    CBtAudioResourceManagerBase::NotifyBidirectionalModeChanged(this);
  }
  _Mtx_unlock(v2);
}
