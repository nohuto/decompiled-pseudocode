/*
 * XREFs of ?HasMargins@LetterboxingMargins@PresentedContentUpdateInfo@@QEBA_NXZ @ 0x14003AE80
 * Callers:
 *     ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x14003AB8C (-UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall PresentedContentUpdateInfo::LetterboxingMargins::HasMargins(
        PresentedContentUpdateInfo::LetterboxingMargins *this)
{
  return *(float *)this != 0.0
      || *((float *)this + 1) != 0.0
      || *((float *)this + 2) != 0.0
      || *((float *)this + 3) != 0.0;
}
