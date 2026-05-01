/*
 * XREFs of ??$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@Z @ 0x180334BC8
 * Callers:
 *     _anonymous_namespace_::SetConfigurationValue_unsigned_long_ @ 0x1803348B0 (_anonymous_namespace_--SetConfigurationValue_unsigned_long_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x180001B98 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTempl.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180018878 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18032EF2C (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18033787C (-zInternalStart@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<unsigned long>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rbp
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF
  DWORD v11; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = GamingPostureCoreTelemetryProvider::Provider(v4);
  if ( *(_DWORD *)v5 > 5u )
  {
    v9 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v7 = *(_QWORD *)(a1 + 272);
    v10[0] = 0LL;
    v11 = CurrentThreadId;
    if ( !*(_BYTE *)(v7 + 4) || _tlgGuidIsZero((const struct _GUID *)(v7 + 24)) )
      v8 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v5,
      (__int64)&unk_1807BC84D,
      v7 + 8,
      v8,
      (__int64)v10,
      (__int64)&v11,
      &v9);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
