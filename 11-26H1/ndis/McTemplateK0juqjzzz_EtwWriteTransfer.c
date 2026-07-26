/*
 * XREFs of McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1400077C0
 * Callers:
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140177930 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140178D10 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140009290 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0juqjzzz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  const wchar_t *v10; // rdx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // ecx
  const wchar_t *v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  const wchar_t *v19; // rcx
  bool v20; // zf
  _BYTE v22[16]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v23; // [rsp+40h] [rbp-59h]
  __int64 v24; // [rsp+48h] [rbp-51h]
  char *v25; // [rsp+50h] [rbp-49h]
  __int64 v26; // [rsp+58h] [rbp-41h]
  char *v27; // [rsp+60h] [rbp-39h]
  __int64 v28; // [rsp+68h] [rbp-31h]
  __int64 v29; // [rsp+70h] [rbp-29h]
  __int64 v30; // [rsp+78h] [rbp-21h]
  const wchar_t *v31; // [rsp+80h] [rbp-19h]
  int v32; // [rsp+88h] [rbp-11h]
  int v33; // [rsp+8Ch] [rbp-Dh]
  const wchar_t *v34; // [rsp+90h] [rbp-9h]
  int v35; // [rsp+98h] [rbp-1h]
  int v36; // [rsp+9Ch] [rbp+3h]
  const wchar_t *v37; // [rsp+A0h] [rbp+7h]
  int v38; // [rsp+A8h] [rbp+Fh]
  int v39; // [rsp+ACh] [rbp+13h]

  v10 = a8;
  v25 = &a5;
  v23 = a4;
  v27 = &a6;
  v12 = 10;
  v29 = a7;
  v13 = -1LL;
  v24 = 16LL;
  v26 = 1LL;
  v28 = 4LL;
  v30 = 16LL;
  if ( a8 )
  {
    v14 = -1LL;
    do
      v20 = a8[++v14] == 0;
    while ( !v20 );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v32 = v15;
  v33 = 0;
  if ( !a8 )
    v10 = L"NULL";
  v31 = v10;
  v16 = a9;
  if ( a9 )
  {
    v17 = -1LL;
    do
      v20 = a9[++v17] == 0;
    while ( !v20 );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v35 = v18;
  v19 = a10;
  if ( !a9 )
    v16 = L"NULL";
  v36 = 0;
  v34 = v16;
  v20 = a10 == 0LL;
  if ( a10 )
  {
    do
      v20 = a10[++v13] == 0;
    while ( !v20 );
    v12 = 2 * v13 + 2;
    v20 = a10 == 0LL;
  }
  if ( v20 )
    v19 = L"NULL";
  v38 = v12;
  v37 = v19;
  v39 = 0;
  return McGenEventWrite_EtwWriteTransfer(&NDIS_PROVIDER_ID_Context, &FilterStateChangeEx, a3, 8LL, v22);
}
