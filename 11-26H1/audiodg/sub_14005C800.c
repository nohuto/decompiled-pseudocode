/*
 * XREFs of sub_14005C800 @ 0x14005C800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005C800(__int64 a1, volatile __int64 *a2)
{
  _InterlockedExchange64(a2, *(_QWORD *)(a1 + 384));
  return 0LL;
}
