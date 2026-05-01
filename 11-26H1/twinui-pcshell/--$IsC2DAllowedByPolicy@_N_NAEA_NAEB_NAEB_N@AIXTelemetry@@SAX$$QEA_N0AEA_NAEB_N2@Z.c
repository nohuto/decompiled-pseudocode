/*
 * XREFs of ??$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N2@Z @ 0x18058ECD0
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180592050 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VAIXTelemetryLogging@@@details@wil@@QEAAPEAVAIXTelemetryLogging@@P6AXXZ@Z @ 0x18059388C (-get@-$static_lazy@VAIXTelemetryLogging@@@details@wil@@QEAAPEAVAIXTelemetryLogging@@P6AXXZ@Z.c)
 */

int __fastcall AIXTelemetry::IsC2DAllowedByPolicy<bool,bool,bool &,bool const &,bool const &>(
        char *a1,
        char *a2,
        char *a3,
        char *a4,
        char *a5)
{
  __int64 v9; // rax
  _DWORD *v10; // rcx
  char v11; // r8
  char v13; // [rsp+38h] [rbp-41h] BYREF
  char v14; // [rsp+39h] [rbp-40h] BYREF
  char v15; // [rsp+3Ah] [rbp-3Fh] BYREF
  char v16; // [rsp+3Bh] [rbp-3Eh] BYREF
  char v17; // [rsp+3Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+48h] [rbp-31h] BYREF
  char *v19; // [rsp+68h] [rbp-11h]
  __int64 v20; // [rsp+70h] [rbp-9h]
  char *v21; // [rsp+78h] [rbp-1h]
  __int64 v22; // [rsp+80h] [rbp+7h]
  char *v23; // [rsp+88h] [rbp+Fh]
  __int64 v24; // [rsp+90h] [rbp+17h]
  char *v25; // [rsp+98h] [rbp+1Fh]
  __int64 v26; // [rsp+A0h] [rbp+27h]
  char *v27; // [rsp+A8h] [rbp+2Fh]
  __int64 v28; // [rsp+B0h] [rbp+37h]

  v9 = wil::details::static_lazy<AIXTelemetryLogging>::get(
         a1,
         _lambda_945080ad272e394bfcbba9388ab05f77_::_lambda_invoker_cdecl_);
  v10 = *(_DWORD **)(v9 + 8);
  if ( *v10 > 5u )
  {
    v28 = 1LL;
    v26 = 1LL;
    v24 = 1LL;
    v11 = *a5;
    v14 = *a4;
    v15 = *a3;
    v16 = *a2;
    v17 = *a1;
    v27 = &v13;
    v25 = &v14;
    v23 = &v15;
    v21 = &v16;
    v19 = &v17;
    v13 = v11;
    v22 = 1LL;
    v20 = 1LL;
    LODWORD(v9) = tlgWriteTransfer_EventWriteTransfer((__int64)v10, byte_180820F97, 0LL, 0LL, 7u, &v18);
  }
  return v9;
}
