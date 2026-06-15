/*
 * XREFs of sub_1400497F0 @ 0x1400497F0
 * Callers:
 *     sub_1400AF90C @ 0x1400AF90C (sub_1400AF90C.c)
 *     sub_1400B0219 @ 0x1400B0219 (sub_1400B0219.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400497F0(_DWORD *a1)
{
  EnterCriticalSection(&stru_1400E7CE8);
  *a1 = 0;
  LeaveCriticalSection(&stru_1400E7CE8);
  return sub_140049900();
}
