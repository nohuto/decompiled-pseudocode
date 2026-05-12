/*
 * XREFs of sub_1400DB728 @ 0x1400DB728
 * Callers:
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 *     sub_1400E3180 @ 0x1400E3180 (sub_1400E3180.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400DB728(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  const wchar_t *v11; // rcx
  const char *v12; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // edx
  int v17; // eax
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-81h] BYREF
  int *v20; // [rsp+40h] [rbp-71h]
  __int64 v21; // [rsp+48h] [rbp-69h]
  __int64 v22; // [rsp+50h] [rbp-61h]
  __int64 v23; // [rsp+58h] [rbp-59h]
  const wchar_t *v24; // [rsp+60h] [rbp-51h]
  int v25; // [rsp+68h] [rbp-49h]
  int v26; // [rsp+6Ch] [rbp-45h]
  const char *v27; // [rsp+70h] [rbp-41h]
  int v28; // [rsp+78h] [rbp-39h]
  int v29; // [rsp+7Ch] [rbp-35h]
  char *v30; // [rsp+80h] [rbp-31h]
  __int64 v31; // [rsp+88h] [rbp-29h]
  char *v32; // [rsp+90h] [rbp-21h]
  __int64 v33; // [rsp+98h] [rbp-19h]
  char *v34; // [rsp+A0h] [rbp-11h]
  __int64 v35; // [rsp+A8h] [rbp-9h]
  char *v36; // [rsp+B0h] [rbp-1h]
  __int64 v37; // [rsp+B8h] [rbp+7h]
  int v38; // [rsp+F8h] [rbp+47h] BYREF

  v38 = a4;
  v11 = a6;
  v12 = a7;
  v20 = &v38;
  v22 = a5;
  v14 = -1LL;
  v21 = 4LL;
  v23 = 16LL;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a6[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v25 = v16;
  v26 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v24 = v11;
  if ( a7 )
  {
    do
      ++v14;
    while ( a7[v14] );
    v17 = v14 + 1;
  }
  else
  {
    v17 = 5;
  }
  v28 = v17;
  v29 = 0;
  v31 = 2LL;
  v30 = &a8;
  if ( !a7 )
    v12 = "NULL";
  v27 = v12;
  v32 = &a9;
  v33 = 2LL;
  v34 = &a10;
  v35 = 4LL;
  v36 = &a11;
  v37 = 4LL;
  return sub_1400031E4((__int64)"NULL", a2, 0LL, 9u, &v19);
}
