/*
 * XREFs of sub_14003F8D8 @ 0x14003F8D8
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 *     sub_1400A5BE0 @ 0x1400A5BE0 (sub_1400A5BE0.c)
 *     sub_1400A5CC0 @ 0x1400A5CC0 (sub_1400A5CC0.c)
 *     sub_1400CC020 @ 0x1400CC020 (sub_1400CC020.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_14003F8D8(union _SLIST_HEADER *a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)(unsigned int)_InterlockedCompareExchange(
                                         (volatile signed __int32 *)(a2 + 16),
                                         134684677,
                                         134684676);
  if ( (_DWORD)result != 134684676 )
  {
    *(_DWORD *)(a2 + 16) = 134684675;
    return ExpInterlockedPushEntrySList(a1 + 5, (PSLIST_ENTRY)a2);
  }
  return result;
}
