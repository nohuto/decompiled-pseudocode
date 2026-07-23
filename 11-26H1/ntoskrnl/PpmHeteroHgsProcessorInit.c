/*
 * XREFs of PpmHeteroHgsProcessorInit @ 0x14060E1CC
 * Callers:
 *     PpmCheckProcessorInit @ 0x14060D220 (PpmCheckProcessorInit.c)
 *     PpmWpsPepProcessorInit @ 0x140615E90 (PpmWpsPepProcessorInit.c)
 *     PoInitializePrcb @ 0x140C03E34 (PoInitializePrcb.c)
 * Callees:
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x1405265D4 (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsHwFeedbackTableOffsetInit @ 0x14060E148 (PpmHeteroHgsHwFeedbackTableOffsetInit.c)
 *     PpmHeteroInitializeFeedbackClass @ 0x14060E428 (PpmHeteroInitializeFeedbackClass.c)
 *     PpmHeteroAmdProcessorInit @ 0x140C040E8 (PpmHeteroAmdProcessorInit.c)
 *     PpmHeteroIntelProcessorInit @ 0x140C04168 (PpmHeteroIntelProcessorInit.c)
 */

void __fastcall PpmHeteroHgsProcessorInit(__int64 a1, char a2)
{
  char v3; // al
  int v4; // eax

  if ( PpmHeteroHgsEnabled || a2 )
  {
    if ( a2 )
    {
      v3 = *(_BYTE *)(a1 + 141);
      if ( v3 == 2 )
      {
        PpmHeteroIntelProcessorInit();
      }
      else if ( v3 == 1 )
      {
        PpmHeteroAmdProcessorInit();
      }
    }
    else
    {
      PpmHeteroHgsProcessorThreadFeedbackInit();
      if ( PpmHeteroHgsVendor == 2 )
        PpmHeteroHgsHwFeedbackTableOffsetInit(a1);
      else
        Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline();
      v4 = PpmHeteroInitializeFeedbackClass(a1);
      if ( v4 < 0 )
        KeBugCheckEx(0xA0u, 0x201uLL, v4, 0LL, 0LL);
    }
  }
}
