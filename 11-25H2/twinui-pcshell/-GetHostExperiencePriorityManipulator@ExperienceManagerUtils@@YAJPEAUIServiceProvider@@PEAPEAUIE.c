/*
 * XREFs of ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x180079954
 * Callers:
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BA420 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x18010B87C (-Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801529A0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x18004F3DC (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFact.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
        ExperienceManagerUtils *this,
        struct IServiceProvider *a2,
        struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **a3)
{
  __int64 (__fastcall *v5)(ExperienceManagerUtils *, void *, GUID *, ExperienceManagerUtils **); // rbx
  int v6; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v7; // r8
  unsigned int v8; // ebx
  ExperienceManagerUtils *v9; // rcx
  int HostExperiencePriorityManipulator; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ExperienceManagerUtils *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = *(__int64 (__fastcall **)(ExperienceManagerUtils *, void *, GUID *, ExperienceManagerUtils **))(*(_QWORD *)this + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v6 = v5(this, &unk_180752118, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v13);
  v8 = v6;
  if ( v6 >= 0 )
  {
    HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                          v13,
                                          (struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *)a2,
                                          v7);
    v8 = HostExperiencePriorityManipulator;
    if ( HostExperiencePriorityManipulator >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x106,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
        (const char *)(unsigned int)HostExperiencePriorityManipulator);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v6);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(ExperienceManagerUtils *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return v8;
}
