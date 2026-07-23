/*
 * XREFs of SepInitializeSharedSidMap @ 0x14081CD6C
 * Callers:
 *     SepVariableInitialization @ 0x140CE1170 (SepVariableInitialization.c)
 * Callees:
 *     RtlCreateHashTable @ 0x1404B21E0 (RtlCreateHashTable.c)
 */

__int64 SepInitializeSharedSidMap()
{
  PRTL_DYNAMIC_HASH_TABLE *p_WaitListHead; // rcx

  p_WaitListHead = (PRTL_DYNAMIC_HASH_TABLE *)&g_SepSidMapping->Header.WaitListHead;
  *(_QWORD *)&g_SepSidMapping->Header.Lock = 0LL;
  *p_WaitListHead = 0LL;
  return RtlCreateHashTable(p_WaitListHead, 0, 0) == 0 ? 0xC0000017 : 0;
}
