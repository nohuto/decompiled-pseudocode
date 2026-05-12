/*
 * XREFs of McTemplateK0qjzzzxz_EtwWriteTransfer @ 0x1400AFE94
 * Callers:
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400B1A5C (StorEtwNVMeICEInterfaceEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzxz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        const wchar_t *a10)
{
  const wchar_t *v10; // rcx
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // edx
  const wchar_t *v16; // rcx
  __int64 v17; // rdx
  int v18; // edx
  const wchar_t *v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  const wchar_t *v22; // rcx
  bool v23; // zf
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-69h] BYREF
  int *v26; // [rsp+40h] [rbp-59h]
  __int64 v27; // [rsp+48h] [rbp-51h]
  __int64 v28; // [rsp+50h] [rbp-49h]
  __int64 v29; // [rsp+58h] [rbp-41h]
  const wchar_t *v30; // [rsp+60h] [rbp-39h]
  int v31; // [rsp+68h] [rbp-31h]
  int v32; // [rsp+6Ch] [rbp-2Dh]
  const wchar_t *v33; // [rsp+70h] [rbp-29h]
  int v34; // [rsp+78h] [rbp-21h]
  int v35; // [rsp+7Ch] [rbp-1Dh]
  const wchar_t *v36; // [rsp+80h] [rbp-19h]
  int v37; // [rsp+88h] [rbp-11h]
  int v38; // [rsp+8Ch] [rbp-Dh]
  char *v39; // [rsp+90h] [rbp-9h]
  __int64 v40; // [rsp+98h] [rbp-1h]
  const wchar_t *v41; // [rsp+A0h] [rbp+7h]
  int v42; // [rsp+A8h] [rbp+Fh]
  int v43; // [rsp+ACh] [rbp+13h]
  int v44; // [rsp+E8h] [rbp+4Fh] BYREF

  v44 = a4;
  v10 = a6;
  v26 = &v44;
  v28 = a5;
  v12 = -1LL;
  v27 = 4LL;
  v29 = 16LL;
  v13 = 10;
  if ( a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a6[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v31 = v15;
  v32 = 0;
  if ( !a6 )
    v10 = L"NULL";
  v30 = v10;
  v16 = a7;
  if ( a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v34 = v18;
  v19 = a8;
  if ( !a7 )
    v16 = L"NULL";
  v35 = 0;
  v33 = v16;
  if ( a8 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a8[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v37 = v21;
  v38 = 0;
  if ( !a8 )
    v19 = L"NULL";
  v39 = &a9;
  v22 = a10;
  v36 = v19;
  v40 = 8LL;
  v23 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v12;
    while ( a10[v12] );
    v13 = 2 * v12 + 2;
    v23 = a10 == 0LL;
  }
  if ( v23 )
    v22 = L"NULL";
  v43 = 0;
  v42 = v13;
  v41 = v22;
  return McGenEventWrite_EtwWriteTransfer((__int64)v22, a2, 0LL, 8u, &v25);
}
