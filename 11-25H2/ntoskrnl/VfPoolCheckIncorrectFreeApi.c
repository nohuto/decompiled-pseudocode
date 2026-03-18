/*
 * XREFs of VfPoolCheckIncorrectFreeApi @ 0x140B8A3F8
 * Callers:
 *     ViIovExFreePoolWithTag_Entry @ 0x140698DE0 (ViIovExFreePoolWithTag_Entry.c)
 *     ViIovExFreePool_Entry @ 0x140698E00 (ViIovExFreePool_Entry.c)
 * Callees:
 *     VfIrpDatabaseCheckExFreePool @ 0x140B93E84 (VfIrpDatabaseCheckExFreePool.c)
 */

__int64 __fastcall VfPoolCheckIncorrectFreeApi(ULONG_PTR a1)
{
  return VfIrpDatabaseCheckExFreePool(a1);
}
