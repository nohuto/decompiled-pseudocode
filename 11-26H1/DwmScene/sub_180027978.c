/*
 * XREFs of sub_180027978 @ 0x180027978
 * Callers:
 *     sub_1800277FC @ 0x1800277FC (sub_1800277FC.c)
 *     sub_18002F2EC @ 0x18002F2EC (sub_18002F2EC.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     sub_18005FFB4 @ 0x18005FFB4 (sub_18005FFB4.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180027978(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _DWORD *result; // rax

  result = *a4;
  *(_DWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
