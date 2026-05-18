/*
 * XREFs of sub_180018628 @ 0x180018628
 * Callers:
 *     sub_18000E830 @ 0x18000E830 (sub_18000E830.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18000E680 @ 0x18000E680 (sub_18000E680.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180018628(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = off_1800EE030;
  v2 = (__int64 *)(a1 + 136);
  *(_QWORD *)(a1 + 16) = off_1800EE1D0;
  sub_18000F938((__int64 *)(a1 + 136));
  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 != *(_QWORD *)(a1 + 120) )
    *(_QWORD *)(a1 + 120) = v3;
  if ( a1 == qword_1801C8518 )
    qword_1801C8518 = 0LL;
  sub_18000F938(v2);
  v4 = *(void **)(a1 + 112);
  if ( v4 )
  {
    sub_18000E26C(v4, (*(_QWORD *)(a1 + 128) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    sub_180010EC8(v5);
  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
    sub_180010EC8(v6);
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 )
    sub_180010EC8(v7);
  sub_18000E680((_QWORD *)(a1 + 56));
  sub_18000F938((__int64 *)(a1 + 48));
  sub_18000F938((__int64 *)(a1 + 40));
  result = sub_18000F938((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
