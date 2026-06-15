/*
 * XREFs of sub_140064AE0 @ 0x140064AE0
 * Callers:
 *     sub_140064EE0 @ 0x140064EE0 (sub_140064EE0.c)
 * Callees:
 *     sub_14005DF9C @ 0x14005DF9C (sub_14005DF9C.c)
 */

__int64 __fastcall sub_140064AE0(__int64 a1)
{
  __int64 result; // rax

  result = sub_14005DF9C((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 20) = -1073741823;
  return result;
}
