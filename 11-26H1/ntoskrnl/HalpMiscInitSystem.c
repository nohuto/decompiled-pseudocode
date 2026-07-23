/*
 * XREFs of HalpMiscInitSystem @ 0x140BF13F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeTelemetry @ 0x140784478 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscInitializeKsr @ 0x140788BE8 (HalpMiscInitializeKsr.c)
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140CB5A30 (HalpMiscInitDiscard.c)
 *     HalpMiscInitializeTestHooks @ 0x140CB5AC4 (HalpMiscInitializeTestHooks.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CBA6A0 (HalpMiscInitializeAmdSfs.c)
 */

__int64 __fastcall HalpMiscInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a1 == 7 )
    {
      HalpMiscInitDiscard();
    }
    else if ( a1 == 31 )
    {
      HalpMiscInitializeTelemetry();
      HalpMiscInitializeKsr();
      HalpMiscInitializeAmdSfs();
    }
  }
  else
  {
    HalpMiscInitializeTestHooks(a3);
    HalpMiscGetParameters(a3);
  }
  return 0LL;
}
