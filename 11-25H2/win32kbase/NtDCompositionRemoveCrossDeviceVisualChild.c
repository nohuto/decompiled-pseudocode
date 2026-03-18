/*
 * XREFs of NtDCompositionRemoveCrossDeviceVisualChild @ 0x140058D20
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x14005806C (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 */

__int64 __fastcall NtDCompositionRemoveCrossDeviceVisualChild(int a1, unsigned int a2, int a3, unsigned int a4)
{
  return DirectComposition::CApplicationChannel::RemoveCrossChannelVisualChild(a1, a2, a3, a4);
}
