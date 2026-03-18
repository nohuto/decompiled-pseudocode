/*
 * XREFs of VfPoolCheckIncorrectFreeApi @ 0x140C385E4
 * Callers:
 *     ViIovExFreePoolWithTag_Entry @ 0x140642920 (ViIovExFreePoolWithTag_Entry.c)
 *     ViIovExFreePool_Entry @ 0x140642940 (ViIovExFreePool_Entry.c)
 * Callees:
 *     VfIrpDatabaseCheckExFreePool @ 0x140C39BE8 (VfIrpDatabaseCheckExFreePool.c)
 */

__int64 __fastcall VfPoolCheckIncorrectFreeApi(ULONG_PTR a1)
{
  return VfIrpDatabaseCheckExFreePool(a1);
}
