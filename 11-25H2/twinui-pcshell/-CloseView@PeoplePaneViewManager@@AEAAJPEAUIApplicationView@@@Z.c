/*
 * XREFs of ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180400098
 * Callers:
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1803FFE60 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x180400010 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180074750 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::CloseView(
        PeoplePaneViewManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  struct IImmersiveApplication **v3; // r8
  int ApplicationFromView; // eax
  unsigned int LastError; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  HWND Ancestor; // rax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  PeoplePaneViewManager *v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  HWND hwnd; // [rsp+68h] [rbp+38h] BYREF

  v15 = this;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v16, v3);
  LastError = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    v15 = 0LL;
    v6 = v16;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v16 + 24LL);
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v15);
    v9 = v7(v6, 4LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v8);
    LastError = v9;
    if ( v9 >= 0 )
    {
      hwnd = 0LL;
      v9 = (*(__int64 (__fastcall **)(PeoplePaneViewManager *, HWND *))(*(_QWORD *)v15 + 32LL))(v15, &hwnd);
      LastError = v9;
      if ( v9 >= 0 )
      {
        Ancestor = GetAncestor(hwnd, 2u);
        if ( PostMessageW(Ancestor, 0x10u, 0LL, 0LL) )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
          LastError = 0;
          goto LABEL_12;
        }
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x3BF,
                      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                      v12);
        goto LABEL_6;
      }
      v10 = 956LL;
    }
    else
    {
      v10 = 953LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_6:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B6,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return LastError;
}
