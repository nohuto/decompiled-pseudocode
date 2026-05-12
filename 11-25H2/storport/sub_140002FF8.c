/*
 * XREFs of sub_140002FF8 @ 0x140002FF8
 * Callers:
 *     sub_140031B18 @ 0x140031B18 (sub_140031B18.c)
 *     sub_140185144 @ 0x140185144 (sub_140185144.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002FF8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        const char *a12,
        const wchar_t *a13)
{
  const wchar_t *v13; // r8
  __int64 v14; // rcx
  const char *v15; // rdx
  const char *v16; // r10
  int v17; // ebx
  const char *v18; // r11
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  bool v27; // zf
  _BYTE v29[16]; // [rsp+38h] [rbp-B1h] BYREF
  const wchar_t *v30; // [rsp+48h] [rbp-A1h]
  __int64 v31; // [rsp+50h] [rbp-99h]
  char *v32; // [rsp+58h] [rbp-91h]
  __int64 v33; // [rsp+60h] [rbp-89h]
  __int64 v34; // [rsp+68h] [rbp-81h]
  __int64 v35; // [rsp+70h] [rbp-79h]
  char *v36; // [rsp+78h] [rbp-71h]
  __int64 v37; // [rsp+80h] [rbp-69h]
  char *v38; // [rsp+88h] [rbp-61h]
  __int64 v39; // [rsp+90h] [rbp-59h]
  char *v40; // [rsp+98h] [rbp-51h]
  __int64 v41; // [rsp+A0h] [rbp-49h]
  const char *v42; // [rsp+A8h] [rbp-41h]
  int v43; // [rsp+B0h] [rbp-39h]
  int v44; // [rsp+B4h] [rbp-35h]
  const char *v45; // [rsp+B8h] [rbp-31h]
  int v46; // [rsp+C0h] [rbp-29h]
  int v47; // [rsp+C4h] [rbp-25h]
  const char *v48; // [rsp+C8h] [rbp-21h]
  int v49; // [rsp+D0h] [rbp-19h]
  int v50; // [rsp+D4h] [rbp-15h]
  const wchar_t *v51; // [rsp+D8h] [rbp-11h]
  int v52; // [rsp+E0h] [rbp-9h]
  int v53; // [rsp+E4h] [rbp-5h]

  v13 = a13;
  v14 = -1LL;
  v15 = a12;
  v16 = a11;
  v17 = 10;
  v18 = a10;
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
  v31 = v20;
  v32 = &a5;
  v34 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v30 = a4;
  v36 = &a7;
  v38 = &a8;
  v40 = &a9;
  v33 = 4LL;
  v35 = 16LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 1LL;
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
  v43 = v22;
  v44 = 0;
  if ( !a10 )
    v18 = "NULL";
  v42 = v18;
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
  v46 = v24;
  v47 = 0;
  if ( !a11 )
    v16 = "NULL";
  v45 = v16;
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
  v49 = v26;
  v50 = 0;
  if ( !a12 )
    v15 = "NULL";
  v48 = v15;
  v27 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v14;
    while ( a13[v14] );
    v17 = 2 * v14 + 2;
    v27 = a13 == 0LL;
  }
  if ( v27 )
    v13 = L"NULL";
  v52 = v17;
  v51 = v13;
  v53 = 0;
  return sub_1400031E4(v14, &unk_140148938, 0LL, 11LL, v29);
}
