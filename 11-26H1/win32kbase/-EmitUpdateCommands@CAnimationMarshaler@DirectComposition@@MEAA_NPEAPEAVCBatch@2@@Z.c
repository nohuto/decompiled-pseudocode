/*
 * XREFs of ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14014ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitCallbackId@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014ACAC (-EmitCallbackId@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014AD34 (-EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetLegacyTrigger@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014ADC0 (-EmitSetLegacyTrigger@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014AE48 (-EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014AEEC (-EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014AFD4 (-EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014B060 (-EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014B0D8 (-EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014B14C (-EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014B1B8 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  DirectComposition::CAnimationMarshaler *v2; // rsi
  char v4; // bl

  v2 = (DirectComposition::CAnimationMarshaler *)((char *)this - 16);
  v4 = 0;
  if ( DirectComposition::CAnimationMarshaler::EmitCallbackId(
         (DirectComposition::CAnimationMarshaler *)((char *)this - 16),
         a2)
    && DirectComposition::CAnimationMarshaler::EmitBeginTime(v2, a2)
    && DirectComposition::CAnimationMarshaler::EmitSetLegacyTrigger(v2, a2)
    && DirectComposition::CAnimationMarshaler::EmitSetPrimitives(v2, a2)
    && DirectComposition::CAnimationMarshaler::EmitSetHandoff(v2, a2)
    && DirectComposition::CAnimationMarshaler::EmitSetPaused(v2, a2)
    && DirectComposition::CAnimationMarshaler::EmitSetSeek(v2, a2)
    && DirectComposition::CAnimationMarshaler::EmitSetInstance(v2, a2)
    && DirectComposition::CAnimationMarshaler::EmitClearTimeEvents(v2, a2) )
  {
    return DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(v2, a2);
  }
  return v4;
}
