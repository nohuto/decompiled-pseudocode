/*
 * XREFs of sub_1400DBB2C @ 0x1400DBB2C
 * Callers:
 *     sub_1400DE17C @ 0x1400DE17C (sub_1400DE17C.c)
 *     sub_1400DE5E8 @ 0x1400DE5E8 (sub_1400DE5E8.c)
 *     sub_1400DEB08 @ 0x1400DEB08 (sub_1400DEB08.c)
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 *     sub_1400E3180 @ 0x1400E3180 (sub_1400E3180.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 *     sub_1400E6EA4 @ 0x1400E6EA4 (sub_1400E6EA4.c)
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400DBB2C(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10)
{
  const wchar_t *v10; // rcx
  const char *v11; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // edx
  int v16; // eax
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-69h] BYREF
  int *v19; // [rsp+40h] [rbp-59h]
  __int64 v20; // [rsp+48h] [rbp-51h]
  __int64 v21; // [rsp+50h] [rbp-49h]
  __int64 v22; // [rsp+58h] [rbp-41h]
  const wchar_t *v23; // [rsp+60h] [rbp-39h]
  int v24; // [rsp+68h] [rbp-31h]
  int v25; // [rsp+6Ch] [rbp-2Dh]
  const char *v26; // [rsp+70h] [rbp-29h]
  int v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+7Ch] [rbp-1Dh]
  char *v29; // [rsp+80h] [rbp-19h]
  __int64 v30; // [rsp+88h] [rbp-11h]
  char *v31; // [rsp+90h] [rbp-9h]
  __int64 v32; // [rsp+98h] [rbp-1h]
  char *v33; // [rsp+A0h] [rbp+7h]
  __int64 v34; // [rsp+A8h] [rbp+Fh]
  int v35; // [rsp+E8h] [rbp+4Fh] BYREF

  v35 = a4;
  v10 = a6;
  v11 = a7;
  v19 = &v35;
  v21 = a5;
  v13 = -1LL;
  v20 = 4LL;
  v22 = 16LL;
  if ( a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a6[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v24 = v15;
  v25 = 0;
  if ( !a6 )
    v10 = L"NULL";
  v23 = v10;
  if ( a7 )
  {
    do
      ++v13;
    while ( a7[v13] );
    v16 = v13 + 1;
  }
  else
  {
    v16 = 5;
  }
  v27 = v16;
  v28 = 0;
  v30 = 2LL;
  v29 = &a8;
  if ( !a7 )
    v11 = "NULL";
  v26 = v11;
  v31 = &a9;
  v32 = 2LL;
  v33 = &a10;
  v34 = 4LL;
  return sub_1400031E4((__int64)"NULL", a2, 0LL, 8u, &v18);
}
