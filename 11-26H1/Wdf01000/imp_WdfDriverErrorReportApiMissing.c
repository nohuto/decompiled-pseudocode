/*
 * XREFs of imp_WdfDriverErrorReportApiMissing @ 0x140093D30
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1400012F4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U?$_tlgWrapSz@G@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6AEBU?$_tlgWrapSz@G@@6@Z @ 0x140001320 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVa.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_sSLSs @ 0x140093A18 (WPP_IFR_SF_sSLSs.c)
 *     ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x140097374 (-FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z.c)
 */

__int64 __fastcall imp_WdfDriverErrorReportApiMissing(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        const wchar_t *FrameworkExtensionName,
        unsigned int ApiIndex,
        unsigned __int8 DoesApiReturnNtstatus)
{
  unsigned __int64 v5; // rsi
  unsigned __int8 v8; // dl
  const _GUID *v9; // r8
  const _GUID *v10; // r9
  char *DriverName; // rax
  _FX_DRIVER_GLOBALS *v12; // rbx
  const wchar_t *v13; // rdi
  const char *v14; // r14
  _WDF_BIND_INFO *WdfBindInfo; // rax
  const _tlgProvider_t *Major; // rcx
  const char *v17; // rax
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-41h]
  _tlgWrapperByVal<4> v20; // [rsp+60h] [rbp-1h] BYREF
  FxDriver *pDriver; // [rsp+68h] [rbp+7h] BYREF
  _tlgWrapSz<unsigned short> v22; // [rsp+70h] [rbp+Fh] BYREF
  _tlgWrapSz<char> v23; // [rsp+78h] [rbp+17h] BYREF
  _tlgWrapperByRef<16> v24; // [rsp+80h] [rbp+1Fh] BYREF
  _tlgWrapperByVal<8> v25; // [rsp+88h] [rbp+27h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+C0h] [rbp+5Fh] BYREF
  _tlgWrapperByVal<4> hProvider; // [rsp+D0h] [rbp+6Fh] BYREF

  v5 = ApiIndex;
  pFxDriverGlobals = 0LL;
  pDriver = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver,
    &pFxDriverGlobals);
  DriverName = DriverGlobals->DriverName;
  v12 = pFxDriverGlobals;
  v13 = L"KMDF";
  if ( FrameworkExtensionName )
    v13 = FrameworkExtensionName;
  v14 = "(Unknown)";
  if ( *DriverName )
    v14 = DriverName;
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
  {
    LODWORD(pFxDriverGlobals) = v5;
    WdfBindInfo = v12->WdfBindInfo;
    v22.Psz = v13;
    hProvider.Value = WdfBindInfo->Version.Minor;
    Major = (const _tlgProvider_t *)v12->WdfBindInfo->Version.Major;
    v23.Psz = v12->Public.DriverName;
    v20.Value = (unsigned int)Major;
    v24.Ptr = v12->TelemetryContext;
    v25.Value = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      Major,
      (char *)&tlgEvent_1._tlgChannel,
      v9,
      v10,
      &v25,
      &v24,
      &v23,
      &v20,
      &hProvider,
      &v22,
      (const _tlgWrapperByVal<4> *)&pFxDriverGlobals);
  }
  v17 = "WDF";
  if ( FrameworkExtensionName )
    v17 = " ";
  WPP_IFR_SF_sSLSs(
    v12,
    v8,
    (unsigned int)v9,
    (unsigned __int16)v10,
    (const _GUID *)ObjectGlobals,
    v14,
    v13,
    v5,
    v13,
    v17);
  if ( !DoesApiReturnNtstatus || v12->FxVerifierOn )
    FxVerifierDriverReportedBugcheck(v12, 0x10Du, 0x10uLL, (unsigned __int64)v14, (unsigned __int64)v13, v5);
  return 3221225594LL;
}
