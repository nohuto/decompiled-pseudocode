/*
 * XREFs of McTemplateK0izzxqjddjz_EtwWriteTransfer @ 0x140499A04
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1404995A0 (PnpWatchdogEtwWrite.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0izzxqjddjz_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rax
  __int64 v4; // rcx
  int v6; // r8d
  __int64 v7; // rdx
  int v8; // edx
  const wchar_t *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  const wchar_t *v12; // rax
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-B1h] BYREF
  va_list v16; // [rsp+40h] [rbp-A1h]
  __int64 v17; // [rsp+48h] [rbp-99h]
  const wchar_t *v18; // [rsp+50h] [rbp-91h]
  int v19; // [rsp+58h] [rbp-89h]
  int v20; // [rsp+5Ch] [rbp-85h]
  const wchar_t *v21; // [rsp+60h] [rbp-81h]
  int v22; // [rsp+68h] [rbp-79h]
  int v23; // [rsp+6Ch] [rbp-75h]
  va_list v24; // [rsp+70h] [rbp-71h]
  __int64 v25; // [rsp+78h] [rbp-69h]
  va_list v26; // [rsp+80h] [rbp-61h]
  __int64 v27; // [rsp+88h] [rbp-59h]
  __int64 v28; // [rsp+90h] [rbp-51h]
  __int64 v29; // [rsp+98h] [rbp-49h]
  va_list v30; // [rsp+A0h] [rbp-41h]
  __int64 v31; // [rsp+A8h] [rbp-39h]
  va_list v32; // [rsp+B0h] [rbp-31h]
  __int64 v33; // [rsp+B8h] [rbp-29h]
  __int64 v34; // [rsp+C0h] [rbp-21h]
  __int64 v35; // [rsp+C8h] [rbp-19h]
  const wchar_t *v36; // [rsp+D0h] [rbp-11h]
  int v37; // [rsp+D8h] [rbp-9h]
  int v38; // [rsp+DCh] [rbp-5h]
  __int64 v39; // [rsp+118h] [rbp+37h] BYREF
  va_list va; // [rsp+118h] [rbp+37h]
  const wchar_t *v41; // [rsp+120h] [rbp+3Fh]
  const wchar_t *v42; // [rsp+128h] [rbp+47h]
  __int64 v43; // [rsp+130h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+4Fh]
  __int64 v45; // [rsp+138h] [rbp+57h] BYREF
  va_list va2; // [rsp+138h] [rbp+57h]
  __int64 v47; // [rsp+140h] [rbp+5Fh]
  __int64 v48; // [rsp+148h] [rbp+67h] BYREF
  va_list va3; // [rsp+148h] [rbp+67h]
  __int64 v50; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+6Fh]
  __int64 v52; // [rsp+158h] [rbp+77h]
  const wchar_t *v53; // [rsp+160h] [rbp+7Fh]
  va_list va5; // [rsp+168h] [rbp+87h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v39 = va_arg(va1, _QWORD);
  v41 = va_arg(va1, const wchar_t *);
  v42 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v43 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v45 = va_arg(va3, _QWORD);
  v47 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v48 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v50 = va_arg(va5, _QWORD);
  v52 = va_arg(va5, _QWORD);
  v53 = va_arg(va5, const wchar_t *);
  v17 = 8LL;
  va_copy(v16, va);
  v3 = v41;
  v4 = -1LL;
  v6 = 10;
  if ( v41 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v41[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v19 = v8;
  v9 = v42;
  if ( !v41 )
    v3 = L"NULL";
  v20 = 0;
  v18 = v3;
  if ( v42 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v42[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v22 = v11;
  v23 = 0;
  va_copy(v24, va1);
  if ( !v42 )
    v9 = L"NULL";
  v21 = v9;
  va_copy(v26, va2);
  v28 = v47;
  va_copy(v30, va3);
  va_copy(v32, va4);
  v34 = v52;
  v12 = v53;
  v25 = 8LL;
  v27 = 4LL;
  v29 = 16LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 16LL;
  v13 = v53 == 0LL;
  if ( v53 )
  {
    do
      ++v4;
    while ( v53[v4] );
    v6 = 2 * v4 + 2;
    v13 = v53 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v37 = v6;
  v36 = v12;
  v38 = 0;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 0xBu, &v15);
}
