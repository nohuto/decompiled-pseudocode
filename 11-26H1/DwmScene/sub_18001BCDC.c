/*
 * XREFs of sub_18001BCDC @ 0x18001BCDC
 * Callers:
 *     sub_18001874C @ 0x18001874C (sub_18001874C.c)
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 *     sub_18001D290 @ 0x18001D290 (sub_18001D290.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001BCDC(_OWORD *a1, __int64 a2)
{
  *a1 = *(_OWORD *)a2;
  a1[1] = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
}
