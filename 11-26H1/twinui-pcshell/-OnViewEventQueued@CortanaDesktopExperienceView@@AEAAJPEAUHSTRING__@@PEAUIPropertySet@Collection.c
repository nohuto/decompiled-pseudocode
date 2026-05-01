/*
 * XREFs of ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D50C4
 * Callers:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1803D4FD0 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18003C904 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x1801DD140 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x18029A08C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG@Z @ 0x180370BD0 (--$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA-AV01@$$QEAPEB.c)
 *     ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180371A0C (--1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180375D90 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAURect@63@@Z1@Z @ 0x1803C6974 (--$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x1803D110C (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D232C (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1803D2520 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?FocusNavigate@CortanaDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1803D2770 (-FocusNavigate@CortanaDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Inte.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803D6EC8 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1803D7048 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803D7314 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::OnViewEventQueued(
        CortanaDesktopExperienceView *this,
        Microsoft::WRL::Wrappers::Details *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  HSTRING v8; // r8
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  HSTRING v11; // r8
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  HSTRING v14; // r8
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  HSTRING v17; // r8
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  HSTRING v20; // r8
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // ebx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  HSTRING_HEADER *v26; // rax
  HSTRING v27; // r8
  unsigned int v28; // r8d
  void (*v29)(void); // rax
  HSTRING_HEADER *v30; // rax
  HSTRING v31; // r8
  unsigned int v32; // r8d
  Windows::Internal::ShellHelpers::PropertySetHelper *v33; // rbx
  unsigned int v34; // r8d
  HSTRING_HEADER *v35; // rax
  __int64 v36; // r8
  HSTRING_HEADER *v37; // rax
  HSTRING v38; // r8
  unsigned int v39; // r8d
  HSTRING_HEADER *v40; // rax
  HSTRING v41; // r8
  unsigned int v42; // r8d
  HSTRING_HEADER *v43; // rax
  HSTRING v44; // r8
  unsigned int v45; // r8d
  HSTRING_HEADER *v46; // rax
  HSTRING v47; // r8
  unsigned int v48; // r8d
  HSTRING_HEADER *v49; // rax
  HSTRING v50; // r8
  unsigned int v51; // r8d
  unsigned int v52; // ebx
  int v53; // eax
  int v54; // eax
  HSTRING_HEADER *v55; // rax
  HSTRING v56; // r8
  Windows::Internal::ShellHelpers::PropertySetHelper *v57; // rbx
  unsigned int v58; // r8d
  HSTRING_HEADER *v59; // rax
  __int64 v60; // r8
  int v61; // eax
  unsigned __int8 v63[16]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v64; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER v65; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+58h] [rbp-A8h]
  HSTRING_HEADER v67; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h]
  __int64 v69[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  *(_QWORD *)&v64 = WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::Start<unsigned short const *>(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v69,
    (const unsigned __int16 **)&v64);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_1807602D8, v6);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, (HSTRING)v7[1].Reserved.Reserved1, v8)
    || (v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_1807602E0, v9),
        !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v10[1].Reserved.Reserved1,
                         v11))
    || (v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_180760308, v12),
        !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v13[1].Reserved.Reserved1,
                         v14))
    || (v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_180760310, v15),
        !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v16[1].Reserved.Reserved1,
                         v17)) )
  {
    CortanaDesktopExperienceView::FocusNavigate((__int64)this);
    goto LABEL_36;
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_180760318, v18);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a2,
                       (HSTRING)v19[1].Reserved.Reserved1,
                       v20) )
  {
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_180760320, v21);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a2,
                         (HSTRING)v26[1].Reserved.Reserved1,
                         v27) )
    {
      v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_1807602E8, v28);
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            a2,
                            (HSTRING)v30[1].Reserved.Reserved1,
                            v31) )
      {
        v63[0] = 0;
        v33 = Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v64,
                a3);
        v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v67, (const WCHAR **)&off_1807602B0, v34);
        v23 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v33,
                (__int64)v35[1].Reserved.Reserved1,
                v36,
                v63);
        v68 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v64);
        if ( v23 >= 0 )
        {
          CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, v63[0]);
          goto LABEL_36;
        }
        v24 = (unsigned int)v23;
        v25 = 1082LL;
        goto LABEL_14;
      }
      v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_1807602F0, v32);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           a2,
                           (HSTRING)v37[1].Reserved.Reserved1,
                           v38) )
      {
        v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_1807602F8, v39);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                             a2,
                             (HSTRING)v40[1].Reserved.Reserved1,
                             v41) )
        {
          v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&off_180760300, v42);
          if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                               a2,
                               (HSTRING)v43[1].Reserved.Reserved1,
                               v44) )
          {
            v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &v65,
                    (const WCHAR **)&off_180760298,
                    v45);
            if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                 a2,
                                 (HSTRING)v46[1].Reserved.Reserved1,
                                 v47) )
            {
              v49 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      &v65,
                      (const WCHAR **)&off_1807602A0,
                      v48);
              if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                   a2,
                                   (HSTRING)v49[1].Reserved.Reserved1,
                                   v50) )
              {
                v55 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        &v65,
                        (const WCHAR **)&off_1807602A8,
                        v51);
                if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                      a2,
                                      (HSTRING)v55[1].Reserved.Reserved1,
                                      v56) )
                {
                  *(_OWORD *)&v67.Reserved.Reserved1 = 0LL;
                  v57 = Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v64,
                          a3);
                  v59 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                          &v65,
                          (const WCHAR **)&off_1807602D0,
                          v58);
                  Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
                    v57,
                    (HSTRING)v59[1].Reserved.Reserved1,
                    v60,
                    &v67);
                  v66 = 0LL;
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v64);
                  v64 = *(_OWORD *)&v67.Reserved.Reserved1;
                  v61 = CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(
                          (__int64)this,
                          (float *)&v64);
                  if ( v61 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x458,
                      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                      (const char *)(unsigned int)v61);
                }
              }
              else
              {
                v52 = 13;
                v53 = *((_DWORD *)this + 35);
                if ( (v53 == 3 || v53 == 4) && *((_BYTE *)this + 242) )
                  v52 = CortanaHelpers::AllowCortanaAboveLock() != 0 ? 18 : 13;
                v54 = CortanaDesktopExperienceView::SetZBand(this, v52);
                if ( v54 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x4EE,
                    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                    (const char *)(unsigned int)v54);
                CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
              }
              goto LABEL_36;
            }
            *((_BYTE *)this + 249) = 0;
          }
          CortanaDesktopExperienceView::ShowBorder(this, 0LL);
LABEL_36:
          wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v69);
          v23 = 0;
          goto LABEL_37;
        }
        *((_BYTE *)this + 236) = 0;
        v29 = *(void (**)(void))(**((_QWORD **)this + 12) + 48LL);
      }
      else
      {
        *((_BYTE *)this + 236) = 1;
        v29 = *(void (**)(void))(**((_QWORD **)this + 12) + 40LL);
      }
    }
    else
    {
      CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, 0);
      v29 = *(void (**)(void))(**((_QWORD **)this + 12) + 112LL);
    }
    v29();
    goto LABEL_36;
  }
  v22 = CortanaDesktopExperienceView::DismissCortanaApp(this);
  v23 = v22;
  if ( v22 >= 0 )
    goto LABEL_36;
  v24 = (unsigned int)v22;
  v25 = 1071LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)v24);
LABEL_37:
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v69);
  return (unsigned int)v23;
}
