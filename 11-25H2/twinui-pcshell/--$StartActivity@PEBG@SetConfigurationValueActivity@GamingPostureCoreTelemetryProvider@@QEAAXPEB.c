/*
 * XREFs of ??$StartActivity@PEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG0@Z @ 0x180334C90
 * Callers:
 *     ??$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG$$QEAPEBG@Z @ 0x180334B70 (--$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@A.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5@Z @ 0x180012B84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@@-$_tlgWriteTempl.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180018878 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18032EF2C (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18033787C (-zInternalStart@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<unsigned short const *>(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rbp
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const GUID *v10; // rcx
  const WCHAR *v11; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-20h] BYREF
  DWORD v13; // [rsp+70h] [rbp+8h] BYREF
  const WCHAR *v14; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = GamingPostureCoreTelemetryProvider::Provider(v6);
  if ( *(_DWORD *)v7 > 5u )
  {
    v14 = a3;
    v11 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v9 = *(_QWORD *)(a1 + 272);
    v12[0] = 0LL;
    v13 = CurrentThreadId;
    if ( !*(_BYTE *)(v9 + 4) || _tlgGuidIsZero((const struct _GUID *)(v9 + 24)) )
      v10 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      (__int64)v7,
      byte_1807BC8B4,
      (const GUID *)(v9 + 8),
      v10,
      (__int64)v12,
      (__int64)&v13,
      &v11,
      &v14);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
