/*
 * XREFs of ?TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x180225B6C
 * Callers:
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801CCACC (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x1805C1290 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--CalculateFly.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

bool __fastcall SnapLayoutHelpers::TryGetMaximizeButtonRectFromDwm(
        HWND hwnd,
        struct tagRECT *lprcDst,
        struct Geometry::CRect *a3)
{
  bool result; // al
  RECT rc; // [rsp+20h] [rbp-C8h] BYREF
  __int128 pvAttribute; // [rsp+30h] [rbp-B8h] BYREF
  int v8; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v9[88]; // [rsp+44h] [rbp-A4h] BYREF
  RECT v10; // [rsp+9Ch] [rbp-4Ch]

  SetRectEmpty(lprcDst);
  v8 = 140;
  memset_0(v9, 0, 0x88uLL);
  DwmpGetTitlebarInfo(hwnd, &v8);
  rc = v10;
  result = !IsRectEmpty(&rc)
        && (pvAttribute = 0LL, DwmGetWindowAttribute(hwnd, 9u, &pvAttribute, 0x10u) >= 0)
        && rc.top >= SDWORD1(pvAttribute)
        && CopyRect(lprcDst, &rc);
  return result;
}
