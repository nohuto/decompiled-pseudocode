/*
 * XREFs of HalpMiscInitSystem @ 0x140BEB3F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeTelemetry @ 0x140781978 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscInitializeKsr @ 0x1407860B8 (HalpMiscInitializeKsr.c)
 *     HalpMiscGetParameters @ 0x140CAF604 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140CAF9F0 (HalpMiscInitDiscard.c)
 *     HalpMiscInitializeTestHooks @ 0x140CAFA84 (HalpMiscInitializeTestHooks.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CB4660 (HalpMiscInitializeAmdSfs.c)
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
