/*
 * XREFs of ??$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N22@Z @ 0x18056AFA4
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E5DC (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Provider@AIXTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18056ECAC (-Provider@AIXTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall AIXTelemetry::IsC2DAllowedByPolicy<bool,bool,bool &,bool const &,bool const &,bool const &>(
        char *a1,
        char *a2,
        char *a3,
        char *a4,
        char *a5,
        char *a6)
{
  const struct _tlgProvider_t *v10; // rax
  char v11; // cl
  char v12; // r8
  char v13; // r11
  char v14; // cl
  char v16; // [rsp+38h] [rbp-69h] BYREF
  char v17; // [rsp+39h] [rbp-68h] BYREF
  char v18; // [rsp+3Ah] [rbp-67h] BYREF
  char v19; // [rsp+3Bh] [rbp-66h] BYREF
  char v20; // [rsp+3Ch] [rbp-65h] BYREF
  char v21; // [rsp+3Dh] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+48h] [rbp-59h] BYREF
  char *v23; // [rsp+68h] [rbp-39h]
  __int64 v24; // [rsp+70h] [rbp-31h]
  char *v25; // [rsp+78h] [rbp-29h]
  __int64 v26; // [rsp+80h] [rbp-21h]
  char *v27; // [rsp+88h] [rbp-19h]
  __int64 v28; // [rsp+90h] [rbp-11h]
  char *v29; // [rsp+98h] [rbp-9h]
  __int64 v30; // [rsp+A0h] [rbp-1h]
  char *v31; // [rsp+A8h] [rbp+7h]
  __int64 v32; // [rsp+B0h] [rbp+Fh]
  char *v33; // [rsp+B8h] [rbp+17h]
  __int64 v34; // [rsp+C0h] [rbp+1Fh]

  v10 = AIXTelemetryLogging::Provider();
  if ( *(_DWORD *)v10 > 5u )
  {
    v11 = *a4;
    v20 = *a2;
    v12 = *a5;
    v13 = *a6;
    v21 = *a1;
    v33 = &v16;
    v31 = &v17;
    v29 = &v18;
    v27 = &v19;
    v25 = &v20;
    v18 = v11;
    v14 = *a3;
    v23 = &v21;
    v17 = v12;
    v19 = v14;
    v16 = v13;
    v34 = 1LL;
    v32 = 1LL;
    v30 = 1LL;
    v28 = 1LL;
    v26 = 1LL;
    v24 = 1LL;
    LODWORD(v10) = tlgWriteTransfer_EventWriteTransfer((__int64)v10, byte_1807E553F, 0LL, 0LL, 8u, &v22);
  }
  return (int)v10;
}
