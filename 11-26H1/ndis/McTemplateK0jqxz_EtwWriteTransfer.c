/*
 * XREFs of McTemplateK0jqxz_EtwWriteTransfer @ 0x1400073E0
 * Callers:
 *     NdisCloseAdapter @ 0x140176E20 (NdisCloseAdapter.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140009290 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0jqxz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v10; // eax
  _BYTE v12[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h]
  __int64 v14; // [rsp+48h] [rbp-50h]
  int *v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h]
  int *v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  const wchar_t *v19; // [rsp+70h] [rbp-28h]
  int v20; // [rsp+78h] [rbp-20h]
  int v21; // [rsp+7Ch] [rbp-1Ch]

  v7 = a7;
  v13 = a4;
  v15 = &a5;
  v17 = &a6;
  v14 = 16LL;
  v16 = 4LL;
  v18 = 8LL;
  if ( a7 )
  {
    v8 = -1LL;
    while ( a7[++v8] != 0 )
      ;
    v10 = 2 * v8 + 2;
  }
  else
  {
    v10 = 10;
  }
  v20 = v10;
  v21 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v19 = v7;
  return McGenEventWrite_EtwWriteTransfer(&NDIS_PROVIDER_ID_Context, &CloseAdapter, a3, 5LL, v12);
}
