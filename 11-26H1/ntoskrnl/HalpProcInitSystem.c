/*
 * XREFs of HalpProcInitSystem @ 0x140BF1320
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcUpdatePostUpdate @ 0x140503220 (HalpMcUpdatePostUpdate.c)
 *     HalpMcUpdateMicrocode @ 0x14050A2B0 (HalpMcUpdateMicrocode.c)
 *     HalpProcGetFeatureBits @ 0x140589A50 (HalpProcGetFeatureBits.c)
 *     HalpInterruptStartBlockedProcessors @ 0x140593A28 (HalpInterruptStartBlockedProcessors.c)
 *     HalpMcUpdateInitializeBSP @ 0x1405964E8 (HalpMcUpdateInitializeBSP.c)
 *     PrExtControlOperations @ 0x1406E0CC8 (PrExtControlOperations.c)
 *     PrExtLogToTelemetry @ 0x1406E0FF4 (PrExtLogToTelemetry.c)
 *     HalpProcInitDiscard @ 0x140CB54A4 (HalpProcInitDiscard.c)
 *     HalpBlkInitSystem @ 0x140CBA568 (HalpBlkInitSystem.c)
 */

__int64 __fastcall HalpProcInitSystem(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == 4 )
  {
    HalpMcUpdateMicrocode();
    return 0LL;
  }
  if ( a1 == 12 )
  {
    HalpProcInitDiscard();
    v4 = 12LL;
    goto LABEL_14;
  }
  if ( a1 != 17 )
  {
    if ( a1 == 19 )
    {
      HalpFeatureBits &= HalpProcGetFeatureBits();
      return 0LL;
    }
    if ( a1 != 21 )
    {
      if ( a1 == 32 )
      {
        v6 = 1;
        PrExtControlOperations(10, &v6, 4LL);
        HalpMcUpdatePostUpdate();
        PrExtLogToTelemetry();
      }
      return 0LL;
    }
    v4 = 21LL;
LABEL_14:
    HalpBlkInitSystem(v4);
    return 0LL;
  }
  if ( HalpInterruptBlockedProcessors )
    HalpInterruptStartBlockedProcessors(0);
  HalpMcUpdateInitializeBSP(a3);
  return 0LL;
}
