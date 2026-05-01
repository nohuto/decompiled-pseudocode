/*
 * XREFs of ?IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x1806A6890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?GetFrameForHwnd@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18022F5C4 (-GetFrameForHwnd@TaskViewHost@@AEAA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@w.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TaskViewHost::IsFrameWindowForHost(TaskViewHost *this, __int64 a2)
{
  char *v3; // rbx
  signed __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)this - 120;
  v5 = ((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v5, 1);
  LOBYTE(v3) = *TaskViewHost::GetFrameForHwnd((__int64)v3, &v7, a2) != 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v5);
  return (char)v3;
}
