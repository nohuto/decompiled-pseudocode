/*
 * XREFs of McTemplateK0zqjuuussssxq_EtwWriteTransfer @ 0x140098B4C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuussssxq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15)
{
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // r8d
  const char *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const char *v22; // rax
  __int64 v23; // rdx
  int v24; // edx
  const char *v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  const char *v28; // rax
  bool v29; // zf
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+48h] [rbp-B8h]
  int v34; // [rsp+4Ch] [rbp-B4h]
  char *v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  char *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  char *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  char *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  const char *v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  const char *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  const char *v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+CCh] [rbp-34h]
  const char *v54; // [rsp+D0h] [rbp-30h]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  char *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  char *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]

  v15 = -1LL;
  if ( a4 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a4[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v33 = v17;
  v34 = 0;
  v35 = &a5;
  v18 = 5;
  v37 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v19 = a10;
  v39 = &a7;
  v41 = &a8;
  v43 = &a9;
  v32 = a4;
  v36 = 4LL;
  v38 = 16LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 1LL;
  if ( a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a10[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v46 = v21;
  v22 = a11;
  if ( !a10 )
    v19 = "NULL";
  v47 = 0;
  v45 = v19;
  if ( a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a11[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v49 = v24;
  v50 = 0;
  if ( !a11 )
    v22 = "NULL";
  v48 = v22;
  v25 = a12;
  if ( a12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a12[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v52 = v27;
  v53 = 0;
  if ( !a12 )
    v25 = "NULL";
  v51 = v25;
  v28 = a13;
  v29 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v15;
    while ( a13[v15] );
    v18 = v15 + 1;
    v29 = a13 == 0LL;
  }
  if ( v29 )
    v28 = "NULL";
  v55 = v18;
  v54 = v28;
  v56 = 0;
  v57 = &a14;
  v58 = 8LL;
  v59 = &a15;
  v60 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v15, &EventReadCapacityError, 0LL, 0xDu, &v31);
}
