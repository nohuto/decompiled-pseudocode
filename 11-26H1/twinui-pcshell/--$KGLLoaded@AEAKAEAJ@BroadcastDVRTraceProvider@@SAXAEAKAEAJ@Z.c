/*
 * XREFs of ??$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z @ 0x1801F8D7C
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x180125910 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     wil::details::ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___::_ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___ @ 0x1802C2100 (wil--details--ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___--_ScopeExitFn__lambda_d87a.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180097A14 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@P6AXXZ@Z @ 0x1801F8E4C (-get@-$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@.c)
 */

char __fastcall BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>(int *a1, int *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<BroadcastDVRTraceProvider>::get(
         a1,
         _lambda_834c0077cad59c9dc0a3a987d1005045_::_lambda_invoker_cdecl_);
  v5 = *(_DWORD **)(v4 + 8);
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v9 = *a2;
      v10 = *a1;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v6,
                     byte_1807E8975,
                     0LL,
                     v7,
                     (__int64)&v10,
                     (__int64)&v9);
    }
  }
  return v4;
}
