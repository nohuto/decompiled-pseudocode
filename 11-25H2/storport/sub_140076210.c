/*
 * XREFs of sub_140076210 @ 0x140076210
 * Callers:
 *     sub_140039E80 @ 0x140039E80 (sub_140039E80.c)
 *     sub_140079AF0 @ 0x140079AF0 (sub_140079AF0.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS sub_140076210(__int64 a1, const EVENT_DESCRIPTOR *a2, _DWORD a3, __int64 a4, ...)
{
  int v5; // [rsp+30h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-21h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-11h]
  __int64 v8; // [rsp+58h] [rbp-9h]
  va_list v9; // [rsp+60h] [rbp-1h]
  __int64 v10; // [rsp+68h] [rbp+7h]
  int *v11; // [rsp+70h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+17h]
  va_list v13; // [rsp+80h] [rbp+1Fh]
  __int64 v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v16; // [rsp+D0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+D0h] [rbp+6Fh]
  __int64 v18; // [rsp+D8h] [rbp+77h]
  va_list va1; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v15 = a4;
  v8 = 8LL;
  v5 = 0;
  v7 = &v15;
  va_copy(v9, va);
  v11 = &v5;
  v10 = 4LL;
  va_copy(v13, va1);
  v12 = 4LL;
  v14 = 4LL;
  return sub_1400031E4(a1, a2, 0LL, 5u, &v6);
}
