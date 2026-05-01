/*
 * XREFs of ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180268990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@Z @ 0x180189F1C (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNot_ea_180189F1C.c)
 *     ?IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x1802044E0 (-IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180206F8C (-IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicationViewCollection@@@Z @ 0x180269700 (-SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicati.c)
 *     ??$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@winrt@@YA?A_P$$QEAPEAUIWindowManagementEvents@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18059C5D0 (--$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@winrt.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805A1534 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CShellSnapComponent::SubscribeToServices(CShellSnapComponent *this, struct IServiceProvider *a2)
{
  __int64 (*QueryService)(void); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  __int64 result; // rax
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  SnapLayoutHelpers **v13; // r13
  int v14; // eax
  unsigned int v15; // ebx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v17; // eax
  unsigned int v18; // ebx
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v20; // eax
  unsigned int v21; // ebx
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v23; // eax
  unsigned int v24; // ebx
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v26; // r15
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // ebx
  HRESULT (__stdcall *v30)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ebx
  HRESULT (__stdcall *v34)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // ebx
  HRESULT (__stdcall *v38)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // ebx
  HRESULT (__stdcall *v42)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // ebx
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // ebx
  HRESULT (__stdcall *v49)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // ebx
  HRESULT (__stdcall *v53)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rdx
  unsigned int v57; // ebx
  __int64 *v58; // rax
  int v59; // eax
  unsigned int v60; // ebx
  HRESULT (__stdcall *v61)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v62; // rcx
  int v63; // eax
  unsigned int v64; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v66; // eax
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned int v69; // ebx
  int v70; // eax
  unsigned int v71; // ebx
  __int64 v72; // rcx
  int v73; // eax
  unsigned int v74; // ebx
  HRESULT (__stdcall *v75)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v76; // rcx
  int v77; // eax
  unsigned int v78; // ebx
  int v79; // eax
  struct IImmersiveSettingsCache *v80; // rdx
  unsigned int v81; // ebx
  struct IImmersiveSettingsCache *v82; // rdx
  int v83; // eax
  unsigned int v84; // ebx
  __int64 v85; // [rsp+30h] [rbp-48h] BYREF
  __int64 v86; // [rsp+38h] [rbp-40h] BYREF
  __int64 v87; // [rsp+40h] [rbp-38h] BYREF
  __int64 v88; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  QueryService = (__int64 (*)(void))a2->lpVtbl->QueryService;
  IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 22);
  try
  {
    v5 = QueryService();
    v6 = v5;
    if ( v5 >= 0 )
    {
      v9 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
      v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v9)(
              a2,
              &SID_IImmersiveMonitorService,
              &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
              (char *)this + 168);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v12 = a2->lpVtbl->QueryService;
        v13 = (SnapLayoutHelpers **)((char *)this + 216);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 27);
        v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))v12)(
                a2,
                &unk_1807B9CD8,
                &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
                (char *)this + 216);
        v15 = v14;
        if ( v14 >= 0 )
        {
          v16 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
          v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
                  a2,
                  &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                  &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                  (char *)this + 224);
          v18 = v17;
          if ( v17 >= 0 )
          {
            v19 = a2->lpVtbl->QueryService;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
            v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v19)(
                    a2,
                    &SID_MultitaskingViewServiceProvider,
                    &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
                    (char *)this + 208);
            v21 = v20;
            if ( v20 >= 0 )
            {
              v22 = a2->lpVtbl->QueryService;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 29);
              v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v22)(
                      a2,
                      &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
                      &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
                      (char *)this + 232);
              v24 = v23;
              if ( v23 >= 0 )
              {
                v25 = a2->lpVtbl->QueryService;
                v26 = (_QWORD *)((char *)this + 240);
                v27 = *((_QWORD *)this + 30);
                *((_QWORD *)this + 30) = 0LL;
                if ( v27 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
                v28 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v25)(
                        a2,
                        &GUID_5f563eea_a82c_4693_96ab_44f7c4a1262c,
                        &GUID_5f563eea_a82c_4693_96ab_44f7c4a1262c,
                        (char *)this + 240);
                v29 = v28;
                if ( v28 >= 0 )
                {
                  v30 = a2->lpVtbl->QueryService;
                  v31 = *((_QWORD *)this + 44);
                  *((_QWORD *)this + 44) = 0LL;
                  if ( v31 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                  v32 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v30)(
                          a2,
                          &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
                          &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
                          (char *)this + 352);
                  v33 = v32;
                  if ( v32 >= 0 )
                  {
                    v34 = a2->lpVtbl->QueryService;
                    v35 = *((_QWORD *)this + 43);
                    *((_QWORD *)this + 43) = 0LL;
                    if ( v35 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                    v36 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v34)(
                            a2,
                            &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
                            &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
                            (char *)this + 344);
                    v37 = v36;
                    if ( v36 >= 0 )
                    {
                      v38 = a2->lpVtbl->QueryService;
                      v39 = *((_QWORD *)this + 45);
                      *((_QWORD *)this + 45) = 0LL;
                      if ( v39 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
                      v40 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v38)(
                              a2,
                              &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
                              &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
                              (char *)this + 360);
                      v41 = v40;
                      if ( v40 >= 0 )
                      {
                        v42 = a2->lpVtbl->QueryService;
                        v43 = *((_QWORD *)this + 46);
                        *((_QWORD *)this + 46) = 0LL;
                        if ( v43 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
                        v44 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v42)(
                                a2,
                                &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
                                &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
                                (char *)this + 368);
                        v45 = v44;
                        if ( v44 >= 0 )
                        {
                          v46 = *((_QWORD *)this + 31);
                          *((_QWORD *)this + 31) = 0LL;
                          if ( v46 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                          v47 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v26)(
                                  *v26,
                                  &GUID_f833ec36_9be2_5462_a4e1_e8a28819dea7,
                                  (char *)this + 248);
                          v48 = v47;
                          if ( v47 >= 0 )
                          {
                            v49 = a2->lpVtbl->QueryService;
                            v50 = *((_QWORD *)this + 69);
                            *((_QWORD *)this + 69) = 0LL;
                            if ( v50 )
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
                            v51 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v49)(
                                    a2,
                                    &IID_IImmersiveWindowMessageService,
                                    &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                                    (char *)this + 552);
                            v52 = v51;
                            if ( v51 >= 0 )
                            {
                              v53 = a2->lpVtbl->QueryService;
                              v54 = *((_QWORD *)this + 127);
                              *((_QWORD *)this + 127) = 0LL;
                              if ( v54 )
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
                              v55 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v53)(
                                      a2,
                                      &SID_ImmersiveRawInputProvider,
                                      &GUID_c1235996_b084_4af2_8663_28f19352097e,
                                      (char *)this + 1016);
                              v57 = v55;
                              if ( v55 >= 0 )
                              {
                                LOBYTE(v56) = 1;
                                wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
                                  &`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
                                  v56);
                                v87 = *((_QWORD *)this + 21);
                                v88 = *v26;
                                v58 = (__int64 *)winrt::make<SnapMigrationHandler,IWindowManagementEvents *,IImmersiveMonitorManager *>(
                                                   &v86,
                                                   &v88,
                                                   &v87);
                                winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
                                  (__int64 *)this + 110,
                                  v58);
                                if ( v86 )
                                  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v86);
                                v59 = SnapInteraction::InteractionTracker::SubscribeToServices(
                                        (CShellSnapComponent *)((char *)this + 568),
                                        (struct ISnapComponent *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 48) >> 64)),
                                        *((struct IApplicationViewCollection **)this + 22));
                                v60 = v59;
                                if ( v59 >= 0 )
                                {
                                  v61 = a2->lpVtbl->QueryService;
                                  v62 = *((_QWORD *)this + 48);
                                  *((_QWORD *)this + 48) = 0LL;
                                  if ( v62 )
                                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
                                  v63 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v61)(
                                          a2,
                                          &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                          &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                          (char *)this + 384);
                                  v64 = v63;
                                  if ( v63 >= 0 )
                                  {
                                    lpVtbl = a2->lpVtbl;
                                    v85 = 0LL;
                                    v66 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                                            a2,
                                            &SID_IImmersiveMonitorService,
                                            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                                            &v85);
                                    v69 = v66;
                                    if ( v66 >= 0 )
                                    {
                                      v70 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),CShellSnapComponent *>(
                                              (__int64)this + 736,
                                              v85,
                                              v67,
                                              v68,
                                              (unsigned __int64)this - 48);
                                      v71 = v70;
                                      if ( v70 >= 0 )
                                      {
                                        v72 = *((_QWORD *)this + 68);
                                        *((_QWORD *)this + 68) = 0LL;
                                        if ( v72 )
                                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
                                        v73 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 25))(
                                                *((_QWORD *)this + 25),
                                                &GUID_1272c5ac_d7c9_5a11_88e3_f6ffaf79e9b1,
                                                (char *)this + 544);
                                        v74 = v73;
                                        if ( v73 >= 0 )
                                        {
                                          v75 = a2->lpVtbl->QueryService;
                                          v76 = (_QWORD *)*((_QWORD *)this + 47);
                                          *((_QWORD *)this + 47) = 0LL;
                                          if ( v76 )
                                            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v76 + 16LL))(v76, *v76);
                                          v77 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v75)(
                                                  a2,
                                                  &SID_ImmersiveShellHookService,
                                                  &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                                                  (char *)this + 376);
                                          v78 = v77;
                                          if ( v77 >= 0 )
                                          {
                                            v79 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
                                                    *((_QWORD *)this + 47),
                                                    &unk_1807B9CE8,
                                                    4LL,
                                                    ((unsigned __int64)this + 120) & -(__int64)(this != (CShellSnapComponent *)48),
                                                    (char *)this + 392);
                                            v81 = v79;
                                            if ( v79 >= 0 )
                                            {
                                              *((_BYTE *)this + 872) = SnapLayoutHelpers::IsSnapFlyoutSettingEnabled(
                                                                         *v13,
                                                                         v80);
                                              *((_BYTE *)this + 873) = SnapLayoutHelpers::IsSnapBarSettingEnabled(
                                                                         *v13,
                                                                         v82);
                                              v83 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 22) + 96LL))(
                                                      *((_QWORD *)this + 22),
                                                      (char *)this + 1032,
                                                      (char *)this + 1104);
                                              v84 = v83;
                                              if ( v83 >= 0 )
                                              {
                                                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v85);
                                                result = 0LL;
                                              }
                                              else
                                              {
                                                wil::details::in1diag3::Return_Hr(
                                                  retaddr,
                                                  (void *)0x179,
                                                  (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                                  (const char *)(unsigned int)v83);
                                                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v85);
                                                result = v84;
                                              }
                                            }
                                            else
                                            {
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x174,
                                                (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                                (const char *)(unsigned int)v79);
                                              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v85);
                                              result = v81;
                                            }
                                          }
                                          else
                                          {
                                            wil::details::in1diag3::Return_Hr(
                                              retaddr,
                                              (void *)0x16A,
                                              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                              (const char *)(unsigned int)v77);
                                            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v85);
                                            result = v78;
                                          }
                                        }
                                        else
                                        {
                                          wil::details::in1diag3::Return_Hr(
                                            retaddr,
                                            (void *)0x169,
                                            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                            (const char *)(unsigned int)v73);
                                          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v85);
                                          result = v74;
                                        }
                                      }
                                      else
                                      {
                                        wil::details::in1diag3::Return_Hr(
                                          retaddr,
                                          (void *)0x167,
                                          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                          (const char *)(unsigned int)v70);
                                        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v85);
                                        result = v71;
                                      }
                                    }
                                    else
                                    {
                                      wil::details::in1diag3::Return_Hr(
                                        retaddr,
                                        (void *)0x162,
                                        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                        (const char *)(unsigned int)v66);
                                      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v85);
                                      result = v69;
                                    }
                                  }
                                  else
                                  {
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)0x15F,
                                      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                      (const char *)(unsigned int)v63);
                                    result = v64;
                                  }
                                }
                                else
                                {
                                  wil::details::in1diag3::Return_Hr(
                                    retaddr,
                                    (void *)0x15D,
                                    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                    (const char *)(unsigned int)v59);
                                  result = v60;
                                }
                              }
                              else
                              {
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)0x152,
                                  (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                  (const char *)(unsigned int)v55);
                                result = v57;
                              }
                            }
                            else
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x151,
                                (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                (const char *)(unsigned int)v51);
                              result = v52;
                            }
                          }
                          else
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x150,
                              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                              (const char *)(unsigned int)v47);
                            result = v48;
                          }
                        }
                        else
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x14F,
                            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                            (const char *)(unsigned int)v44);
                          result = v45;
                        }
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x14E,
                          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                          (const char *)(unsigned int)v40);
                        result = v41;
                      }
                    }
                    else
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x14D,
                        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                        (const char *)(unsigned int)v36);
                      result = v37;
                    }
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x14C,
                      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                      (const char *)(unsigned int)v32);
                    result = v33;
                  }
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x14B,
                    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                    (const char *)(unsigned int)v28);
                  result = v29;
                }
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x14A,
                  (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                  (const char *)(unsigned int)v23);
                result = v24;
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x149,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                (const char *)(unsigned int)v20);
              result = v21;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x148,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v17);
            result = v18;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x147,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v14);
          result = v15;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x146,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v10);
        result = v11;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v5);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x17D,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           v7);
  }
  return result;
}
