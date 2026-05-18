/*
 * XREFs of sub_180099C30 @ 0x180099C30
 * Callers:
 *     sub_180099A9C @ 0x180099A9C (sub_180099A9C.c)
 * Callees:
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 */

__int64 __fastcall sub_180099C30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9

  result = sub_18001D260(a2, a3);
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(v4 + 32);
  *(_QWORD *)(v5 + 48) = *(_QWORD *)(v4 + 48);
  return result;
}
