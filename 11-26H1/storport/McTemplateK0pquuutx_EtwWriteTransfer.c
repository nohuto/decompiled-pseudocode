/*
 * XREFs of McTemplateK0pquuutx_EtwWriteTransfer @ 0x14007E08C
 * Callers:
 *     StorPortUnitPowerRequiredStep1 @ 0x140033610 (StorPortUnitPowerRequiredStep1.c)
 *     StorPortUnitDirectedPowerDown @ 0x140081D30 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x140082200 (StorPortUnitDirectedPowerUp.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pquuutx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        _DWORD a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        ...)
{
  int v8; // [rsp+30h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-69h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-59h]
  __int64 v11; // [rsp+58h] [rbp-51h]
  char *v12; // [rsp+60h] [rbp-49h]
  __int64 v13; // [rsp+68h] [rbp-41h]
  char *v14; // [rsp+70h] [rbp-39h]
  __int64 v15; // [rsp+78h] [rbp-31h]
  char *v16; // [rsp+80h] [rbp-29h]
  __int64 v17; // [rsp+88h] [rbp-21h]
  va_list v18; // [rsp+90h] [rbp-19h]
  __int64 v19; // [rsp+98h] [rbp-11h]
  int *v20; // [rsp+A0h] [rbp-9h]
  __int64 v21; // [rsp+A8h] [rbp-1h]
  va_list v22; // [rsp+B0h] [rbp+7h]
  __int64 v23; // [rsp+B8h] [rbp+Fh]
  __int64 v24; // [rsp+F8h] [rbp+4Fh] BYREF
  __int64 v25; // [rsp+118h] [rbp+6Fh] BYREF
  va_list va; // [rsp+118h] [rbp+6Fh]
  __int64 v27; // [rsp+120h] [rbp+77h]
  va_list va1; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v25 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v24 = a4;
  v13 = 4LL;
  v8 = 0;
  v10 = &v24;
  v15 = 1LL;
  v12 = &a5;
  v11 = 8LL;
  v14 = &a6;
  v16 = &a7;
  va_copy(v18, va);
  v20 = &v8;
  va_copy(v22, va1);
  v17 = 1LL;
  v19 = 1LL;
  v21 = 4LL;
  v23 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 8u, &v9);
}
