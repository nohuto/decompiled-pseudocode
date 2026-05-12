/*
 * XREFs of sub_140132104 @ 0x140132104
 * Callers:
 *     sub_140133528 @ 0x140133528 (sub_140133528.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140132104(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  const char *v15; // r10
  const char *v16; // r8
  const wchar_t *v18; // rdx
  const char *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+38h] [rbp-D0h] BYREF
  int *v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  const wchar_t *v34; // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-98h]
  const char *v36; // [rsp+78h] [rbp-90h]
  int v37; // [rsp+80h] [rbp-88h]
  int v38; // [rsp+84h] [rbp-84h]
  char *v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  char *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  const char *v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B4h] [rbp-54h]
  const char *v46; // [rsp+B8h] [rbp-50h]
  int v47; // [rsp+C0h] [rbp-48h]
  int v48; // [rsp+C4h] [rbp-44h]
  char *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  char *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h]
  char *v53; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h]
  char *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  int v57; // [rsp+140h] [rbp+38h] BYREF

  v57 = a4;
  v15 = a11;
  v16 = a10;
  v18 = a6;
  v19 = a7;
  v30 = &v57;
  v32 = a5;
  v20 = -1LL;
  v31 = 4LL;
  v33 = 16LL;
  if ( a6 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a6[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v35 = v22;
  if ( !a6 )
    v18 = L"NULL";
  v34 = v18;
  if ( a7 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a7[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v37 = v24;
  v38 = 0;
  v39 = &a8;
  v40 = 2LL;
  if ( !a7 )
    v19 = "NULL";
  v41 = &a9;
  v36 = v19;
  v42 = 2LL;
  if ( a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a10[v25] );
    v26 = (unsigned int)(v25 + 1);
  }
  else
  {
    v26 = 5LL;
  }
  v44 = v26;
  v45 = 0;
  if ( !a10 )
    v16 = "NULL";
  v43 = v16;
  if ( a11 )
  {
    do
      ++v20;
    while ( a11[v20] );
    v27 = v20 + 1;
  }
  else
  {
    v27 = 5;
  }
  v47 = v27;
  v48 = 0;
  v49 = &a12;
  if ( !a11 )
    v15 = "NULL";
  v46 = v15;
  v51 = &a13;
  v50 = 4LL;
  v53 = &a14;
  v52 = 4LL;
  v55 = &a15;
  v54 = 2LL;
  v56 = 4LL;
  return sub_1400031E4(v26, a2, 0LL, 0xDu, &v29);
}
