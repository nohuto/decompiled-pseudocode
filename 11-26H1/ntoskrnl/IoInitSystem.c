/*
 * XREFs of IoInitSystem @ 0x140CBAC00
 * Callers:
 *     Phase1Initialization @ 0x14077FEA0 (Phase1Initialization.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x1404EDA18 (HeadlessKernelAddLogEntry.c)
 *     PnpSerializeBoot @ 0x1405D875C (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x14079B470 (IopRegistryInitializeCallbacks.c)
 *     IopInitializeMdlCache @ 0x14079B58C (IopInitializeMdlCache.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfNotifyVerifierOfEvent @ 0x140C21340 (VfNotifyVerifierOfEvent.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 */

__int64 IoInitSystem()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx

  result = IoInitSystemPreDrivers();
  if ( (int)result >= 0 )
  {
    WerLiveKernelInitSystem();
    if ( PnpBootDriverTracking )
    {
      ExFreePoolWithTag(PnpBootDriverTracking, 0);
      PnpBootDriverTracking = 0LL;
    }
    v3 = IopInitializeSystemDrivers();
    if ( v3 >= 0 )
    {
      if ( !PnpBootOptions )
        PnpSerializeBoot();
      if ( ViVerifierEnabled )
        VfNotifyVerifierOfEvent(0);
      IopRegistryInitializeCallbacks(v2, v1);
      IopInitializeMdlCache();
      return 0LL;
    }
    else
    {
      HeadlessKernelAddLogEntry();
      result = (unsigned int)v3;
      LODWORD(IopInitFailCode) = 8;
    }
  }
  return result;
}
