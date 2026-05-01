/*
 * XREFs of ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180014F84
 * Callers:
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x1800146D8 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x180306360 (-HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180015140 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180137848 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CTaskWindow::s_UpdateNavigationLevel(
        struct IImmersiveApplicationInternal *a1,
        struct CTaskWindow::TASK_WINDOW *a2)
{
  int v4; // r8d
  unsigned int v5; // r12d
  int v6; // r8d
  unsigned int v7; // r14d
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  void (__fastcall *v17)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+88h] [rbp+48h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v4 = *((_DWORD *)a2 + 22);
  v5 = 1;
  if ( !v4 )
    goto LABEL_19;
  v6 = v4 - 1;
  if ( !v6 )
  {
    v7 = 3;
    goto LABEL_4;
  }
  if ( v6 == 1 )
    v7 = 4;
  else
LABEL_19:
    v7 = 1;
LABEL_4:
  v21 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 2);
  v9 = **v8;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  v9(v8, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v21);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 344LL))(v21, v7);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
    (char *)a2 + 16,
    &v18);
  v19 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v19) >= 0 )
  {
    v12 = v19;
    v13 = 0LL;
    v20 = 0LL;
    if ( a1 )
    {
      v17 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a1 + 464LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      v17(a1, &v20);
      v13 = v20;
    }
    v14 = 0LL;
    v15 = *((_DWORD *)a2 + 3);
    if ( v15 != 5 )
      v5 = v15 + 8;
    LOBYTE(v14) = v7 == 4;
    CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
      &CApplicationManagerUtility::g_pIAMGlobals[1],
      v12,
      v5,
      v13,
      a1,
      v14);
    v16 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v10 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
