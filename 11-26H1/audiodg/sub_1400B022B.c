/*
 * XREFs of sub_1400B022B @ 0x1400B022B
 * Callers:
 *     <none>
 * Callees:
 *     sub_140047870 @ 0x140047870 (sub_140047870.c)
 */

_QWORD *__fastcall sub_1400B022B(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_140047870(*(_QWORD **)(a2 + 80));
  }
  return result;
}
