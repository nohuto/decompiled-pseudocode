/*
 * XREFs of ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800AC3C4
 * Callers:
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800ABB40 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 *     ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800AD2E0 (-RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800AF248 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801A3728 (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180049D2C (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x18004A924 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180079FAC (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??4?$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A60FC (--4-$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8108 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?IsTopLevel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8220 (-IsTopLevel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrevi.c)
 *     ?Value@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800ABA3C (-Value@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEve.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHierarchyWithWindowManager::GetTopLevelHostView(ViewHierarchyWithWindowManager *this, int a2)
{
  unsigned int v2; // esi
  int v4; // edi
  void (__fastcall ***v5)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rcx
  __int64 (__fastcall ***v6)(_QWORD, void *, __int64 *); // rbx
  char IsTopLevel; // bl
  int v8; // edi
  unsigned int v9; // edi
  __int64 *View; // rax
  void (__fastcall ***v11)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rcx
  __int64 (__fastcall ***v12)(_QWORD, void *, __int64 *); // rbx
  __int64 (__fastcall ***v13)(_QWORD, void *, __int64 *); // r14
  __int64 *v14; // rax
  int v15; // ecx
  __int64 (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  void (__fastcall ***v18)(_QWORD, __int64 *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-10h] BYREF
  int v24; // [rsp+98h] [rbp+38h] BYREF
  __int64 *v25; // [rsp+A0h] [rbp+40h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, void *, __int64 *); // [rsp+A8h] [rbp+48h] BYREF

  v2 = a2;
  v4 = 0;
  v24 = 0;
  ViewHierarchyWithWindowManager::GetView((__int64)this, &v25, a2);
  if ( v25 )
  {
    v5 = (void (__fastcall ***)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Value(&v25, &v19);
    v26 = 0LL;
    if ( v5 )
    {
      (**v5)(
        v5,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v26);
      v6 = v26;
    }
    else
    {
      v6 = 0LL;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v19);
    if ( v6 )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
        (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))&v26,
        &v18);
      IsTopLevel = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::IsTopLevel(&v26);
      v20 = 0LL;
      while ( 1 )
      {
        v8 = v4 | 1;
        if ( winrt::Windows::Foundation::operator==(&v18, &v20) || IsTopLevel )
          break;
        v9 = v8 & 0xFFFFFFFE;
        v2 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
                (__int64 *)&v18,
                &v24);
        View = ViewHierarchyWithWindowManager::GetView((__int64)this, &v21, v2);
        winrt::com_ptr<winrt::impl::IRestrictedErrorInfo>::operator=((__int64 *)&v25, View);
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v21);
        v11 = (void (__fastcall ***)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Value(&v25, &v22);
        if ( v11 )
        {
          v17 = 0LL;
          (**v11)(
            v11,
            &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
            &v17);
          v12 = v17;
          v13 = v17;
        }
        else
        {
          v12 = 0LL;
          v13 = 0LL;
        }
        v17 = v12;
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v22);
        if ( v13 )
        {
          v14 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
                  (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))&v17,
                  v23);
          v15 = 2;
        }
        else
        {
          v19 = 0LL;
          v14 = &v19;
          v15 = 4;
        }
        v4 = v15 | v9;
        winrt::com_ptr<winrt::impl::IRestrictedErrorInfo>::operator=((__int64 *)&v18, v14);
        if ( (v4 & 4) != 0 )
        {
          v4 &= ~4u;
          winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v19);
        }
        if ( (v4 & 2) != 0 )
        {
          v4 &= ~2u;
          winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)v23);
        }
        if ( v12 )
          IsTopLevel = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::IsTopLevel(&v17);
        else
          IsTopLevel = 1;
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v17);
      }
      winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v18);
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v26);
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v25);
  return v2;
}
