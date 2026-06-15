/*
 * XREFs of sub_140033D30 @ 0x140033D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140073954 @ 0x140073954 (sub_140073954.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140033D30(__int64 a1)
{
  __int64 result; // rax

  result = sub_1400B6010(*(_QWORD *)(a1 + 176));
  if ( (int)result >= 0 )
    _InterlockedExchange((volatile __int32 *)(a1 + 264), 1);
  return result;
}
