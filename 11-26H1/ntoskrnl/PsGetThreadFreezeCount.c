/*
 * XREFs of PsGetThreadFreezeCount @ 0x140477490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadFreezeCount(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 544) + 336LL) + ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) >> 3) & 1u);
}
