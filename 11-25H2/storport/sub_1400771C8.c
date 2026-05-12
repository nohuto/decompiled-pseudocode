/*
 * XREFs of sub_1400771C8 @ 0x1400771C8
 * Callers:
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_1401284F0 @ 0x1401284F0 (sub_1401284F0.c)
 *     sub_140128E40 @ 0x140128E40 (sub_140128E40.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400771C8(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        const wchar_t *a8)
{
  const wchar_t *v8; // rdx
  __int64 v9; // rcx
  int v11; // r8d
  __int64 v12; // rax
  int v13; // eax
  bool v14; // zf
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v17; // [rsp+40h] [rbp-29h]
  int v18; // [rsp+48h] [rbp-21h]
  int v19; // [rsp+4Ch] [rbp-1Dh]
  char *v20; // [rsp+50h] [rbp-19h]
  __int64 v21; // [rsp+58h] [rbp-11h]
  __int64 v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  char *v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  const wchar_t *v26; // [rsp+80h] [rbp+17h]
  int v27; // [rsp+88h] [rbp+1Fh]
  int v28; // [rsp+8Ch] [rbp+23h]

  v8 = a8;
  v9 = -1LL;
  v11 = 10;
  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v18 = v13;
  v19 = 0;
  v20 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v22 = a6;
  v17 = a4;
  v24 = &a7;
  v21 = 4LL;
  v23 = 16LL;
  v25 = 4LL;
  v14 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v9;
    while ( a8[v9] );
    v11 = 2 * v9 + 2;
    v14 = a8 == 0LL;
  }
  if ( v14 )
    v8 = L"NULL";
  v27 = v11;
  v26 = v8;
  v28 = 0;
  return sub_1400031E4(v9, &stru_14014AD48, a3, 6u, &v16);
}
