/*
 * XREFs of HalpFreeDrsPool @ 0x14059161C
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140591580 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1405918FC (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x140591B1C (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpFreeDrsPool(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 == -1 )
    {
      ExFreePoolWithTag(a1, 0x576C6148u);
    }
    else if ( *a1 == 1 )
    {
      *a1 = 0;
    }
  }
}
