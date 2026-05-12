/*
 * XREFs of sub_1400C9524 @ 0x1400C9524
 * Callers:
 *     sub_1400D35C8 @ 0x1400D35C8 (sub_1400D35C8.c)
 *     sub_1400D67D4 @ 0x1400D67D4 (sub_1400D67D4.c)
 *     sub_1400DA470 @ 0x1400DA470 (sub_1400DA470.c)
 *     sub_1400DA840 @ 0x1400DA840 (sub_1400DA840.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C9524(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-39h] BYREF
  int *v13; // [rsp+40h] [rbp-29h]
  __int64 v14; // [rsp+48h] [rbp-21h]
  __int64 v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  const wchar_t *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  char *v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  char *v22; // [rsp+80h] [rbp+17h]
  __int64 v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+C8h] [rbp+5Fh] BYREF

  v24 = a4;
  v8 = a6;
  v13 = &v24;
  v15 = a5;
  v14 = 4LL;
  v16 = 16LL;
  if ( a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a6[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v18 = v10;
  v19 = 0;
  v20 = &a7;
  v21 = 4LL;
  if ( !a6 )
    v8 = L"NULL";
  v22 = &a8;
  v17 = v8;
  v23 = 4LL;
  return sub_1400031E4((__int64)v8, a2, 0LL, 6u, &v12);
}
