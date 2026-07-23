/*
 * XREFs of PiDmaGuardInitialize @ 0x1405DF48C
 * Callers:
 *     PnpBootPhaseComplete @ 0x14079EA7C (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PipDmgInitPhaseTwo @ 0x1407B4334 (PipDmgInitPhaseTwo.c)
 *     PiDmaGuardQueueInitialize @ 0x140CCDCAC (PiDmaGuardQueueInitialize.c)
 */

__int64 __fastcall PiDmaGuardInitialize(int a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !a1 )
  {
    guard_dispatch_icall_no_overrides(48LL, 1LL);
    PipHalIommuSecurityEnabled = 0;
    if ( !PipDmaGuardTestMode )
    {
      PipDmaGuardPolicy = 0;
      return v1;
    }
    PipDmaGuardPolicy = 3;
    return (unsigned int)PiDmaGuardQueueInitialize();
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      __fastfail(5u);
    return (unsigned int)PipDmgInitPhaseTwo();
  }
  if ( PipDmaGuardPolicy )
    PipCslUnlockCallback = (__int64)PipDmgConsoleUnlockCallback;
  return v1;
}
