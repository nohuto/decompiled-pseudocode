/*
 * XREFs of ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1801A7A80
 * Callers:
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1801A79E8 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x1801A7A2C (-GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18037BA60 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180385768 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x180386100 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x180400A88 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoVariant::Accessor::VerifyPV(RoVariant::Accessor *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 2);
  if ( v1 == 7 )
    return 0LL;
  result = 2147650720LL;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return result;
}
