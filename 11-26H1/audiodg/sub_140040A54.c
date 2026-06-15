/*
 * XREFs of sub_140040A54 @ 0x140040A54
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_140040A54(__int64 a1)
{
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), 0LL);
}
