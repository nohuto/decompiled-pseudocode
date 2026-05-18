/*
 * XREFs of sub_180027D40 @ 0x180027D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800281D0 @ 0x1800281D0 (sub_1800281D0.c)
 *     sub_180029154 @ 0x180029154 (sub_180029154.c)
 */

__int64 __fastcall sub_180027D40(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_180029154(a1, *(unsigned int *)(*a2 + 244LL));
  if ( !(_BYTE)result )
    return sub_1800281D0(a1, *a2);
  return result;
}
