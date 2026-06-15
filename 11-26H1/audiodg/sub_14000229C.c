/*
 * XREFs of sub_14000229C @ 0x14000229C
 * Callers:
 *     sub_140072EF0 @ 0x140072EF0 (sub_140072EF0.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000229C(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        void **a10)
{
  _WORD *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  _BYTE v16[32]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  __int64 v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  __int64 v21; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  __int64 v23; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  __int64 v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  _WORD *v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]

  v11 = *a10;
  if ( *a10 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_1400C7450;
    v13 = 2;
  }
  v28 = v13;
  v27 = v11;
  v29 = 0;
  v26 = 16LL;
  v14 = *a9;
  v23 = a8;
  v21 = a7;
  v19 = a6;
  v25 = v14;
  v17 = a5;
  v18 = 8LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 4LL;
  return sub_1400239C4(a1, a2, 0, 0, 8, (__int64)v16);
}
