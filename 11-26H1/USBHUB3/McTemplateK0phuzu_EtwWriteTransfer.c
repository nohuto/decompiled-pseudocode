/*
 * XREFs of McTemplateK0phuzu_EtwWriteTransfer @ 0x14002E12C
 * Callers:
 *     HUBDTX_LogAlternateMode @ 0x14002BC2C (HUBDTX_LogAlternateMode.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A20 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0phuzu_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-39h] BYREF
  va_list v8; // [rsp+40h] [rbp-29h]
  __int64 v9; // [rsp+48h] [rbp-21h]
  va_list v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  va_list v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  const wchar_t *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  va_list v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  __int64 v19; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v21; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  __int64 v23; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D8h] [rbp+6Fh]
  const wchar_t *v25; // [rsp+E0h] [rbp+77h]
  va_list va3; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v25 = va_arg(va3, const wchar_t *);
  v3 = v25;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  va_copy(v12, va2);
  v11 = 2LL;
  v13 = 1LL;
  if ( v25 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v25[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v15 = v5;
  v16 = 0;
  va_copy(v17, va3);
  v18 = 1LL;
  if ( !v25 )
    v3 = L"NULL";
  v14 = v3;
  return McGenEventWrite_EtwWriteTransfer((__int64)v3, a2, a3, 6u, &v7);
}
