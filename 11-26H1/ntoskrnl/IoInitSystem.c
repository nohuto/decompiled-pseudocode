/*
 * XREFs of IoInitSystem @ 0x140CC0C78
 * Callers:
 *     Phase1Initialization @ 0x1407829A0 (Phase1Initialization.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x1404E6FF8 (HeadlessKernelAddLogEntry.c)
 *     PnpSerializeBoot @ 0x1405DAF5C (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x14079DFB0 (IopRegistryInitializeCallbacks.c)
 *     IopInitializeMdlCache @ 0x14079E0CC (IopInitializeMdlCache.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfNotifyVerifierOfEvent @ 0x140C27350 (VfNotifyVerifierOfEvent.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 */

__int64 __fastcall IoInitSystem(void *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx

  result = IoInitSystemPreDrivers(a1);
  if ( (int)result >= 0 )
  {
    WerLiveKernelInitSystem();
    if ( PnpBootDriverTracking )
    {
      ExFreePoolWithTag(PnpBootDriverTracking, 0);
      PnpBootDriverTracking = 0LL;
    }
    v4 = IopInitializeSystemDrivers();
    if ( v4 >= 0 )
    {
      if ( !PnpBootOptions )
        PnpSerializeBoot();
      if ( ViVerifierEnabled )
        VfNotifyVerifierOfEvent(0);
      IopRegistryInitializeCallbacks(v3, v2);
      IopInitializeMdlCache();
      return 0LL;
    }
    else
    {
      HeadlessKernelAddLogEntry();
      result = (unsigned int)v4;
      LODWORD(IopInitFailCode) = 8;
    }
  }
  return result;
}
