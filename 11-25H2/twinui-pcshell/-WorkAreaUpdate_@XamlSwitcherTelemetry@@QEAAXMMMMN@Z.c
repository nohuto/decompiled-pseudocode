/*
 * XREFs of ?WorkAreaUpdate_@XamlSwitcherTelemetry@@QEAAXMMMMN@Z @ 0x180106ED4
 * Callers:
 *     ??$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z @ 0x1801FE728 (--$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18010705C (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1801D8708 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall XamlSwitcherTelemetry::WorkAreaUpdate_(
        XamlSwitcherTelemetry *this,
        float a2,
        float a3,
        float a4,
        float a5,
        double a6)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // r8d
  int v8; // r9d
  float v9; // [rsp+50h] [rbp-20h] BYREF
  float v10; // [rsp+54h] [rbp-1Ch] BYREF
  float v11; // [rsp+58h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  double v13; // [rsp+68h] [rbp-8h] BYREF
  XamlSwitcherTelemetry *v14; // [rsp+80h] [rbp+10h] BYREF
  float v15; // [rsp+88h] [rbp+18h]
  float v16; // [rsp+90h] [rbp+20h]
  float v17; // [rsp+98h] [rbp+28h]

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v14 = this;
  v6 = XamlSwitcherLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    if ( tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    {
      *(float *)&v14 = a5;
      v9 = v17;
      v13 = a6;
      v10 = v16;
      v11 = v15;
      v12 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        (unsigned int)&unk_1807F5576,
        v7,
        v8,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
