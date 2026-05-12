/*
 * XREFs of sub_14009084C @ 0x14009084C
 * Callers:
 *     sub_140050330 @ 0x140050330 (sub_140050330.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14009084C(
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
        char a16)
{
  const char *v16; // r10
  __int64 v17; // rcx
  const char *v18; // rdx
  const char *v19; // r8
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+48h] [rbp-B8h]
  int v31; // [rsp+4Ch] [rbp-B4h]
  char *v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  char *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  char *v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  char *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  const char *v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  const char *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  const char *v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+DCh] [rbp-24h]
  char *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]

  v16 = a13;
  v17 = -1LL;
  v18 = a12;
  v19 = a11;
  if ( a4 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a4[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v30 = v21;
  v31 = 0;
  v33 = 4LL;
  v32 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v34 = a6;
  v36 = &a7;
  v38 = &a8;
  v40 = &a9;
  v29 = a4;
  v42 = a10;
  v35 = 16LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 16LL;
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
  v45 = v23;
  v46 = 0;
  if ( !a11 )
    v19 = "NULL";
  v44 = v19;
  if ( a12 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a12[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v48 = v25;
  v49 = 0;
  if ( !a12 )
    v18 = "NULL";
  v47 = v18;
  if ( a13 )
  {
    do
      ++v17;
    while ( a13[v17] );
    v26 = (unsigned int)(v17 + 1);
  }
  else
  {
    v26 = 5LL;
  }
  v51 = v26;
  v53 = &a14;
  v52 = 0;
  v55 = &a15;
  v54 = 4LL;
  if ( !a13 )
    v16 = "NULL";
  v57 = &a16;
  v50 = v16;
  v56 = 4LL;
  v58 = 4LL;
  return sub_1400031E4(v26, &stru_140149DE0, 0LL, 0xEu, &v28);
}
