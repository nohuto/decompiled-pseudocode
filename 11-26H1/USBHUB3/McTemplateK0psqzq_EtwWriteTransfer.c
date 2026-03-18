/*
 * XREFs of McTemplateK0psqzq_EtwWriteTransfer @ 0x1400345CC
 * Callers:
 *     HUBMISC_CheckIfSerialNumberIsIdentical @ 0x14002E644 (HUBMISC_CheckIfSerialNumberIsIdentical.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A20 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0psqzq_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  const char *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // edx
  const wchar_t *v7; // rcx
  int v8; // eax
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-39h] BYREF
  va_list v11; // [rsp+40h] [rbp-29h]
  __int64 v12; // [rsp+48h] [rbp-21h]
  const char *v13; // [rsp+50h] [rbp-19h]
  int v14; // [rsp+58h] [rbp-11h]
  int v15; // [rsp+5Ch] [rbp-Dh]
  va_list v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  const wchar_t *v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  va_list v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]
  __int64 v23; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  const char *v25; // [rsp+D0h] [rbp+67h]
  __int64 v26; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+6Fh]
  const wchar_t *v28; // [rsp+E0h] [rbp+77h]
  va_list va2; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  v28 = va_arg(va2, const wchar_t *);
  v3 = v25;
  va_copy(v11, va);
  v4 = -1LL;
  v12 = 8LL;
  if ( v25 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v25[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5;
  }
  v14 = v6;
  v15 = 0;
  if ( !v25 )
    v3 = "NULL";
  v17 = 4LL;
  v13 = v3;
  va_copy(v16, va1);
  v7 = v28;
  if ( v28 )
  {
    do
      ++v4;
    while ( v28[v4] );
    v8 = 2 * v4 + 2;
  }
  else
  {
    v8 = 10;
  }
  v19 = v8;
  v20 = 0;
  va_copy(v21, va2);
  v22 = 4LL;
  if ( !v28 )
    v7 = L"NULL";
  v18 = v7;
  return McGenEventWrite_EtwWriteTransfer(
           (__int64)v7,
           &USBHUB3_ETW_EVENT_USBENUM_SERIAL_MISMATCH_ON_RENUMERATION,
           a3,
           6u,
           &v10);
}
