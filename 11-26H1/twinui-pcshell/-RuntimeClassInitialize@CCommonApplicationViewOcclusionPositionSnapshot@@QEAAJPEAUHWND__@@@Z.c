/*
 * XREFs of ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z @ 0x18016718C
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Z @ 0x180165AD4 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA?AW4ARRANGEMENT_BASED_VIEW_STATE@@I@Z @ 0x180167320 (-s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA-AW4ARRANGEMENT_BASED_.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionSnapshot::RuntimeClassInitialize(
        CCommonApplicationViewOcclusionPositionSnapshot *this,
        HWND a2)
{
  const char *v4; // r9
  RECT rcNormalPosition; // xmm2
  __int64 v6; // rdx
  __int64 v7; // r8
  __int128 v8; // xmm0
  __int64 result; // rax
  __int64 v10; // rdx
  HRESULT WindowAttribute; // eax
  unsigned int v12; // edi
  __int128 v13; // xmm0
  __int128 v14; // [rsp+30h] [rbp-9h]
  WINDOWPLACEMENT wndpl; // [rsp+48h] [rbp+Fh] BYREF
  __int128 pvAttribute; // [rsp+78h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  memset(&wndpl, 0, sizeof(wndpl));
  if ( !GetWindowPlacement(a2, &wndpl) )
  {
    v10 = 81LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\ApplicationViewPositionHwndHelpers.h",
             v4);
  }
  rcNormalPosition = wndpl.rcNormalPosition;
  v14 = *(_OWORD *)&wndpl.ptMaxPosition.x;
  *(_OWORD *)((char *)this + 60) = *(_OWORD *)&wndpl.flags;
  *(_OWORD *)((char *)this + 76) = v14;
  *(_QWORD *)((char *)this + 92) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)rcNormalPosition, (__m128d)rcNormalPosition);
  if ( !(unsigned int)IsWindowArranged(a2) )
  {
    *((_DWORD *)this + 12) = CCommonApplicationViewOcclusionPositionImpl::s_GetStateFromShowCommand(
                               *((unsigned int *)this + 16),
                               v6,
                               v7);
    if ( GetWindowRect(a2, (LPRECT)this + 1) )
    {
LABEL_4:
      v8 = *(_OWORD *)((char *)this + 84);
      *((_DWORD *)this + 14) = (*((_DWORD *)this + 15) >> 1) & 1;
      result = 0LL;
      *((_OWORD *)this + 2) = v8;
      return result;
    }
    v10 = 99LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\ApplicationViewPositionHwndHelpers.h",
             v4);
  }
  *((_DWORD *)this + 12) = 4;
  pvAttribute = 0LL;
  WindowAttribute = DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u);
  v12 = WindowAttribute;
  if ( WindowAttribute >= 0 )
  {
    v13 = pvAttribute;
    *((_DWORD *)this + 13) = 3;
    *((_OWORD *)this + 1) = v13;
    goto LABEL_4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5B,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\ApplicationViewPositionHwndHelpers.h",
    (const char *)(unsigned int)WindowAttribute);
  return v12;
}
