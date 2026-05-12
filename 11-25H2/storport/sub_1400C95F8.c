/*
 * XREFs of sub_1400C95F8 @ 0x1400C95F8
 * Callers:
 *     sub_1400CB254 @ 0x1400CB254 (sub_1400CB254.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C95F8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8,
        const wchar_t *a9,
        char a10,
        const char *a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  const wchar_t *v15; // r8
  const char *v16; // r10
  const wchar_t *v17; // rdx
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ecx
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // eax
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+38h] [rbp-D0h] BYREF
  int *v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B8h]
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  const wchar_t *v31; // [rsp+68h] [rbp-A0h]
  __int64 v32; // [rsp+70h] [rbp-98h]
  char *v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  char *v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  const wchar_t *v37; // [rsp+98h] [rbp-70h]
  int v38; // [rsp+A0h] [rbp-68h]
  int v39; // [rsp+A4h] [rbp-64h]
  char *v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  const char *v42; // [rsp+B8h] [rbp-50h]
  int v43; // [rsp+C0h] [rbp-48h]
  int v44; // [rsp+C4h] [rbp-44h]
  char *v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  char *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  char *v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  char *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  int v53; // [rsp+140h] [rbp+38h] BYREF

  v53 = a4;
  v15 = a6;
  v16 = a11;
  v17 = a9;
  v27 = &v53;
  v29 = a5;
  v18 = 10;
  v19 = -1LL;
  v28 = 4LL;
  v30 = 16LL;
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a6[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v32 = v21;
  v33 = &a7;
  v34 = 2LL;
  if ( !a6 )
    v15 = L"NULL";
  v35 = &a8;
  v31 = v15;
  v36 = 4LL;
  v22 = a9 == 0LL;
  if ( a9 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a9[v23] );
    v18 = 2 * v23 + 2;
    v22 = a9 == 0LL;
  }
  if ( v22 )
    v17 = L"NULL";
  v38 = v18;
  v37 = v17;
  v40 = &a10;
  v39 = 0;
  v41 = 1LL;
  if ( a11 )
  {
    do
      ++v19;
    while ( a11[v19] );
    v24 = v19 + 1;
  }
  else
  {
    v24 = 5;
  }
  v43 = v24;
  v44 = 0;
  v45 = &a12;
  v46 = 8LL;
  v47 = &a13;
  v48 = 4LL;
  v49 = &a14;
  if ( !a11 )
    v16 = "NULL";
  v42 = v16;
  v51 = &a15;
  v50 = 4LL;
  v52 = 4LL;
  return sub_1400031E4((__int64)"NULL", &stru_14014A2C8, 0LL, 0xDu, &v26);
}
