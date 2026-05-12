/*
 * XREFs of sub_140136A88 @ 0x140136A88
 * Callers:
 *     sub_140134D18 @ 0x140134D18 (sub_140134D18.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 __fastcall sub_140136A88(int **a1, int a2, __int64 a3)
{
  int v4; // edi
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  v4 = (int)a1;
  sub_1400859FC(*a1, "DeassignNamespaceLocking", a3, 0, 0LL, 0LL);
  return sub_140137E38(v4, a2, 0, 2053, (__int64)sub_1401362A0, (__int64)&v6, 0LL, 0LL, 0LL, 0LL);
}
