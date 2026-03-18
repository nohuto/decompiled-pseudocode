/*
 * XREFs of ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180093A80
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180093290 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x180112BF4 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801A9100 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180093EA0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1801AA73C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

InputTraceLogging::PerfRegion *__fastcall InputTraceLogging::PerfRegion::PerfRegion(
        InputTraceLogging::PerfRegion *this,
        const char *a2,
        const struct InputTraceLogging::PerfRegion *a3)
{
  _OWORD *v3; // rax
  __int128 v5; // xmm0
  __int64 v6; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = a2;
  v3 = (_OWORD *)((char *)this + 32);
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( a3 )
  {
    v5 = *((_OWORD *)a3 + 1);
    *((_QWORD *)this + 6) = v3;
    *v3 = v5;
  }
  v6 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get() + 8);
  if ( *(_DWORD *)v6 > 6u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
  {
    *(_BYTE *)this = 1;
    EventActivityIdControl(3u, (LPGUID)this + 1);
    v8 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v8 > 6u && (*((_BYTE *)v8 + 16) & 1) != 0 && (*((_QWORD *)v8 + 3) & 1LL) == *((_QWORD *)v8 + 3) )
    {
      v9 = *((_QWORD *)this + 6);
      v10 = *((_QWORD *)this + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (_DWORD)v8,
        (unsigned int)&unk_1803AF7CA,
        (_DWORD)this + 16,
        v9,
        (__int64)&v10);
    }
  }
  return this;
}
