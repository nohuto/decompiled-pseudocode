/*
 * XREFs of sub_1400DB26C @ 0x1400DB26C
 * Callers:
 *     sub_1400E3658 @ 0x1400E3658 (sub_1400E3658.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400DB26C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        const char *a14,
        const char *a15)
{
  const wchar_t *v15; // r9
  const char *v16; // rdx
  const char *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-D0h] BYREF
  int *v26; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  const wchar_t *v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+68h] [rbp-98h]
  int v32; // [rsp+6Ch] [rbp-94h]
  char *v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  char *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  char *v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  char *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  char *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  char *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  char *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  const char *v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  const char *v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  int v53; // [rsp+138h] [rbp+38h] BYREF

  v53 = a4;
  v15 = a6;
  v16 = a15;
  v17 = a14;
  v26 = &v53;
  v28 = a5;
  v18 = -1LL;
  v27 = 4LL;
  v29 = 16LL;
  if ( a6 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a6[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v31 = v20;
  v32 = 0;
  v33 = &a7;
  v34 = 8LL;
  v35 = &a8;
  if ( !a6 )
    v15 = L"NULL";
  v30 = v15;
  v36 = 4LL;
  v37 = &a9;
  v39 = &a10;
  v41 = &a11;
  v43 = &a12;
  v45 = &a13;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 2LL;
  v46 = 2LL;
  if ( a14 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a14[v21] );
    v22 = (unsigned int)(v21 + 1);
  }
  else
  {
    v22 = 5LL;
  }
  v48 = v22;
  v49 = 0;
  if ( !a14 )
    v17 = "NULL";
  v47 = v17;
  if ( a15 )
  {
    do
      ++v18;
    while ( a15[v18] );
    v23 = v18 + 1;
  }
  else
  {
    v23 = 5;
  }
  v51 = v23;
  v52 = 0;
  if ( !a15 )
    v16 = "NULL";
  v50 = v16;
  return sub_1400031E4(v22, &stru_14014A860, 0LL, 0xDu, &v25);
}
