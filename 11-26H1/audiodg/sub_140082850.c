/*
 * XREFs of sub_140082850 @ 0x140082850
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001FA30 @ 0x14001FA30 (sub_14001FA30.c)
 */

__int64 __fastcall sub_140082850(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 952), 0LL);
  *(_QWORD *)(a1 + 960) = v1;
  if ( v1 )
    v1 ^= *(_QWORD *)(a1 + 976);
  *(_QWORD *)(a1 + 1056) = v1;
  result = sub_14001FA30(a1 + 384);
  *(_QWORD *)(v3 + 1048) = result;
  return result;
}
