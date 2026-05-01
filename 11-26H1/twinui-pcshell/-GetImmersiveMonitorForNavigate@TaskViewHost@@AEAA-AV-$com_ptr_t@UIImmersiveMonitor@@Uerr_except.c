/*
 * XREFs of ?GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@I@Z @ 0x1806A650C
 * Callers:
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1806A65F0 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall TaskViewHost::GetImmersiveMonitorForNavigate(_QWORD *a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 v8; // r14
  int (__fastcall *v9)(__int64, bool, __int64, __int64 *); // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v8 = a1[29];
  if ( !v8 || (unsigned __int64)((__int64)(a1[41] - a1[40]) >> 3) <= 1 )
    goto LABEL_6;
  v12 = 0LL;
  v9 = *(int (__fastcall **)(__int64, bool, __int64, __int64 *))(*(_QWORD *)v8 + 104LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v12);
  if ( v9(v8, a4 == 5, a3, &v12) < 0 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
LABEL_6:
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      a2,
      a1[30]);
    return a2;
  }
  v10 = v12;
  v12 = 0LL;
  *a2 = v10;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  return a2;
}
