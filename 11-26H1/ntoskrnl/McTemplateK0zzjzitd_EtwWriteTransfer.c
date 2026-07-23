/*
 * XREFs of McTemplateK0zzjzitd_EtwWriteTransfer @ 0x140498708
 * Callers:
 *     PiDevCfgLogDeviceMigrated @ 0x140A46A3C (PiDevCfgLogDeviceMigrated.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0zzjzitd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v10; // rcx
  int v12; // r8d
  __int64 v13; // rax
  int v14; // eax
  const wchar_t *v15; // rax
  __int64 v16; // rdx
  int v17; // edx
  const wchar_t *v18; // rax
  bool v19; // zf
  _BYTE v21[16]; // [rsp+30h] [rbp-69h] BYREF
  const wchar_t *v22; // [rsp+40h] [rbp-59h]
  int v23; // [rsp+48h] [rbp-51h]
  int v24; // [rsp+4Ch] [rbp-4Dh]
  const wchar_t *v25; // [rsp+50h] [rbp-49h]
  int v26; // [rsp+58h] [rbp-41h]
  int v27; // [rsp+5Ch] [rbp-3Dh]
  __int64 v28; // [rsp+60h] [rbp-39h]
  __int64 v29; // [rsp+68h] [rbp-31h]
  const wchar_t *v30; // [rsp+70h] [rbp-29h]
  int v31; // [rsp+78h] [rbp-21h]
  int v32; // [rsp+7Ch] [rbp-1Dh]
  char *v33; // [rsp+80h] [rbp-19h]
  __int64 v34; // [rsp+88h] [rbp-11h]
  char *v35; // [rsp+90h] [rbp-9h]
  __int64 v36; // [rsp+98h] [rbp-1h]
  char *v37; // [rsp+A0h] [rbp+7h]
  __int64 v38; // [rsp+A8h] [rbp+Fh]

  v10 = -1LL;
  v12 = 10;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v23 = v14;
  v15 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v24 = 0;
  v22 = a4;
  if ( a5 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a5[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v26 = v17;
  v27 = 0;
  if ( !a5 )
    v15 = L"NULL";
  v29 = 16LL;
  v25 = v15;
  v28 = a6;
  v18 = a7;
  v19 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v10;
    while ( a7[v10] );
    v12 = 2 * v10 + 2;
    v19 = a7 == 0LL;
  }
  if ( v19 )
    v18 = L"NULL";
  v31 = v12;
  v30 = v18;
  v32 = 0;
  v33 = &a8;
  v34 = 8LL;
  v35 = &a9;
  v36 = 4LL;
  v37 = &a10;
  v38 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&MS_KernelPnP_Provider_Context, a2, 0LL, 8LL, v21);
}
