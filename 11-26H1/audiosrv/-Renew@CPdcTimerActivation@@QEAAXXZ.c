/*
 * XREFs of ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x18007FBBC
 * Callers:
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x180113100 (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x180074890 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

void __fastcall CPdcTimerActivation::Renew(CPdcTimerActivation *this)
{
  __int64 v2; // rcx
  int v3; // edi
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+54h] [rbp-ACh] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  int v12; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v15[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h]
  __int64 v17; // [rsp+80h] [rbp-80h]
  _QWORD *v18; // [rsp+88h] [rbp-78h]
  __int128 v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  _QWORD v21[3]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v22[152]; // [rsp+C8h] [rbp-38h] BYREF

  v21[1] = *((_QWORD *)this + 2);
  v21[0] = 1LL;
  v9 = 0;
  v21[2] = 560LL;
  memset_0(v22, 0, 0x90uLL);
  v2 = *(_QWORD *)this;
  v18 = v21;
  v15[0] = 1;
  v15[1] = 300;
  v16 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( v2 )
  {
    v3 = Pdcv2ActivationClientRenewActivation(v2, v15, &v9);
    v4 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v4 > 4u && tlgKeywordOn((__int64)v4, 64LL) )
    {
      v8 = *((_QWORD *)this + 2);
      v10 = v9;
      v11 = v3;
      v13 = *(_QWORD *)(v8 + 544);
      v12 = *(_DWORD *)(v8 + 40);
      v14 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        byte_1801A6E32,
        v6,
        v7,
        (__int64)&v14,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
