/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18007FE20
 * Callers:
 *     ??$Shell_BroadcastDVRComponent_ProcessCommandTask@AEAIAEAPEBG@GameDVRTraceProvider@@SAXAEAIAEAPEBG@Z @ 0x1800C5B8C (--$Shell_BroadcastDVRComponent_ProcessCommandTask@AEAIAEAPEBG@GameDVRTraceProvider@@SAXAEAIAEAPE.c)
 *     ??$Shell_BroadcastDVRComponent_OnShellHookMessageTask@AEAIAEAPEBG@GameDVRTraceProvider@@SAXAEAIAEAPEBG@Z @ 0x18030EE78 (--$Shell_BroadcastDVRComponent_OnShellHookMessageTask@AEAIAEAPEBG@GameDVRTraceProvider@@SAXAEAIA.c)
 *     ?IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z @ 0x1803165A0 (-IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z.c)
 *     ??$UndockedSearchExperienceManager_SearchActivationResult@AEAJPEBG@SearchAppExperienceManagerTelemetry@@SAXAEAJ$$QEAPEBG@Z @ 0x1803A8180 (--$UndockedSearchExperienceManager_SearchActivationResult@AEAJPEBG@SearchAppExperienceManagerTel.c)
 *     ??$IgnoredDisplaySettingsChange@AEAKAEAY0BB@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAKAEAY0BB@$$CBG@Z @ 0x1804F4264 (--$IgnoredDisplaySettingsChange@AEAKAEAY0BB@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXA.c)
 *     ??$IgnoredDisplaySettingsChange@AEAKAEAY0BC@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAKAEAY0BC@$$CBG@Z @ 0x1804F42C0 (--$IgnoredDisplaySettingsChange@AEAKAEAY0BC@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXA.c)
 *     ??$IgnoredDisplaySettingsChange@AEBKAEAY0BA@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEBKAEAY0BA@$$CBG@Z @ 0x1804F431C (--$IgnoredDisplaySettingsChange@AEBKAEAY0BA@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6)
{
  const WCHAR *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  const WCHAR *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v7 = *a6;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &pvData;
    v9 = 2;
  }
  v15 = v9;
  v14 = v7;
  v12 = a5;
  v13 = 4LL;
  v16 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v11);
}
