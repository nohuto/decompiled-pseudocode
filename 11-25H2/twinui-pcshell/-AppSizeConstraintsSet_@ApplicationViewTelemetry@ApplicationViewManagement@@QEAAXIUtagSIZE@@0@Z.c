/*
 * XREFs of ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x18008E134
 * Callers:
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x18008DD08 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 * Callees:
 *     ?Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18003D0FC (-Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18008E1D4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(
        ApplicationViewManagement::ApplicationViewTelemetry *this,
        int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // ebx
  LONG v5; // edi
  const struct _tlgProvider_t *v7; // rax
  int v8; // r8d
  int v9; // r9d
  LONG v10; // [rsp+50h] [rbp-28h] BYREF
  LONG cy; // [rsp+54h] [rbp-24h] BYREF
  LONG v12; // [rsp+58h] [rbp-20h] BYREF
  _DWORD v13[7]; // [rsp+5Ch] [rbp-1Ch] BYREF
  ApplicationViewManagement::ApplicationViewTelemetry *v14; // [rsp+80h] [rbp+8h] BYREF
  struct tagSIZE v15; // [rsp+90h] [rbp+18h]
  struct tagSIZE v16; // [rsp+98h] [rbp+20h]

  v16 = a4;
  v15 = a3;
  v14 = this;
  cx = a4.cx;
  v5 = a3.cx;
  v7 = ApplicationViewManagementLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    LODWORD(v14) = v16.cy;
    cy = v15.cy;
    v10 = cx;
    v12 = v5;
    v13[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v7,
      (unsigned int)&unk_1807BA8FD,
      v8,
      v9,
      (__int64)v13,
      (__int64)&v12,
      (__int64)&cy,
      (__int64)&v10,
      (__int64)&v14);
  }
}
