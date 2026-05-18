/*
 * XREFs of sub_18001CD34 @ 0x18001CD34
 * Callers:
 *     sub_18001CFE8 @ 0x18001CFE8 (sub_18001CFE8.c)
 *     sub_18002E5CC @ 0x18002E5CC (sub_18002E5CC.c)
 *     sub_18002E884 @ 0x18002E884 (sub_18002E884.c)
 *     sub_18002F750 @ 0x18002F750 (sub_18002F750.c)
 *     sub_18004BDD8 @ 0x18004BDD8 (sub_18004BDD8.c)
 *     sub_18004BEA0 @ 0x18004BEA0 (sub_18004BEA0.c)
 *     sub_18004BFB8 @ 0x18004BFB8 (sub_18004BFB8.c)
 *     sub_18004C408 @ 0x18004C408 (sub_18004C408.c)
 *     sub_18004C514 @ 0x18004C514 (sub_18004C514.c)
 *     sub_18004C620 @ 0x18004C620 (sub_18004C620.c)
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 *     sub_18004E0D4 @ 0x18004E0D4 (sub_18004E0D4.c)
 *     sub_18004E128 @ 0x18004E128 (sub_18004E128.c)
 *     sub_18004F194 @ 0x18004F194 (sub_18004F194.c)
 *     sub_180075850 @ 0x180075850 (sub_180075850.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 */

bool __fastcall sub_18001CD34(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r8

  v2 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    sub_1800148EC(a2 + 32);
    v4 = sub_1800148EC(v3);
    return (int)sub_18001CF60(v4, *(_QWORD *)(v6 + 16), v7, *(_QWORD *)(v5 + 48)) >= 0;
  }
  return v2;
}
