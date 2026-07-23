/*
 * XREFs of McTemplateK0jqzjzx_EtwWriteTransfer @ 0x1405DCF58
 * Callers:
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqzjzx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        const wchar_t *a6,
        __int64 a7,
        const wchar_t *a8,
        char a9)
{
  const wchar_t *v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rax
  int v14; // eax
  const wchar_t *v15; // rax
  bool v16; // zf
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  __int64 v19; // [rsp+40h] [rbp-41h]
  __int64 v20; // [rsp+48h] [rbp-39h]
  char *v21; // [rsp+50h] [rbp-31h]
  __int64 v22; // [rsp+58h] [rbp-29h]
  const wchar_t *v23; // [rsp+60h] [rbp-21h]
  int v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+6Ch] [rbp-15h]
  __int64 v26; // [rsp+70h] [rbp-11h]
  __int64 v27; // [rsp+78h] [rbp-9h]
  const wchar_t *v28; // [rsp+80h] [rbp-1h]
  int v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+8Ch] [rbp+Bh]
  char *v31; // [rsp+90h] [rbp+Fh]
  __int64 v32; // [rsp+98h] [rbp+17h]

  v19 = a4;
  v20 = 16LL;
  v21 = &a5;
  v10 = a6;
  v11 = -1LL;
  v22 = 4LL;
  v12 = 10;
  if ( a6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a6[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v24 = v14;
  v26 = a7;
  v15 = a8;
  if ( !a6 )
    v10 = L"NULL";
  v23 = v10;
  v25 = 0;
  v27 = 16LL;
  v16 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v11;
    while ( a8[v11] );
    v12 = 2 * v11 + 2;
    v16 = a8 == 0LL;
  }
  if ( v16 )
    v15 = L"NULL";
  v29 = v12;
  v28 = v15;
  v30 = 0;
  v31 = &a9;
  v32 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 7u, &v18);
}
