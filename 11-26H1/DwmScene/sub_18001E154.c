/*
 * XREFs of sub_18001E154 @ 0x18001E154
 * Callers:
 *     sub_1800C4F18 @ 0x1800C4F18 (sub_1800C4F18.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

__int64 __fastcall sub_18001E154(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = sub_1800148EC(a2);
  return sub_18001E298(v4, v2, *(_QWORD *)(v3 + 16));
}
