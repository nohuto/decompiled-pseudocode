/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x140622E98
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x140622AD0 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140622EC0 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpTraceDatabaseAllocate(__int64 a1, char a2)
{
  ULONG_PTR v2; // rcx

  v2 = 64LL;
  if ( (a2 & 4) == 0 )
    v2 = 256LL;
  return ExAllocatePool2(v2);
}
