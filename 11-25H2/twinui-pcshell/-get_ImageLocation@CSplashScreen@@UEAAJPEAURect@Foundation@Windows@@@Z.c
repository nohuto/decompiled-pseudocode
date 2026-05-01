/*
 * XREFs of ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x18030B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x1800D8850 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall CSplashScreen::get_ImageLocation(CSplashScreen *this, struct Windows::Foundation::Rect *a2)
{
  _OWORD *ImageLocationInternal; // rax
  RTL_SRWLOCK *v5; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  ImageLocationInternal = (_OWORD *)CSplashScreen::_get_ImageLocationInternal((__int64)this, (__int64)v7);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_OWORD *)a2 = *ImageLocationInternal;
  ReleaseSRWLockShared(v5);
  return 0LL;
}
