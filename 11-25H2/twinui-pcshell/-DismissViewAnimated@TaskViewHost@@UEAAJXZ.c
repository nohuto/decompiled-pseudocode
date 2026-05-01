/*
 * XREFs of ?DismissViewAnimated@TaskViewHost@@UEAAJXZ @ 0x18067F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___ @ 0x18067E3F0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_ITaskView.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::DismissViewAnimated(TaskViewHost *this)
{
  signed __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v3, 1);
  if ( *((_QWORD *)this + 43) < (unsigned __int64)((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 3) )
    (*(void (__fastcall **)(TaskViewHost *))(*(_QWORD *)this + 40LL))(this);
  if ( *((_DWORD *)this + 186) == 1 )
  {
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___(
      &v5,
      *((__int64 **)this + 40),
      *((__int64 **)this + 41),
      (__int64)this);
    *((_DWORD *)this + 186) = 2;
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v3);
  return 0LL;
}
