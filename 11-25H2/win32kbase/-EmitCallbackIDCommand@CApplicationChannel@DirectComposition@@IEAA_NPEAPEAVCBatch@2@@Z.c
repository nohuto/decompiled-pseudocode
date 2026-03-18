/*
 * XREFs of ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400E65D0
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401981B0 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z @ 0x1400E6640 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitCallbackIDCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  if ( (*((_BYTE *)this + 265) & 1) != 0 && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, a2, 0) )
    *((_BYTE *)this + 265) &= ~1u;
  if ( (*((_BYTE *)this + 265) & 2) != 0 && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, a2, 1) )
    *((_BYTE *)this + 265) &= ~2u;
  return (*((_BYTE *)this + 265) & 3) == 0;
}
