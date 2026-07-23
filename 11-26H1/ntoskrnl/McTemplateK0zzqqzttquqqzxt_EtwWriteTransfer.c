/*
 * XREFs of McTemplateK0zzqqzttquqqzxt_EtwWriteTransfer @ 0x1405DF53C
 * Callers:
 *     PnpTraceRebalanceResult @ 0x1407B4D08 (PnpTraceRebalanceResult.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzqqzttquqqzxt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        const wchar_t *a15,
        char a16,
        char a17)
{
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // ecx
  const wchar_t *v21; // rcx
  __int64 v22; // rdx
  int v23; // edx
  const wchar_t *v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  const wchar_t *v27; // rcx
  bool v28; // zf
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+4Ch] [rbp-B4h]
  const wchar_t *v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+58h] [rbp-A8h]
  int v36; // [rsp+5Ch] [rbp-A4h]
  char *v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  char *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  const wchar_t *v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  char *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  char *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  char *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  char *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  char *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  char *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  const wchar_t *v56; // [rsp+F0h] [rbp-10h]
  int v57; // [rsp+F8h] [rbp-8h]
  int v58; // [rsp+FCh] [rbp-4h]
  char *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  char *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]

  v17 = -1LL;
  v18 = 10;
  if ( a4 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a4[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v32 = v20;
  v21 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v33 = 0;
  v31 = a4;
  if ( a5 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a5[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v35 = v23;
  v24 = a8;
  if ( !a5 )
    v21 = L"NULL";
  v36 = 0;
  v34 = v21;
  v37 = &a6;
  v39 = &a7;
  v38 = 4LL;
  v40 = 4LL;
  if ( a8 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a8[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v42 = v26;
  v43 = 0;
  v44 = &a9;
  if ( !a8 )
    v24 = L"NULL";
  v41 = v24;
  v46 = &a10;
  v48 = &a11;
  v50 = &a12;
  v52 = &a13;
  v54 = &a14;
  v27 = a15;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 1LL;
  v53 = 4LL;
  v55 = 4LL;
  v28 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v17;
    while ( a15[v17] );
    v18 = 2 * v17 + 2;
    v28 = a15 == 0LL;
  }
  if ( v28 )
    v27 = L"NULL";
  v57 = v18;
  v56 = v27;
  v59 = &a16;
  v58 = 0;
  v61 = &a17;
  v60 = 8LL;
  v62 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_Rebalance_Failure,
           0LL,
           0xFu,
           &v30);
}
