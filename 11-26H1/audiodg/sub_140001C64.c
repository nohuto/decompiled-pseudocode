/*
 * XREFs of sub_140001C64 @ 0x140001C64
 * Callers:
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140001C64(int a1, int a2, __int64 a3, __int64 a4, void **a5, __int64 a6, __int64 a7)
{
  _BYTE *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  _BYTE v12[32]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE *v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  __int64 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+78h] [rbp-20h]

  v18 = a7;
  v16 = a6;
  v19 = 4LL;
  v17 = 4LL;
  v8 = *a5;
  if ( *a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v8 = &unk_1400C67A8;
    v10 = 1;
  }
  v14 = v10;
  v13 = v8;
  v15 = 0;
  return sub_1400239C4(a1, a2, 0, 0, 5, (__int64)v12);
}
