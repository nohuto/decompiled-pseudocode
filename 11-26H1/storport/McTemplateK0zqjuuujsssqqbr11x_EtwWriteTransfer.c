/*
 * XREFs of McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer @ 0x1400B0364
 * Callers:
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1400B13B0 (StorEtwMiniportBugResetBrokenEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
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
        int a15,
        __int64 a16,
        char a17)
{
  __int64 v17; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // r8d
  const char *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
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
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  const char *v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  int v49; // [rsp+BCh] [rbp-44h]
  const char *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  const char *v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  int *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+10Ch] [rbp+Ch]
  char *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]

  v17 = -1LL;
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
  v33 = v20;
  v34 = 0;
  v35 = &a5;
  v21 = 5;
  v37 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v22 = a11;
  v39 = &a7;
  v41 = &a8;
  v43 = &a9;
  v45 = a10;
  v32 = a4;
  v36 = 4LL;
  v38 = 16LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 16LL;
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
  v48 = v24;
  v25 = a12;
  if ( !a11 )
    v22 = "NULL";
  v49 = 0;
  v47 = v22;
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
  v51 = v27;
  v52 = 0;
  if ( !a12 )
    v25 = "NULL";
  v50 = v25;
  v28 = a13;
  v29 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v17;
    while ( a13[v17] );
    v21 = v17 + 1;
    v29 = a13 == 0LL;
  }
  if ( v29 )
    v28 = "NULL";
  v54 = v21;
  v53 = v28;
  v55 = 0;
  v56 = &a14;
  v57 = 4LL;
  v58 = &a15;
  v60 = a16;
  v61 = a15;
  v63 = &a17;
  v59 = 4LL;
  v62 = 0;
  v64 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v17, &EventMiniportBugResetBroken, a3, 0xFu, &v31);
}
