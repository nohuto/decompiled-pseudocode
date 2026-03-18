/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x14061FE48
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x14061FA80 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x14061FE70 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpTraceDatabaseAllocate(__int64 a1, char a2)
{
  ULONG_PTR v2; // rcx

  v2 = 64LL;
  if ( (a2 & 4) == 0 )
    v2 = 256LL;
  return ExAllocatePool2(v2);
}
