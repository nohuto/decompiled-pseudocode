/*
 * XREFs of sub_180043168 @ 0x180043168
 * Callers:
 *     sub_180042E1C @ 0x180042E1C (sub_180042E1C.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 * Callees:
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 */

bool __fastcall sub_180043168(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return sub_180042544(a1 + 128, (__int64)&v3) != *(_QWORD *)(a1 + 128);
}
