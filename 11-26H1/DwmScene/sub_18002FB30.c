/*
 * XREFs of sub_18002FB30 @ 0x18002FB30
 * Callers:
 *     sub_18002F750 @ 0x18002F750 (sub_18002F750.c)
 * Callees:
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 */

__int64 __fastcall sub_18002FB30(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v5; // r8

  result = sub_18001D260(a2, *a4);
  *(_DWORD *)(v5 + 32) = 0;
  return result;
}
