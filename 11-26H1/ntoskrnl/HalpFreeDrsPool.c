/*
 * XREFs of HalpFreeDrsPool @ 0x14058EE9C
 * Callers:
 *     HalpErrorDeferredHandler @ 0x14058EE00 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x14058F17C (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x14058F39C (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
