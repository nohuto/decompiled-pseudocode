/*
 * XREFs of sub_14001FA30 @ 0x14001FA30
 * Callers:
 *     sub_140082850 @ 0x140082850 (sub_140082850.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14001FA30(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedExchange64((volatile __int64 *)(a1 + 288), 0LL);
  *(_QWORD *)(a1 + 296) = result;
  if ( result )
    return *(_QWORD *)(a1 + 312) ^ result;
  return result;
}
