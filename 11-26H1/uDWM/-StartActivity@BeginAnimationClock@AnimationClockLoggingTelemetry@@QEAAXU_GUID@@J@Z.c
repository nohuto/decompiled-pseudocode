/*
 * XREFs of ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180041208
 * Callers:
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180040D60 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180025070 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025138 (-EnsureWatchingCurrentThread@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflecto.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002515C (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x1800412E0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlg.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18008D328 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall AnimationClockLoggingTelemetry::BeginAnimationClock::StartActivity(
        AnimationClockLoggingTelemetry::BeginAnimationClock *this,
        struct _GUID *a2,
        int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rbp
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  int v12; // ecx
  DWORD v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  struct _GUID *v15; // [rsp+50h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-10h] BYREF

  v3 = a3;
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = (_DWORD *)wil::details::static_lazy<AnimationClockLogging>::get(v7, v6)[1];
  if ( *v9 > 4u )
  {
    v14 = v3;
    v15 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v11 = *((_QWORD *)this + 34);
    v13 = CurrentThreadId;
    v16 = 0LL;
    if ( !*(_BYTE *)(v11 + 4) || _tlgGuidIsZero((const struct _GUID *)(v11 + 24)) )
      v12 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
      (_DWORD)v9,
      (unsigned int)&unk_1800FECCA,
      v11 + 8,
      v12,
      (__int64)&v16,
      (__int64)&v13,
      (__int64)&v15,
      (__int64)&v14);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(
    (__int64)this,
    v8);
}
