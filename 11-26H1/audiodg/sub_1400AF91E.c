/*
 * XREFs of sub_1400AF91E @ 0x1400AF91E
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003AF74 @ 0x14003AF74 (sub_14003AF74.c)
 */

_QWORD *__fastcall sub_1400AF91E(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_14003AF74(*(_QWORD **)(a2 + 80));
  }
  return result;
}
