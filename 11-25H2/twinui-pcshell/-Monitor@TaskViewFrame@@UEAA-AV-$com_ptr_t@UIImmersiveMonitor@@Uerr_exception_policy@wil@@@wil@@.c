/*
 * XREFs of ?Monitor@TaskViewFrame@@UEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180696500
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 */

_QWORD *__fastcall TaskViewFrame::Monitor(__int64 a1, _QWORD *a2)
{
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    a2,
    *(_QWORD *)(a1 + 16));
  return a2;
}
