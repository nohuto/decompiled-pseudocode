/*
 * XREFs of sub_14002385C @ 0x14002385C
 * Callers:
 *     sub_140024540 @ 0x140024540 (sub_140024540.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14002385C(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  _BYTE v14[32]; // [rsp+30h] [rbp-51h] BYREF
  _WORD *v15; // [rsp+50h] [rbp-31h]
  int v16; // [rsp+58h] [rbp-29h]
  int v17; // [rsp+5Ch] [rbp-25h]
  __int64 v18; // [rsp+60h] [rbp-21h]
  __int64 v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  __int64 v25; // [rsp+98h] [rbp+17h]

  v24 = a9;
  v22 = a8;
  v20 = a7;
  v18 = a6;
  v25 = 8LL;
  v23 = 8LL;
  v21 = 8LL;
  v10 = *a5;
  v19 = 4LL;
  if ( v10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &unk_1400C7450;
    v12 = 2;
  }
  v16 = v12;
  v15 = v10;
  v17 = 0;
  return sub_1400239C4(a1, a2, a3, 0, 7, (__int64)v14);
}
