/*
 * XREFs of sub_1400C9C4C @ 0x1400C9C4C
 * Callers:
 *     sub_1400D41C0 @ 0x1400D41C0 (sub_1400D41C0.c)
 *     sub_1400D4538 @ 0x1400D4538 (sub_1400D4538.c)
 *     sub_140192178 @ 0x140192178 (sub_140192178.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C9C4C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        const char *a9,
        const char *a10,
        const char *a11)
{
  const wchar_t *v11; // rdx
  const char *v12; // r11
  const char *v13; // r8
  const char *v14; // r9
  const char *v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+38h] [rbp-81h] BYREF
  int *v28; // [rsp+48h] [rbp-71h]
  __int64 v29; // [rsp+50h] [rbp-69h]
  __int64 v30; // [rsp+58h] [rbp-61h]
  __int64 v31; // [rsp+60h] [rbp-59h]
  const wchar_t *v32; // [rsp+68h] [rbp-51h]
  int v33; // [rsp+70h] [rbp-49h]
  int v34; // [rsp+74h] [rbp-45h]
  const char *v35; // [rsp+78h] [rbp-41h]
  int v36; // [rsp+80h] [rbp-39h]
  int v37; // [rsp+84h] [rbp-35h]
  char *v38; // [rsp+88h] [rbp-31h]
  __int64 v39; // [rsp+90h] [rbp-29h]
  const char *v40; // [rsp+98h] [rbp-21h]
  int v41; // [rsp+A0h] [rbp-19h]
  int v42; // [rsp+A4h] [rbp-15h]
  const char *v43; // [rsp+A8h] [rbp-11h]
  int v44; // [rsp+B0h] [rbp-9h]
  int v45; // [rsp+B4h] [rbp-5h]
  const char *v46; // [rsp+B8h] [rbp-1h]
  int v47; // [rsp+C0h] [rbp+7h]
  int v48; // [rsp+C4h] [rbp+Bh]
  int v49; // [rsp+100h] [rbp+47h] BYREF

  v49 = a4;
  v11 = a6;
  v12 = a11;
  v13 = a10;
  v14 = a9;
  v15 = a7;
  v28 = &v49;
  v30 = a5;
  v16 = -1LL;
  v29 = 4LL;
  v31 = 16LL;
  if ( a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a6[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v33 = v18;
  v34 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v32 = v11;
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5;
  }
  v36 = v20;
  v37 = 0;
  if ( !a7 )
    v15 = "NULL";
  v39 = 2LL;
  v35 = v15;
  v38 = &a8;
  if ( a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a9[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v41 = v22;
  v42 = 0;
  if ( !a9 )
    v14 = "NULL";
  v40 = v14;
  if ( a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a10[v23] );
    v24 = (unsigned int)(v23 + 1);
  }
  else
  {
    v24 = 5LL;
  }
  v44 = v24;
  v45 = 0;
  if ( !a10 )
    v13 = "NULL";
  v43 = v13;
  if ( a11 )
  {
    do
      ++v16;
    while ( a11[v16] );
    v25 = v16 + 1;
  }
  else
  {
    v25 = 5;
  }
  v47 = v25;
  v48 = 0;
  if ( !a11 )
    v12 = "NULL";
  v46 = v12;
  return sub_1400031E4(v24, &stru_14014A8B0, 0LL, 9u, &v27);
}
