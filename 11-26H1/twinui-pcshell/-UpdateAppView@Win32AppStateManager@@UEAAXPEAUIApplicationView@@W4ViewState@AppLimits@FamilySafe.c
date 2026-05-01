/*
 * XREFs of ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180575AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x1802214C8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_bfcda2f4b09e169516dee7a5816294eb_::__lambda_bfcda2f4b09e169516dee7a5816294eb_ @ 0x180438C30 (_lambda_bfcda2f4b09e169516dee7a5816294eb_--__lambda_bfcda2f4b09e169516dee7a5816294eb_.c)
 *     ??$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1805743A8 (--$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32Appl.c)
 *     _lambda_bfcda2f4b09e169516dee7a5816294eb_::_lambda_bfcda2f4b09e169516dee7a5816294eb_ @ 0x1805745AC (_lambda_bfcda2f4b09e169516dee7a5816294eb_--_lambda_bfcda2f4b09e169516dee7a5816294eb_.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575C9C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32AppStateManager::UpdateAppView(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        unsigned int a3,
        __int64 a4,
        char a5)
{
  int v8; // eax
  const char *v9; // r9
  __int64 *v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r14d
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edi
  int v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+30h] [rbp-68h] BYREF
  void *v22; // [rsp+38h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h] BYREF
  __int64 v25; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v26[64]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 (__fastcall ***v28)(_QWORD, GUID *, _QWORD *); // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+18h] BYREF

  v29 = a3;
  v28 = a2;
  try
  {
    wil::com_query<IWin32ApplicationView,IApplicationView * &>(&v23, &v28);
    v21 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v21);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17F,
        (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
        (const char *)(unsigned int)v8,
        v20);
    if ( a5 )
    {
      Win32AppStateManager::UpdateAppViewWorker(a1, v21, a3, a4);
    }
    else
    {
      v10 = wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
              &v25,
              a1);
      v11 = wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
              &v24,
              a4);
      v12 = lambda_bfcda2f4b09e169516dee7a5816294eb_::_lambda_bfcda2f4b09e169516dee7a5816294eb_(
              (__int64)v26,
              a1,
              v10,
              v11,
              &v21,
              &v29);
      v13 = *(_DWORD *)(a1 + 48);
      v14 = 0LL;
      v15 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      v22 = v15;
      if ( v15 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v15);
        v16[2] = *(_QWORD *)v12;
        v17 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
        v16[3] = v17;
        v18 = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(v12 + 16) = 0LL;
        v16[4] = v18;
        v16[5] = *(_QWORD *)(v12 + 24);
        *((_DWORD *)v16 + 12) = *(_DWORD *)(v12 + 32);
        *v16 = &off_180757258;
        v14 = v16;
        v22 = 0LL;
      }
      Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v22);
      v19 = SHTaskPoolQueueTask(3LL, 2LL, v13);
      if ( v14 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      lambda_bfcda2f4b09e169516dee7a5816294eb_::__lambda_bfcda2f4b09e169516dee7a5816294eb_((__int64)v26);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x194,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
          (const char *)(unsigned int)v19,
          (int)v14);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x197,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
      v9);
  }
}
