/*
 * XREFs of ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x180601530
 * Callers:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x18027B660 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x1800AA594 (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x18019265C (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ?GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z @ 0x1801BEEEC (-GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18021E3FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@d.c)
 *     ??1CShallowContainerIterator@@QEAA@XZ @ 0x1802B7508 (--1CShallowContainerIterator@@QEAA@XZ.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1802BEA88 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ?RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z @ 0x180603070 (-RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CLauncherTipContextMenu::CleanupObsoleteLinks(CLauncherTipContextMenu *this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  HRESULT v3; // eax
  struct IShellItem2 *v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // edi
  int v7; // esi
  CLauncherTipContextMenu *v8; // rcx
  CLauncherTipContextMenu *v9; // rcx
  CLauncherTipContextMenu *v10; // rcx
  struct IShellItem *v12; // [rsp+30h] [rbp-29h] BYREF
  IShellItem *psiParent; // [rsp+38h] [rbp-21h] BYREF
  CLauncherTipContextMenu *v14; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v15[8]; // [rsp+48h] [rbp-11h] BYREF
  unsigned int v16[18]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  CLauncherTipContextMenu *v18; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v19; // [rsp+C8h] [rbp+6Fh] BYREF
  struct IShellItem *ppv; // [rsp+D0h] [rbp+77h] BYREF
  struct IShellItem2 *v21; // [rsp+D8h] [rbp+7Fh] BYREF

  v18 = this;
  psiParent = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  v1 = SHGetKnownFolderItem(
         &FOLDERID_LocalAppData,
         KF_FLAG_DEFAULT,
         0LL,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&psiParent);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_25;
  }
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  v3 = SHCreateItemFromRelativeName(
         psiParent,
         L"Microsoft\\Windows\\WinX",
         0LL,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&ppv);
  v2 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DD,
      (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)(unsigned int)v3);
LABEL_5:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    goto LABEL_25;
  }
  CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v16, ppv, 32);
  v2 = v16[0];
  if ( (v16[0] & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E1,
      (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)v16[0]);
LABEL_8:
    CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v16);
    goto LABEL_5;
  }
  v12 = 0LL;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
    if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v16, (struct IShellItem2 **)&v12) )
      break;
    CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)v15, v12, 64);
    v2 = v15[0];
    if ( (v15[0] & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E7,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)v15[0]);
      CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      goto LABEL_8;
    }
    v21 = 0LL;
    while ( 1 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)v15, &v21) )
        break;
      LODWORD(v18) = 0;
      v4 = v21;
      if ( ((int (__fastcall *)(struct IShellItem2 *, __int64, CLauncherTipContextMenu **))v21->lpVtbl->GetAttributes)(
             v21,
             0x10000LL,
             &v18) >= 0
        && ((unsigned int)v18 & 0x10000) != 0 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::GetImpl'::`2'::impl,
          1u,
          v5);
        v6 = 0;
        v19 = 0;
        v7 = -2147467259;
        v14 = 0LL;
        if ( (int)CLauncherTipContextMenu::GetPropStoreForLink(v8, v4, (struct CPropertyStoreHelper *)&v14) >= 0 )
        {
          v7 = CLauncherTipContextMenu::_CheckLinkHash(v9, (const struct CPropertyStoreHelper *)&v14, &v19);
          v6 = v19;
        }
        v10 = v14;
        if ( v14 )
          (*(void (__fastcall **)(CLauncherTipContextMenu *))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v7 >= 0 )
          CLauncherTipContextMenu::RemoveIfObsoleteLink(v10, v4, v6);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v15);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  CShallowContainerIterator::~CShallowContainerIterator((CShallowContainerIterator *)v16);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  v2 = 0;
LABEL_25:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  return v2;
}
