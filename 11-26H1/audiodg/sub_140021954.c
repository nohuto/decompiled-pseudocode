/*
 * XREFs of sub_140021954 @ 0x140021954
 * Callers:
 *     sub_140020D64 @ 0x140020D64 (sub_140020D64.c)
 *     sub_140052178 @ 0x140052178 (sub_140052178.c)
 *     sub_140052318 @ 0x140052318 (sub_140052318.c)
 *     sub_14005334C @ 0x14005334C (sub_14005334C.c)
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 *     sub_14005E820 @ 0x14005E820 (sub_14005E820.c)
 *     sub_140065A28 @ 0x140065A28 (sub_140065A28.c)
 *     sub_140065FB4 @ 0x140065FB4 (sub_140065FB4.c)
 *     sub_140087960 @ 0x140087960 (sub_140087960.c)
 * Callees:
 *     sub_140021998 @ 0x140021998 (sub_140021998.c)
 *     sub_1400219B0 @ 0x1400219B0 (sub_1400219B0.c)
 */

__int64 __fastcall sub_140021954(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = sub_140021998(a2);
  sub_1400219B0(a1, v4, v3);
  return a1;
}
