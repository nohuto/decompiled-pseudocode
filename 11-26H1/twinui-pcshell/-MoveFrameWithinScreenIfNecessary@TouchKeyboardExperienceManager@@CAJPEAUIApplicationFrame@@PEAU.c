/*
 * XREFs of ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x18046E464
 * Callers:
 *     _lambda_0181179693446beb1d5841bdc72a572d_::operator() @ 0x1804694FC (_lambda_0181179693446beb1d5841bdc72a572d_--operator().c)
 *     _lambda_3f93e84ee3927ec557523765ee2fe070_::operator() @ 0x180469CEC (_lambda_3f93e84ee3927ec557523765ee2fe070_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x180211014 (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@UtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAUtagRECT@@@Z @ 0x18031EDE0 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@UtagRECT@@@Deta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
        struct IApplicationFrame *a1,
        struct IApplicationFrameWrapper *a2,
        char a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  const char *v8; // r9
  LONG right; // edx
  LONG left; // eax
  LONG bottom; // edx
  LONG top; // eax
  HMONITOR v13; // rax
  RECT rcWork; // xmm1
  unsigned __int64 v15; // xmm0_8
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // [rsp+28h] [rbp-39h] BYREF
  int v21; // [rsp+30h] [rbp-31h]
  LONG v22; // [rsp+34h] [rbp-2Dh]
  HWND hWnd; // [rsp+38h] [rbp-29h] BYREF
  __int128 v24; // [rsp+40h] [rbp-21h] BYREF
  RECT rc; // [rsp+50h] [rbp-11h] BYREF
  __int128 v26; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT Rect; // [rsp+70h] [rbp+Fh] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !a1 )
  {
    v5 = 3604LL;
LABEL_3:
    v6 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !a2 )
  {
    v5 = 3605LL;
    goto LABEL_3;
  }
  hWnd = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, &hWnd);
  if ( (v6 & 0x80000000) != 0 )
  {
    v5 = 3608LL;
    goto LABEL_4;
  }
  Rect = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xE1A,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v8);
  right = Rect.right;
  left = Rect.right;
  if ( Rect.left < Rect.right )
    left = Rect.left;
  rc.left = left;
  if ( Rect.left > Rect.right )
    right = Rect.left;
  rc.right = right;
  bottom = Rect.bottom;
  top = Rect.bottom;
  if ( Rect.top < Rect.bottom )
    top = Rect.top;
  rc.top = top;
  if ( Rect.top > Rect.bottom )
    bottom = Rect.top;
  rc.bottom = bottom;
  v13 = MonitorFromRect(&rc, 2u);
  if ( !v13 )
  {
    v6 = -2147418113;
    v5 = 3620LL;
    goto LABEL_4;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v13, &mi) )
  {
    v6 = -2147467259;
    v5 = 3623LL;
    goto LABEL_4;
  }
  if ( a3 )
    rcWork = mi.rcWork;
  else
    rcWork = mi.rcMonitor;
  v15 = _mm_srli_si128((__m128i)rcWork, 8).m128i_u64[0];
  v16 = v15;
  if ( rcWork.left < (int)v15 )
    v16 = rcWork.left;
  LODWORD(v20) = v16;
  v17 = v15;
  if ( rcWork.left > (int)v15 )
    v17 = rcWork.left;
  v21 = v17;
  if ( rcWork.top >= SHIDWORD(v15) )
  {
    HIDWORD(v20) = HIDWORD(v15);
    v22 = rcWork.top;
    if ( rcWork.top > SHIDWORD(v15) )
      goto LABEL_35;
  }
  else
  {
    HIDWORD(v20) = rcWork.top;
  }
  v22 = HIDWORD(v15);
LABEL_35:
  v26 = 0LL;
  *(float *)&v24 = (float)rc.left;
  *((float *)&v24 + 1) = (float)rc.top;
  *((float *)&v24 + 2) = (float)(rc.right - rc.left);
  *((float *)&v24 + 3) = (float)(rc.bottom - rc.top);
  if ( KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v24, (int *)&v20, &v26) )
  {
    v20 = 0LL;
    LODWORD(v24) = (int)*(float *)&v26;
    DWORD1(v24) = (int)*((float *)&v26 + 1);
    DWORD2(v24) = (int)(float)(*((float *)&v26 + 2) + *(float *)&v26);
    HIDWORD(v24) = (int)(float)(*((float *)&v26 + 3) + *((float *)&v26 + 1));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    v18 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT>(
            &v20,
            &v24);
    v6 = v18;
    if ( v18 < 0 )
    {
      v19 = 3638LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      return v6;
    }
    v18 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64))(*(_QWORD *)a1 + 32LL))(a1, v20);
    v6 = v18;
    if ( v18 < 0 )
    {
      v19 = 3639LL;
      goto LABEL_40;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  }
  return 0LL;
}
