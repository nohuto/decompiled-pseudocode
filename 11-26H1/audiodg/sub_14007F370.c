/*
 * XREFs of sub_14007F370 @ 0x14007F370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall sub_14007F370(__int64 a1, __int64 a2))()
{
  __int64 (__fastcall **result)(); // rax

  result = off_1400BDB28;
  *(_QWORD *)a2 = off_1400BDB28;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
