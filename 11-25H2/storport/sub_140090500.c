/*
 * XREFs of sub_140090500 @ 0x140090500
 * Callers:
 *     sub_140030B40 @ 0x140030B40 (sub_140030B40.c)
 *     sub_140031178 @ 0x140031178 (sub_140031178.c)
 *     sub_140096368 @ 0x140096368 (sub_140096368.c)
 *     sub_140098650 @ 0x140098650 (sub_140098650.c)
 *     sub_14009DC38 @ 0x14009DC38 (sub_14009DC38.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140090500(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        __int64 a8,
        const char *a9,
        const char *a10,
        const char *a11,
        char a12,
        char a13)
{
  const char *v13; // r10
  __int64 v14; // rcx
  const char *v15; // rdx
  const char *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-B1h] BYREF
  const wchar_t *v26; // [rsp+40h] [rbp-A1h]
  int v27; // [rsp+48h] [rbp-99h]
  int v28; // [rsp+4Ch] [rbp-95h]
  char *v29; // [rsp+50h] [rbp-91h]
  __int64 v30; // [rsp+58h] [rbp-89h]
  __int64 v31; // [rsp+60h] [rbp-81h]
  __int64 v32; // [rsp+68h] [rbp-79h]
  char *v33; // [rsp+70h] [rbp-71h]
  __int64 v34; // [rsp+78h] [rbp-69h]
  __int64 v35; // [rsp+80h] [rbp-61h]
  __int64 v36; // [rsp+88h] [rbp-59h]
  const char *v37; // [rsp+90h] [rbp-51h]
  int v38; // [rsp+98h] [rbp-49h]
  int v39; // [rsp+9Ch] [rbp-45h]
  const char *v40; // [rsp+A0h] [rbp-41h]
  int v41; // [rsp+A8h] [rbp-39h]
  int v42; // [rsp+ACh] [rbp-35h]
  const char *v43; // [rsp+B0h] [rbp-31h]
  int v44; // [rsp+B8h] [rbp-29h]
  int v45; // [rsp+BCh] [rbp-25h]
  char *v46; // [rsp+C0h] [rbp-21h]
  __int64 v47; // [rsp+C8h] [rbp-19h]
  char *v48; // [rsp+D0h] [rbp-11h]
  __int64 v49; // [rsp+D8h] [rbp-9h]

  v13 = a11;
  v14 = -1LL;
  v15 = a10;
  v16 = a9;
  if ( a4 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a4[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v27 = v18;
  v28 = 0;
  v30 = 4LL;
  v29 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v31 = a6;
  v33 = &a7;
  v26 = a4;
  v35 = a8;
  v32 = 16LL;
  v34 = 1LL;
  v36 = 16LL;
  if ( a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a9[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5;
  }
  v38 = v20;
  v39 = 0;
  if ( !a9 )
    v16 = "NULL";
  v37 = v16;
  if ( a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a10[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v41 = v22;
  v42 = 0;
  if ( !a10 )
    v15 = "NULL";
  v40 = v15;
  if ( a11 )
  {
    do
      ++v14;
    while ( a11[v14] );
    v23 = (unsigned int)(v14 + 1);
  }
  else
  {
    v23 = 5LL;
  }
  v44 = v23;
  v46 = &a12;
  v45 = 0;
  v48 = &a13;
  v47 = 4LL;
  if ( !a11 )
    v13 = "NULL";
  v43 = v13;
  v49 = 4LL;
  return sub_1400031E4(v23, &stru_14014AFB8, 0LL, 0xBu, &v25);
}
