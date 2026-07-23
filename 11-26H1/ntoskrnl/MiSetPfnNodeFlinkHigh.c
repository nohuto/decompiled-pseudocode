/*
 * XREFs of MiSetPfnNodeFlinkHigh @ 0x1402AC310
 * Callers:
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1402ABBBC (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402ABC50 (MiInsertSecondaryListStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402AE1C8 (MiExclusiveInsertPfnChainInList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnNodeFlinkHigh(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r9
  __int64 v3; // r10
  signed __int64 result; // rax
  signed __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2 << 55;
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             (a2 << 55) ^ (v2 ^ (a2 << 55)) & 0xF07FFFFFFFFFFFFFuLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v3 ^ (result ^ v3) & 0xF07FFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
