/*
 * XREFs of McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405DCDD8
 * Callers:
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pzzqdqd_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rax
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // edx
  const wchar_t *v8; // rax
  bool v9; // zf
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-69h] BYREF
  va_list v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  const wchar_t *v14; // [rsp+50h] [rbp-49h]
  int v15; // [rsp+58h] [rbp-41h]
  int v16; // [rsp+5Ch] [rbp-3Dh]
  const wchar_t *v17; // [rsp+60h] [rbp-39h]
  int v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  va_list v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  va_list v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  va_list v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  va_list v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]
  __int64 v28; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  const wchar_t *v30; // [rsp+F0h] [rbp+57h]
  const wchar_t *v31; // [rsp+F8h] [rbp+5Fh]
  __int64 v32; // [rsp+100h] [rbp+67h] BYREF
  va_list va1; // [rsp+100h] [rbp+67h]
  __int64 v34; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+108h] [rbp+6Fh]
  __int64 v36; // [rsp+110h] [rbp+77h] BYREF
  va_list va3; // [rsp+110h] [rbp+77h]
  va_list va4; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, const wchar_t *);
  v31 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v34 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v36 = va_arg(va4, _QWORD);
  va_copy(v12, va);
  v3 = v30;
  v4 = -1LL;
  v13 = 8LL;
  v5 = 10;
  if ( v30 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v30[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v15 = v7;
  v16 = 0;
  if ( !v30 )
    v3 = L"NULL";
  v14 = v3;
  v8 = v31;
  v9 = v31 == 0LL;
  if ( v31 )
  {
    do
      ++v4;
    while ( v31[v4] );
    v5 = 2 * v4 + 2;
    v9 = v31 == 0LL;
  }
  if ( v9 )
    v8 = L"NULL";
  v18 = v5;
  v17 = v8;
  v19 = 0;
  va_copy(v20, va1);
  v21 = 4LL;
  va_copy(v22, va2);
  v23 = 4LL;
  va_copy(v24, va3);
  v25 = 4LL;
  va_copy(v26, va4);
  v27 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_ProblemCode_Update,
           0LL,
           8u,
           &v11);
}
