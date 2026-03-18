/*
 * XREFs of PiDmaGuardInitialize @ 0x1405DCB24
 * Callers:
 *     PnpBootPhaseComplete @ 0x14079BF3C (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PipDmgInitPhaseTwo @ 0x1407B12D4 (PipDmgInitPhaseTwo.c)
 *     PiDmaGuardQueueInitialize @ 0x140CC7BBC (PiDmaGuardQueueInitialize.c)
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
