/*
 * XREFs of ?StartActivity@EM_ShowActivity@ToastCenterTelemetry@@QEAAX_N@Z @ 0x1801E7484
 * Callers:
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801E7318 (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001D63C (-zInternalStart@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001D6FC (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180098E38 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 */

void __fastcall ToastCenterTelemetry::EM_ShowActivity::StartActivity(
        ToastCenterTelemetry::EM_ShowActivity *this,
        char a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  const GUID *v8; // rcx
  char v9; // [rsp+60h] [rbp+8h] BYREF
  DWORD v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v5 = ToastCenterLogging::Provider(v4);
  if ( *(_DWORD *)v5 > 5u )
  {
    v9 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v7 = *((_QWORD *)this + 34);
    v10 = CurrentThreadId;
    v11 = 0LL;
    if ( !*(_BYTE *)(v7 + 4) || _tlgGuidIsZero((const struct _GUID *)(v7 + 24)) )
      v8 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)v5,
      byte_1807F40BE,
      (const GUID *)(v7 + 8),
      v8,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
