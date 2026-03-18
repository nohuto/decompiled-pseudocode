/*
 * XREFs of HalpProcInitDiscard @ 0x140CAF464
 * Callers:
 *     HalpProcInitSystem @ 0x140BEB320 (HalpProcInitSystem.c)
 * Callees:
 *     HalpProcGetFeatureBits @ 0x140587530 (HalpProcGetFeatureBits.c)
 */

__int64 HalpProcInitDiscard()
{
  off_140E008B0[0] = (__int64 (__fastcall *)())HalpLoadMicrocode;
  off_140E008B8[0] = xHalGetInterruptTranslator;
  off_140E008C0[0] = HalpMcUpdatePostUpdate;
  off_140E009A0[0] = (__int64 (__fastcall *)())HalpProcessorPrepareForIdle;
  off_140E009B0 = (__int64 (__fastcall *)())HalpProcessorResumeFromIdle;
  HalpFeatureBits = HalpProcGetFeatureBits();
  return 0LL;
}
