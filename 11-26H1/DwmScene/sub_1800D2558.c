/*
 * XREFs of sub_1800D2558 @ 0x1800D2558
 * Callers:
 *     sub_1800D20B4 @ 0x1800D20B4 (sub_1800D20B4.c)
 *     sub_1800D44E0 @ 0x1800D44E0 (sub_1800D44E0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800D2558(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _DWORD *result; // rax

  result = *a4;
  *(_DWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}
