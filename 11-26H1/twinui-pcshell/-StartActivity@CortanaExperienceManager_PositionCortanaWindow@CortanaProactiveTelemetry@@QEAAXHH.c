/*
 * XREFs of ?StartActivity@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHH@Z @ 0x1803CD078
 * Callers:
 *     ??$Start@AEAHAEAH@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@SA?AV01@AEAH0@Z @ 0x1803C6C5C (--$Start@AEAHAEAH@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@SA-A.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x180014980 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800FB040 (-Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18037945C (-zInternalStart@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::StartActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int a2,
        int a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rbp
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const GUID *v10; // rcx
  DWORD v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12[4]; // [rsp+48h] [rbp-20h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v7 = CortanaProactiveLogging::Provider(v6);
  if ( *(_DWORD *)v7 > 5u )
  {
    v13 = a3;
    v14 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v9 = *((_QWORD *)this + 34);
    v11 = CurrentThreadId;
    v12[0] = 0x1000000LL;
    if ( !*(_BYTE *)(v9 + 4) || _tlgGuidIsZero((const struct _GUID *)(v9 + 24)) )
      v10 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_1807FE483,
      (const GUID *)(v9 + 8),
      v10,
      (__int64)v12,
      (__int64)&v11,
      (__int64)&v14,
      (__int64)&v13);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
