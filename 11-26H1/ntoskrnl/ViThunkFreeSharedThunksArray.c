/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x140C4A05C
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140C49FB0 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140C4A08C (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x140C4DB2C (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ViThunkFreeSharedThunksArray(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x54496656u);
    *a1 = 0LL;
  }
}
