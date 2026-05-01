/*
 * XREFs of ?UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@@PEAUISnappedWindowModel@@@Z @ 0x1801BC44C
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1801BBCE0 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800A51F4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DAFDC (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802388B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall SnapLayoutProvider::UpdateMonitorDataFromPoint(
        SnapLayoutProvider *this,
        const struct tagPOINT *a2,
        struct IApplicationView *a3,
        struct ISnappedWindowModel *a4)
{
  __int64 *v4; // r15
  __int64 v6; // rcx
  int v10; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, const struct tagPOINT *, GUID *, GUID *); // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  const struct _GUID *v20; // r8
  int Instance; // eax
  int v22; // [rsp+20h] [rbp-68h]
  int v23; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (__int64 *)((char *)this + 48);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    v24 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 72LL))(v6, &v24);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1FE,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)v10,
        v22);
    if ( Geometry::CRect::Contains((Geometry::CRect *)&v24, a2) )
      return 0;
  }
  v12 = *((_QWORD *)this + 5);
  v13 = *(__int64 (__fastcall **)(__int64, const struct tagPOINT *, GUID *, GUID *))(*(_QWORD *)v12 + 96LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v4);
  v14 = v13(v12, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x206,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
      (const char *)(unsigned int)v14,
      (int)v4);
  v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v4 + 88LL))(*v4, (char *)this + 56);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x207,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
      (const char *)(unsigned int)v15,
      (int)v4);
  v16 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 6) + 72LL))(
          *((_QWORD *)this + 6),
          (char *)this + 72);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x208,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
      (const char *)(unsigned int)v16,
      (int)v4);
  v17 = *((_QWORD *)this + 6);
  v23 = 0;
  v18 = (*(__int64 (__fastcall **)(__int64, char *, int *))(*(_QWORD *)v17 + 112LL))(v17, (char *)this + 88, &v23);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x20B,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
      (const char *)(unsigned int)v18,
      (int)v4);
  if ( a4 )
  {
    v19 = (*(__int64 (__fastcall **)(struct ISnappedWindowModel *, _QWORD, char *))(*(_QWORD *)a4 + 24LL))(
            a4,
            *((_QWORD *)this + 6),
            (char *)this + 96);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20F,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)v19);
      CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)this + 96);
    }
  }
  if ( a3 )
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 4);
    Instance = CSnappedWindow::s_CreateInstance(*((struct IImmersiveMonitor **)this + 6), a3, v20, (void **)this + 4);
    if ( Instance < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x215,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)Instance);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 4);
    }
  }
  *((_BYTE *)this + 128) = *((_DWORD *)this + 17) - *((_DWORD *)this + 15) > *((_DWORD *)this + 16)
                                                                           - *((_DWORD *)this + 14);
  return 1;
}
