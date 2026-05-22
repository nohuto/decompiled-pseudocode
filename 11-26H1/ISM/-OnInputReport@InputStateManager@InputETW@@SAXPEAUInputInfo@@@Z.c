/*
 * XREFs of ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180021FB0
 * Callers:
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180021D50 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180012278 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180022220 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     atexit @ 0x18009A4BC (atexit.c)
 */

void __fastcall InputETW::InputStateManager::OnInputReport(struct InputInfo *a1)
{
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax
  int v4; // r9d
  __int64 v5; // [rsp+40h] [rbp-10h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp+28h] BYREF
  LPVOID Context; // [rsp+80h] [rbp+30h] BYREF
  __int64 v8; // [rsp+88h] [rbp+38h] BYREF

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_180254858 = 0LL;
    Context = &qword_180254850;
    qword_180254850 = &RawInputProvidersContinuousTracing::`vftable';
    byte_180254860 = 0;
    dword_180254864 = 0;
    qword_180254868 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180254850, qword_180254868, 0LL);
    InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_180254850);
  }
  v2 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    v3 = InputETW::Provider();
    if ( *(_DWORD *)v3 > 5u && (*((_BYTE *)v3 + 16) & 1) != 0 && (*((_QWORD *)v3 + 3) & 1LL) == *((_QWORD *)v3 + 3) )
    {
      Context = (LPVOID)*((_QWORD *)a1 + 2);
      fPending = *((_DWORD *)a1 + 2);
      v8 = *(int *)a1;
      v5 = *((unsigned int *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (_DWORD)v3,
        (unsigned int)&unk_180214DEB,
        (_DWORD)v3,
        v4,
        (__int64)&v5,
        (__int64)&v8,
        (__int64)&fPending,
        (__int64)&Context);
    }
  }
}
