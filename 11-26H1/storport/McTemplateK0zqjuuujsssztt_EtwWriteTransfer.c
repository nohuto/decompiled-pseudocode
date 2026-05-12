/*
 * XREFs of McTemplateK0zqjuuujsssztt_EtwWriteTransfer @ 0x140026F44
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x14018EB54 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0zqjuuujsssztt_EtwWriteTransfer(
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
        const wchar_t *a14,
        char a15,
        char a16)
{
  __int64 v16; // rcx
  int v17; // r10d
  __int64 v18; // rax
  int v19; // eax
  const char *v20; // rdx
  int v21; // r8d
  __int64 v22; // rax
  int v23; // eax
  const char *v24; // rax
  __int64 v25; // rdx
  int v26; // edx
  const char *v27; // rax
  bool v28; // zf
  __int64 v29; // rdx
  const wchar_t *v30; // rax
  bool v31; // zf
  _BYTE v33[16]; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+48h] [rbp-B8h]
  int v36; // [rsp+4Ch] [rbp-B4h]
  char *v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  char *v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  char *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  char *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  const char *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  const char *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  const char *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  const wchar_t *v58; // [rsp+E0h] [rbp-20h]
  int v59; // [rsp+E8h] [rbp-18h]
  int v60; // [rsp+ECh] [rbp-14h]
  char *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]

  v16 = -1LL;
  v17 = 10;
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
  v20 = a11;
  v35 = v19;
  v36 = 0;
  v37 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v21 = 5;
  v39 = a6;
  v41 = &a7;
  v43 = &a8;
  v45 = &a9;
  v47 = a10;
  v34 = a4;
  v38 = 4LL;
  v40 = 16LL;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 16LL;
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
  v50 = v23;
  v24 = a12;
  if ( !a11 )
    v20 = "NULL";
  v51 = 0;
  v49 = v20;
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
  v53 = v26;
  v54 = 0;
  if ( !a12 )
    v24 = "NULL";
  v52 = v24;
  v27 = a13;
  v28 = a13 == 0LL;
  if ( a13 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a13[v29] );
    v21 = v29 + 1;
    v28 = a13 == 0LL;
  }
  if ( v28 )
    v27 = "NULL";
  v56 = v21;
  v55 = v27;
  v30 = a14;
  v57 = 0;
  v31 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v16;
    while ( a14[v16] );
    v17 = 2 * v16 + 2;
    v31 = a14 == 0LL;
  }
  if ( v31 )
    v30 = L"NULL";
  v59 = v17;
  v58 = v30;
  v60 = 0;
  v61 = &a15;
  v62 = 4LL;
  v63 = &a16;
  v64 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v16, &EventUnitSurpriseRemoved, 0LL, 14LL, v33);
}
