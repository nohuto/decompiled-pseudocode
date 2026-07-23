/*
 * XREFs of MiUnlinkHardLimitWorkingSet @ 0x1402EFB08
 * Callers:
 *     MiUnlinkAllAgingEntries @ 0x1402EFA7C (MiUnlinkAllAgingEntries.c)
 *     MiEnforceWorkingSetLimit @ 0x1402F0258 (MiEnforceWorkingSetLimit.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     MiRemoveEntryNotifySentinel @ 0x1402EE30C (MiRemoveEntryNotifySentinel.c)
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
                 (_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174)) + 18368LL),
                 (unsigned __int64 *)result[5]);
      *v2 = 0LL;
    }
  }
  return result;
}
