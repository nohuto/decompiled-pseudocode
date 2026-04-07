/*
 * XREFs of ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x1800CA534
 * Callers:
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CCBD0 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CD080 (-_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800877B8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 */

bool __fastcall CPanelAnimation::_ShouldSlideBasedOnLeft(
        CPanelAnimation *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  if ( a2->right == a3->right )
    return 1;
  if ( a2->left == a3->left )
    return 0;
  return !CStoryboard::IsRTL();
}
