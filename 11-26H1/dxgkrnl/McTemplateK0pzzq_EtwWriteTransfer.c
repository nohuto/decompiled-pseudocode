/*
 * XREFs of McTemplateK0pzzq_EtwWriteTransfer @ 0x140065250
 * Callers:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1403F3388 (-VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VgpuTraceFrequentWrite@@YAXEJPEAXPEBG1ZZ @ 0x14040C1FC (-VgpuTraceFrequentWrite@@YAXEJPEAXPEBG1ZZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pzzq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // edx
  const wchar_t *v9; // rcx
  bool v10; // zf
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-21h] BYREF
  va_list v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  const wchar_t *v15; // [rsp+50h] [rbp-1h]
  int v16; // [rsp+58h] [rbp+7h]
  int v17; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v18; // [rsp+60h] [rbp+Fh]
  int v19; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+6Ch] [rbp+1Bh]
  va_list v21; // [rsp+70h] [rbp+1Fh]
  __int64 v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  const wchar_t *v25; // [rsp+C0h] [rbp+6Fh]
  const wchar_t *v26; // [rsp+C8h] [rbp+77h]
  va_list va1; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, const wchar_t *);
  v26 = va_arg(va1, const wchar_t *);
  v3 = v25;
  va_copy(v13, va);
  v4 = -1LL;
  v14 = 8LL;
  v6 = 10LL;
  if ( v25 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v25[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v16 = v8;
  v17 = 0;
  if ( !v25 )
    v3 = L"NULL";
  v15 = v3;
  v9 = v26;
  v10 = v26 == 0LL;
  if ( v26 )
  {
    do
      ++v4;
    while ( v26[v4] );
    v6 = (unsigned int)(2 * v4 + 2);
    v10 = v26 == 0LL;
  }
  if ( v10 )
    v9 = L"NULL";
  v20 = 0;
  v18 = v9;
  va_copy(v21, va1);
  v19 = v6;
  v22 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, v6, 5u, &v12);
}
