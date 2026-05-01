/*
 * XREFs of ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180306E90
 * Callers:
 *     <none>
 * Callees:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18005BAB4 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 */

__int64 __fastcall CSplashScreen::get_ImageLocation(CSplashScreen *this, struct Windows::Foundation::Rect *a2)
{
  _OWORD *ImageLocationInternal; // rax
  RTL_SRWLOCK *v5; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  ImageLocationInternal = (_OWORD *)CSplashScreen::_get_ImageLocationInternal((__int64)this, (__int64)v7);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_OWORD *)a2 = *ImageLocationInternal;
  ReleaseSRWLockShared(v5);
  return 0LL;
}
