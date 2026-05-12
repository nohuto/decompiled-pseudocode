/*
 * XREFs of sub_140071DC8 @ 0x140071DC8
 * Callers:
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_14009F3A0 @ 0x14009F3A0 (sub_14009F3A0.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS sub_140071DC8(
        __int64 a1,
        _DWORD a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-99h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-89h]
  __int64 v13; // [rsp+48h] [rbp-81h]
  char *v14; // [rsp+50h] [rbp-79h]
  __int64 v15; // [rsp+58h] [rbp-71h]
  char *v16; // [rsp+60h] [rbp-69h]
  __int64 v17; // [rsp+68h] [rbp-61h]
  char *v18; // [rsp+70h] [rbp-59h]
  __int64 v19; // [rsp+78h] [rbp-51h]
  char *v20; // [rsp+80h] [rbp-49h]
  __int64 v21; // [rsp+88h] [rbp-41h]
  char *v22; // [rsp+90h] [rbp-39h]
  __int64 v23; // [rsp+98h] [rbp-31h]
  char *v24; // [rsp+A0h] [rbp-29h]
  __int64 v25; // [rsp+A8h] [rbp-21h]
  va_list v26; // [rsp+B0h] [rbp-19h]
  __int64 v27; // [rsp+B8h] [rbp-11h]
  va_list v28; // [rsp+C0h] [rbp-9h]
  __int64 v29; // [rsp+C8h] [rbp-1h]
  __int64 v30; // [rsp+108h] [rbp+3Fh] BYREF
  __int64 v31; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  va_list va1; // [rsp+148h] [rbp+7Fh] BYREF

  va_start(va1, a10);
  va_start(va, a10);
  v31 = va_arg(va1, _QWORD);
  v30 = a4;
  v13 = 8LL;
  v12 = &v30;
  v15 = 4LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v22 = &a9;
  v24 = &a10;
  va_copy(v26, va);
  va_copy(v28, va1);
  v19 = 1LL;
  v21 = 1LL;
  v23 = 1LL;
  v25 = 4LL;
  v27 = 8LL;
  v29 = 8LL;
  return sub_1400031E4(a1, &stru_14014A380, a3, 0xAu, &v11);
}
