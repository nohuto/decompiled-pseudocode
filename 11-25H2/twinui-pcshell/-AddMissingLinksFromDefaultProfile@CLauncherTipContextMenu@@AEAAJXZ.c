/*
 * XREFs of ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DC6CC
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x18009D874 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x180198E6C (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x180198FDC (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@1@XZ @ 0x180289108 (--C-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$te.c)
 *     ??1CShallowContainerIterator@@QEAA@XZ @ 0x1802C0650 (--1CShallowContainerIterator@@QEAA@XZ.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1802C7A98 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C93A4 (--1-$test_data_control@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile(CLauncherTipContextMenu *this)
{
  HRESULT v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // edi
  HRESULT v5; // eax
  HRESULT v6; // esi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v10[8]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IShellItem *ppv; // [rsp+70h] [rbp+20h] BYREF
  struct IShellItem2 *v13; // [rsp+78h] [rbp+28h] BYREF
  IShellItem *psiParent; // [rsp+80h] [rbp+30h] BYREF

  if ( *((_QWORD *)this + 45) != *((_QWORD *)this + 46) )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::operator->(
                  (__int64)this + 408,
                  (__int64 *)&v13)
             + 264) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>::~test_data_control<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>>((void **)&v13);
    psiParent = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
    v2 = SHGetKnownFolderItem(
           &FOLDERID_UserProfiles,
           KF_FLAG_DEFAULT,
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           (void **)&psiParent);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E1,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)(unsigned int)v2);
LABEL_17:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
      return v3;
    }
    v4 = 0;
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    v5 = SHCreateItemFromRelativeName(
           psiParent,
           L"Default\\AppData\\Local\\Microsoft\\Windows\\WinX",
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           (void **)&ppv);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E4,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)(unsigned int)v5);
LABEL_16:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
      v3 = v6;
      goto LABEL_17;
    }
    CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v10, ppv, 32);
    v6 = v10[0];
    if ( (v10[0] & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E7,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)v10[0]);
LABEL_15:
      CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v10);
      goto LABEL_16;
    }
    v13 = 0LL;
    while ( 1 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v10, &v13) )
        break;
      v7 = CLauncherTipContextMenu::_AddFolderLinksToCommands(this, v13, 1, v4);
      v6 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3EC,
          (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
        goto LABEL_15;
      }
      v8 = v4 + 1;
      if ( v4 >= (unsigned __int64)(((__int64)(*((_QWORD *)this + 49) - *((_QWORD *)this + 48)) >> 2) - 1) )
        v8 = v4;
      v4 = v8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v10);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  }
  return 0LL;
}
