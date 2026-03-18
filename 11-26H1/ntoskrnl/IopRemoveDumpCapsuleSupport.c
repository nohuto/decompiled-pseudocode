/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1405C9C6C
 * Callers:
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1407930B8 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 IopRemoveDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized == 1 )
  {
    if ( CapsuleTriageDumpBlock )
    {
      ExFreePoolWithTag(CapsuleTriageDumpBlock, 0);
      CapsuleTriageDumpBlock = 0LL;
    }
    CapsuleTriageDumpBlockInitialized = 0;
  }
  return 0LL;
}
