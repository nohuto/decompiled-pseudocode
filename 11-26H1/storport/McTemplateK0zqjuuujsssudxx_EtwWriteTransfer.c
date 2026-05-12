/*
 * XREFs of McTemplateK0zqjuuujsssudxx_EtwWriteTransfer @ 0x1400985EC
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1400A8384 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujsssudxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  const char *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  const char *v24; // rax
  __int64 v25; // rdx
  int v26; // edx
  const char *v27; // rax
  bool v28; // zf
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+4Ch] [rbp-B4h]
  char *v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  char *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  char *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  char *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  const char *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  const char *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  const char *v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  char *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  char *v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  char *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  char *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]

  v17 = -1LL;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a4[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v32 = v19;
  v33 = 0;
  v34 = &a5;
  v20 = 5;
  v36 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v21 = a11;
  v38 = &a7;
  v40 = &a8;
  v42 = &a9;
  v44 = a10;
  v31 = a4;
  v35 = 4LL;
  v37 = 16LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 16LL;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a11[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v47 = v23;
  v24 = a12;
  if ( !a11 )
    v21 = "NULL";
  v48 = 0;
  v46 = v21;
  if ( a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a12[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v50 = v26;
  v51 = 0;
  if ( !a12 )
    v24 = "NULL";
  v49 = v24;
  v27 = a13;
  v28 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v17;
    while ( a13[v17] );
    v20 = v17 + 1;
    v28 = a13 == 0LL;
  }
  if ( v28 )
    v27 = "NULL";
  v53 = v20;
  v52 = v27;
  v54 = 0;
  v55 = &a14;
  v56 = 1LL;
  v57 = &a15;
  v58 = 4LL;
  v59 = &a16;
  v61 = &a17;
  v60 = 8LL;
  v62 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v17, &EventHierarchicalReset, 0LL, 0xFu, &v30);
}
