/*
 * XREFs of sub_18004F428 @ 0x18004F428
 * Callers:
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004F428(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8

  v3 = a2;
  LOBYTE(a2) = 10;
  LOBYTE(v4) = std::ios::widen(a1 + *(int *)(*(_QWORD *)a1 + 4LL), a2);
  return sub_18004F2B8(a1, v3, v4);
}
