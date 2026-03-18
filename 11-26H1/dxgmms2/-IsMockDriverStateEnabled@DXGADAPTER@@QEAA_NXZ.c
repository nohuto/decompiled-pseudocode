/*
 * XREFs of ?IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ @ 0x1400038B0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     VidSchSubmitCommandToHwQueue @ 0x14000AED0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsMockDriverStateEnabled(DXGADAPTER *this)
{
  bool result; // al

  if ( !*((_BYTE *)this + 5024) )
    return 0;
  result = 1;
  if ( *((_DWORD *)this + 74) != 1 )
    return 0;
  return result;
}
