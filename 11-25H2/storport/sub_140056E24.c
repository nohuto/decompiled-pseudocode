/*
 * XREFs of sub_140056E24 @ 0x140056E24
 * Callers:
 *     sub_140067D50 @ 0x140067D50 (sub_140067D50.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140056E24(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        char a13)
{
  const wchar_t *v13; // rdx
  const char *v14; // r10
  const char *v15; // r8
  const wchar_t *v16; // r11
  const char *v17; // r9
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  int v23; // ecx
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+38h] [rbp-B9h] BYREF
  int *v31; // [rsp+48h] [rbp-A9h]
  __int64 v32; // [rsp+50h] [rbp-A1h]
  __int64 v33; // [rsp+58h] [rbp-99h]
  __int64 v34; // [rsp+60h] [rbp-91h]
  const wchar_t *v35; // [rsp+68h] [rbp-89h]
  int v36; // [rsp+70h] [rbp-81h]
  int v37; // [rsp+74h] [rbp-7Dh]
  const char *v38; // [rsp+78h] [rbp-79h]
  int v39; // [rsp+80h] [rbp-71h]
  int v40; // [rsp+84h] [rbp-6Dh]
  const wchar_t *v41; // [rsp+88h] [rbp-69h]
  int v42; // [rsp+90h] [rbp-61h]
  int v43; // [rsp+94h] [rbp-5Dh]
  char *v44; // [rsp+98h] [rbp-59h]
  __int64 v45; // [rsp+A0h] [rbp-51h]
  char *v46; // [rsp+A8h] [rbp-49h]
  __int64 v47; // [rsp+B0h] [rbp-41h]
  const char *v48; // [rsp+B8h] [rbp-39h]
  int v49; // [rsp+C0h] [rbp-31h]
  int v50; // [rsp+C4h] [rbp-2Dh]
  const char *v51; // [rsp+C8h] [rbp-29h]
  int v52; // [rsp+D0h] [rbp-21h]
  int v53; // [rsp+D4h] [rbp-1Dh]
  char *v54; // [rsp+D8h] [rbp-19h]
  __int64 v55; // [rsp+E0h] [rbp-11h]
  int v56; // [rsp+130h] [rbp+3Fh] BYREF

  v56 = a4;
  v13 = a6;
  v14 = a12;
  v15 = a11;
  v16 = a8;
  v17 = a7;
  v31 = &v56;
  v18 = 10;
  v33 = a5;
  v19 = -1LL;
  v32 = 4LL;
  v34 = 16LL;
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
  v36 = v21;
  v37 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v35 = v13;
  if ( a7 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a7[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v39 = v23;
  v40 = 0;
  if ( !a7 )
    v17 = "NULL";
  v38 = v17;
  v24 = a8 == 0LL;
  if ( a8 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a8[v25] );
    v18 = 2 * v25 + 2;
    v24 = a8 == 0LL;
  }
  v42 = v18;
  if ( v24 )
    v16 = L"NULL";
  v44 = &a9;
  v41 = v16;
  v46 = &a10;
  v43 = 0;
  v45 = 2LL;
  v47 = 2LL;
  if ( a11 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a11[v26] );
    v27 = (unsigned int)(v26 + 1);
  }
  else
  {
    v27 = 5LL;
  }
  v49 = v27;
  v50 = 0;
  if ( !a11 )
    v15 = "NULL";
  v48 = v15;
  if ( a12 )
  {
    do
      ++v19;
    while ( a12[v19] );
    v28 = v19 + 1;
  }
  else
  {
    v28 = 5;
  }
  v52 = v28;
  v53 = 0;
  v54 = &a13;
  v55 = 4LL;
  if ( !a12 )
    v14 = "NULL";
  v51 = v14;
  return sub_1400031E4(v27, &stru_14014AEA8, 0LL, 0xBu, &v30);
}
