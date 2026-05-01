/*
 * XREFs of ??$SnapBar_HitTestSystemArrangementArea@AEAMAEAM_N@WindowDragInputProviderTelemetry@@SAXAEAM0$$QEA_N@Z @ 0x1802BE2AC
 * Callers:
 *     ?HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18026B630 (-HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18007E4BC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

int __fastcall WindowDragInputProviderTelemetry::SnapBar_HitTestSystemArrangementArea<float &,float &,bool>(
        int *a1,
        int *a2,
        _BYTE *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // xmm1_4
  int v11; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v12[5]; // [rsp+44h] [rbp-14h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v6 = WindowManagementLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v7) = *a3;
    v9 = *a1;
    v11 = *a2;
    v12[0] = v9;
    v13 = v7;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                    (__int64)v6,
                    byte_180824C83,
                    v7,
                    v8,
                    (__int64)v12,
                    (__int64)&v11,
                    (__int64)&v13);
  }
  return (int)v6;
}
