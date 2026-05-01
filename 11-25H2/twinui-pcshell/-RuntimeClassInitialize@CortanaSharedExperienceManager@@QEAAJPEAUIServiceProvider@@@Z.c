/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18036D850
 * Callers:
 *     ??$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180369564 (--$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x1800EC6B0 (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802B0E70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1802B0E70.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$make_unique_nothrow@VCortanaPositionerSelector@Cortana@TwinUI@@AEAPEAUIServiceProvider@@PEAVCortanaExperienceManagerNotification@@@wil@@YA?AV?$unique_ptr@VCortanaPositionerSelector@Cortana@TwinUI@@U?$default_delete@VCortanaPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@AEAPEAUIServiceProvider@@$$QEAPEAVCortanaExperienceManagerNotification@@@Z @ 0x180369CD0 (--$make_unique_nothrow@VCortanaPositionerSelector@Cortana@TwinUI@@AEAPEAUIServiceProvider@@PEAVC.c)
 *     ??0CortanaExperienceManagerNotification@@QEAA@PEAVCortanaSharedExperienceManager@@@Z @ 0x18036A21C (--0CortanaExperienceManagerNotification@@QEAA@PEAVCortanaSharedExperienceManager@@@Z.c)
 *     ??1CortanaPositionerSelector@Cortana@TwinUI@@QEAA@XZ @ 0x18036A914 (--1CortanaPositionerSelector@Cortana@TwinUI@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18036D994 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::RuntimeClassInitialize(
        CortanaSharedExperienceManager *this,
        struct IServiceProvider *a2)
{
  CortanaExperienceManagerNotification *v3; // rbx
  TwinUI::Cortana::CortanaPositionerSelector *v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  TwinUI::Cortana::CortanaPositionerSelector *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  TwinUI::Cortana::CortanaPositionerSelector *v12; // [rsp+50h] [rbp+30h] BYREF
  void *v13; // [rsp+58h] [rbp+38h] BYREF
  CortanaExperienceManagerNotification *v14; // [rsp+60h] [rbp+40h]
  CortanaExperienceManagerNotification *v15; // [rsp+68h] [rbp+48h] BYREF

  v13 = a2;
  v3 = 0LL;
  v14 = 0LL;
  v4 = (TwinUI::Cortana::CortanaPositionerSelector *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  v5 = 0LL;
  if ( v4 )
  {
    v3 = CortanaExperienceManagerNotification::CortanaExperienceManagerNotification(v4, this);
    v14 = v3;
    v12 = 0LL;
    v5 = (__int64)v3;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v12);
  v15 = v3;
  v6 = wil::make_unique_nothrow<TwinUI::Cortana::CortanaPositionerSelector,IServiceProvider * &,CortanaExperienceManagerNotification *>(
         &v12,
         (__int64 *)&v13,
         &v15);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>((__int64)&v13, v6);
  v7 = v12;
  v12 = 0LL;
  if ( v7 )
  {
    TwinUI::Cortana::CortanaPositionerSelector::~CortanaPositionerSelector(v7);
    operator delete(v7, (const struct std::nothrow_t *)0x30);
  }
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(
    (__int64)&v15,
    (__int64 *)&v13);
  v8 = CortanaSharedExperienceManager::RuntimeClassInitialize(this);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( v13 )
      operator delete(v13, (const struct std::nothrow_t *)8);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    if ( v13 )
      operator delete(v13, (const struct std::nothrow_t *)8);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(v5);
    return v9;
  }
}
