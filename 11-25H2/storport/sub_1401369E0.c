/*
 * XREFs of sub_1401369E0 @ 0x1401369E0
 * Callers:
 *     sub_1401348FC @ 0x1401348FC (sub_1401348FC.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 __fastcall sub_1401369E0(int **a1, int a2, int a3, __int64 a4)
{
  int v6; // esi
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v6 = (int)a1;
  sub_1400859FC(*a1, "AssignNamespaceLocking", a3, 0, 0LL, 0LL);
  return sub_140137E38(v6, a2, 0, 2052, (__int64)sub_140136240, (__int64)&v8, 0LL, 0LL, (__int64)sub_1401363F0, a4);
}
