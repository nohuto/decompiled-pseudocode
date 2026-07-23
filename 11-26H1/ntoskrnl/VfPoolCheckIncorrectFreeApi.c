/*
 * XREFs of VfPoolCheckIncorrectFreeApi @ 0x140C3E5F4
 * Callers:
 *     ViIovExFreePoolWithTag_Entry @ 0x140646500 (ViIovExFreePoolWithTag_Entry.c)
 *     ViIovExFreePool_Entry @ 0x140646520 (ViIovExFreePool_Entry.c)
 * Callees:
 *     VfIrpDatabaseCheckExFreePool @ 0x140C3FBF8 (VfIrpDatabaseCheckExFreePool.c)
 */

__int64 __fastcall VfPoolCheckIncorrectFreeApi(ULONG_PTR a1)
{
  return VfIrpDatabaseCheckExFreePool(a1);
}
