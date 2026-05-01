/*
 * XREFs of ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180551910
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_bfcda2f4b09e169516dee7a5816294eb_::__lambda_bfcda2f4b09e169516dee7a5816294eb_ @ 0x18042CA08 (_lambda_bfcda2f4b09e169516dee7a5816294eb_--__lambda_bfcda2f4b09e169516dee7a5816294eb_.c)
 *     ??$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180550114 (--$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32Appl.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180551B10 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned int v15; // r12d
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  int v19; // edi
  int v20; // [rsp+20h] [rbp-98h]
  __int64 v21; // [rsp+30h] [rbp-88h] BYREF
  void *v22; // [rsp+38h] [rbp-80h] BYREF
  __int64 v23; // [rsp+40h] [rbp-78h] BYREF
  __int64 v24; // [rsp+48h] [rbp-70h]
  __int64 v25; // [rsp+50h] [rbp-68h] BYREF
  __int64 v26; // [rsp+58h] [rbp-60h] BYREF
  __int64 v27; // [rsp+60h] [rbp-58h] BYREF
  __int64 v28; // [rsp+68h] [rbp-50h]
  __int64 v29; // [rsp+70h] [rbp-48h]
  __int64 v30; // [rsp+78h] [rbp-40h]
  unsigned int v31; // [rsp+80h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 (__fastcall ***v33)(_QWORD, GUID *, _QWORD *); // [rsp+C8h] [rbp+10h] BYREF

  v33 = a2;
  try
  {
    wil::com_query<IWin32ApplicationView,IApplicationView * &>(&v23, &v33);
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
              &v26,
              a1);
      v11 = wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
              &v25,
              a4);
      v27 = a1;
      v12 = *v10;
      *v10 = 0LL;
      v28 = v12;
      v24 = *v11;
      v13 = v24;
      *v11 = 0LL;
      v29 = v13;
      v14 = v21;
      v30 = v21;
      v31 = a3;
      v15 = *(_DWORD *)(a1 + 48);
      v16 = 0LL;
      v17 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v18 = v17;
      v22 = v17;
      if ( v17 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v17);
        v18[2] = a1;
        v28 = 0LL;
        v18[3] = v12;
        v29 = 0LL;
        v18[4] = v24;
        v18[5] = v14;
        *((_DWORD *)v18 + 12) = a3;
        *v18 = &off_18072D458;
        v16 = v18;
        v22 = 0LL;
      }
      Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v22);
      v19 = SHTaskPoolQueueTask(3LL, 2LL, v15);
      if ( v16 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
      lambda_bfcda2f4b09e169516dee7a5816294eb_::__lambda_bfcda2f4b09e169516dee7a5816294eb_((__int64)&v27);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x194,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
          (const char *)(unsigned int)v19,
          (int)v16);
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
