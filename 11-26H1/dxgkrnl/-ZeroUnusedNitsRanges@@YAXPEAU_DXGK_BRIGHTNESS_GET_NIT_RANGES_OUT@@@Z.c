/*
 * XREFs of ?ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024EC3C
 * Callers:
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024D910 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x14024DB60 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall ZeroUnusedNitsRanges(struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *a1)
{
  UINT32 RangeCount; // edx

  if ( a1->NormalRangeCount > 0x10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 36;
    a1->NormalRangeCount = 16;
  }
  RangeCount = a1->RangeCount;
  if ( RangeCount > 0x10 )
  {
    WdLogSingleEntry1(2LL);
    RangeCount = 16;
    WdLogGlobalForLineNumber = 41;
    a1->RangeCount = 16;
  }
  memset(&a1->SupportedRanges[RangeCount], 0, 12LL * (16 - RangeCount));
}
