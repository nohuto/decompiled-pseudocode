/*
 * XREFs of MiUnlinkHardLimitWorkingSet @ 0x14030DA88
 * Callers:
 *     MiUnlinkAllAgingEntries @ 0x14030D9FC (MiUnlinkAllAgingEntries.c)
 *     MiEnforceWorkingSetLimit @ 0x14030E1D8 (MiEnforceWorkingSetLimit.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403BC3E8 (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     MiRemoveEntryNotifySentinel @ 0x14030C28C (MiRemoveEntryNotifySentinel.c)
 */

unsigned __int64 *__fastcall MiUnlinkHardLimitWorkingSet(__int64 a1)
{
  unsigned __int64 *result; // rax
  _QWORD *v2; // rbx

  result = *(unsigned __int64 **)(a1 + 16);
  v2 = (_QWORD *)result[5];
  if ( v2 )
  {
    if ( *v2 )
    {
      result = MiRemoveEntryNotifySentinel(
                 (_QWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174)) + 18368LL),
                 (unsigned __int64 *)result[5]);
      *v2 = 0LL;
    }
  }
  return result;
}
