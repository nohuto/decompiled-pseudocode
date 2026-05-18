/*
 * XREFs of sub_18004B768 @ 0x18004B768
 * Callers:
 *     sub_18004BDD8 @ 0x18004BDD8 (sub_18004BDD8.c)
 *     sub_18005FD88 @ 0x18005FD88 (sub_18005FD88.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_1800253EC @ 0x1800253EC (sub_1800253EC.c)
 *     sub_18004C818 @ 0x18004C818 (sub_18004C818.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004B768(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 i; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  sub_1800253EC((_QWORD *)a1, a2);
  sub_18004C818(v6, *(_QWORD *)(a1 + 8) + 32LL, a4);
  sub_180013074(*(__int64 **)(a1 + 8), &v9);
  sub_180013074((__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), &v9);
  sub_180013074((__int64 *)(*(_QWORD *)(a1 + 8) + 16LL), &v9);
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + *(_QWORD *)(a1 + 8) + 24) = 0;
  return a1;
}
