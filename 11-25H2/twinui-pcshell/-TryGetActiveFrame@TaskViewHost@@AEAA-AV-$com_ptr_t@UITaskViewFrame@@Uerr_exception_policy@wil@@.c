/*
 * XREFs of ?TryGetActiveFrame@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180680BD4
 * Callers:
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x18067F880 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BFCC (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall TaskViewHost::TryGetActiveFrame(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rsi

  v2 = *(__int64 **)(a1 + 320);
  v4 = *(__int64 **)(a1 + 328);
  while ( v2 != v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 80LL))(*v2) )
    {
      wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
        a2,
        v2);
      return a2;
    }
    ++v2;
  }
  *a2 = 0LL;
  return a2;
}
