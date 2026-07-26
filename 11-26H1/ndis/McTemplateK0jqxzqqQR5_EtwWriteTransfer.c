/*
 * XREFs of McTemplateK0jqxzqqQR5_EtwWriteTransfer @ 0x140007540
 * Callers:
 *     NdisWriteErrorLogEntry @ 0x140005D80 (NdisWriteErrorLogEntry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140009290 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0jqxzqqQR5_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8,
        int a9,
        __int64 a10)
{
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  int v13; // eax
  _BYTE v15[16]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v16; // [rsp+40h] [rbp-59h]
  __int64 v17; // [rsp+48h] [rbp-51h]
  char *v18; // [rsp+50h] [rbp-49h]
  __int64 v19; // [rsp+58h] [rbp-41h]
  char *v20; // [rsp+60h] [rbp-39h]
  __int64 v21; // [rsp+68h] [rbp-31h]
  const wchar_t *v22; // [rsp+70h] [rbp-29h]
  int v23; // [rsp+78h] [rbp-21h]
  int v24; // [rsp+7Ch] [rbp-1Dh]
  char *v25; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  int *v27; // [rsp+90h] [rbp-9h]
  __int64 v28; // [rsp+98h] [rbp-1h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  int v30; // [rsp+A8h] [rbp+Fh]
  int v31; // [rsp+ACh] [rbp+13h]

  v10 = a7;
  v16 = a4;
  v18 = &a5;
  v20 = &a6;
  v17 = 16LL;
  v19 = 4LL;
  v21 = 8LL;
  if ( a7 )
  {
    v11 = -1LL;
    while ( a7[++v11] != 0 )
      ;
    v13 = 2 * v11 + 2;
  }
  else
  {
    v13 = 10;
  }
  v23 = v13;
  v24 = 0;
  v31 = 0;
  v25 = &a8;
  if ( !a7 )
    v10 = L"NULL";
  v22 = v10;
  v27 = &a9;
  v29 = a10;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4 * a9;
  return McGenEventWrite_EtwWriteTransfer(&NDIS_PROVIDER_ID_Context, &NdisErrorLogEntry, a3, 8LL, v15);
}
