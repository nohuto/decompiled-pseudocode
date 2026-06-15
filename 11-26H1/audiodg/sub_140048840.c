/*
 * XREFs of sub_140048840 @ 0x140048840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140048840(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 - 336);
  *(_QWORD *)(a1 + 48) += a2;
  _InterlockedExchange64((volatile __int64 *)(v2 + 168), *(_QWORD *)(a1 + 48));
  return 0LL;
}
