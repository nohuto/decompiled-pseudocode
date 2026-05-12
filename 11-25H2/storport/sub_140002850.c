/*
 * XREFs of sub_140002850 @ 0x140002850
 * Callers:
 *     sub_14018213C @ 0x14018213C (sub_14018213C.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002850(
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
  const wchar_t *v16; // r11
  __int64 v17; // rcx
  const char *v18; // rdx
  const char *v19; // r8
  int v20; // ebx
  const char *v21; // r10
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  bool v30; // zf
  _BYTE v32[16]; // [rsp+38h] [rbp-D0h] BYREF
  const wchar_t *v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h]
  char *v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  char *v39; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-88h]
  char *v41; // [rsp+88h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-78h]
  char *v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  __int64 v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  const char *v47; // [rsp+B8h] [rbp-50h]
  int v48; // [rsp+C0h] [rbp-48h]
  int v49; // [rsp+C4h] [rbp-44h]
  const char *v50; // [rsp+C8h] [rbp-40h]
  int v51; // [rsp+D0h] [rbp-38h]
  int v52; // [rsp+D4h] [rbp-34h]
  const char *v53; // [rsp+D8h] [rbp-30h]
  int v54; // [rsp+E0h] [rbp-28h]
  int v55; // [rsp+E4h] [rbp-24h]
  const wchar_t *v56; // [rsp+E8h] [rbp-20h]
  int v57; // [rsp+F0h] [rbp-18h]
  int v58; // [rsp+F4h] [rbp-14h]
  char *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  char *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]

  v16 = a14;
  v17 = -1LL;
  v18 = a13;
  v19 = a12;
  v20 = 10;
  v21 = a11;
  if ( a4 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a4[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v34 = v23;
  v35 = &a5;
  v37 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v33 = a4;
  v39 = &a7;
  v41 = &a8;
  v43 = &a9;
  v45 = a10;
  v36 = 4LL;
  v38 = 16LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 16LL;
  if ( a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a11[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v48 = v25;
  v49 = 0;
  if ( !a11 )
    v21 = "NULL";
  v47 = v21;
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
    v19 = "NULL";
  v50 = v19;
  if ( a13 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a13[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v54 = v29;
  v55 = 0;
  if ( !a13 )
    v18 = "NULL";
  v53 = v18;
  v30 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v17;
    while ( a14[v17] );
    v20 = 2 * v17 + 2;
    v30 = a14 == 0LL;
  }
  if ( v30 )
    v16 = L"NULL";
  v57 = v20;
  v56 = v16;
  v59 = &a15;
  v58 = 0;
  v61 = &a16;
  v60 = 4LL;
  v62 = 4LL;
  return sub_1400031E4(v17, &unk_140148900, 0LL, 14LL, v32);
}
