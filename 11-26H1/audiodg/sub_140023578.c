/*
 * XREFs of sub_140023578 @ 0x140023578
 * Callers:
 *     sub_140033E70 @ 0x140033E70 (sub_140033E70.c)
 *     sub_140072BD0 @ 0x140072BD0 (sub_140072BD0.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140023578(int a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  _WORD *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _BYTE v10[32]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v6 = *a5;
  if ( *a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v6 = &unk_1400C7450;
    v8 = 2;
  }
  v12 = v8;
  v11 = v6;
  v13 = 0;
  return sub_1400239C4(a1, a2, 0, 0, 3, (__int64)v10);
}
