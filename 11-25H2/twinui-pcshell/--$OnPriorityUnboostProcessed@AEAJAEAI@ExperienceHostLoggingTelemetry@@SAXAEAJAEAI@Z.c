/*
 * XREFs of ??$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x1800130C4
 * Callers:
 *     ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x180012F80 (-UnboostPriority@PriorityBoostHelper@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180012D84 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?get@?$static_lazy@VExperienceHostLogging@@@details@wil@@QEAAPEAVExperienceHostLogging@@P6AXXZ@Z @ 0x180013140 (-get@-$static_lazy@VExperienceHostLogging@@@details@wil@@QEAAPEAVExperienceHostLogging@@P6AXXZ@Z.c)
 */

int __fastcall ExperienceHostLoggingTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(int *a1, int *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  _DWORD *v6; // rcx
  __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<ExperienceHostLogging>::get(
         a1,
         _lambda_85ce8dc69fb31a5df73cef2b402bbb84_::_lambda_invoker_cdecl_);
  v6 = *(_DWORD **)(v4 + 8);
  if ( *v6 > 5u )
  {
    v9 = *a2;
    v10 = *a1;
    v8[0] = 0x1000000LL;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (__int64)v6,
                    byte_1807C8F88,
                    0LL,
                    v5,
                    (__int64)&v10,
                    (__int64)&v9,
                    (__int64)v8);
  }
  return v4;
}
