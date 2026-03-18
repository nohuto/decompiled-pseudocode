/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x140B965C0
 * Callers:
 *     VfThunkRemoveTargetNotify @ 0x140B872DC (VfThunkRemoveTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140B963AC (ViThunkCreateSharedExportInformation.c)
 *     VfThunkAddTargetNotify @ 0x140B96514 (VfThunkAddTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
