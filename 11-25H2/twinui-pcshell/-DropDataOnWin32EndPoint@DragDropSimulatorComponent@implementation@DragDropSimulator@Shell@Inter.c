/*
 * XREFs of ?DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAKAEBV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@9@PEAUHWND__@@AEBUtagPOINT@@_N@Z @ 0x1805557C0
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x180556E70 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180556E70.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BFCC (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEAA@XZ @ 0x180554A14 (--1_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEAA@XZ.c)
 *     ??R_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEBAJKKPEAK@Z @ 0x180554D80 (--R_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEBAJKKPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnWin32EndPoint(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        int *a5,
        char a6)
{
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int i; // ebx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v17[2]; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+30h] [rbp-10h]
  int v19; // [rsp+34h] [rbp-Ch]
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v22; // [rsp+60h] [rbp+20h] BYREF
  int v23; // [rsp+78h] [rbp+38h] BYREF

  v22 = a1;
  v8 = *a5;
  v9 = a5[1];
  wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(v17, a2);
  v17[1] = a4;
  v18 = v8;
  v19 = v9;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    &v20,
    a3);
  LODWORD(v22) = 1;
  v10 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 1, 1, (__int64)&v22);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B9,
      (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v10,
      v17[0]);
  for ( i = 0; i < 4; ++i )
  {
    LODWORD(a5) = 1;
    v12 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 2, 1, (__int64)&a5);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1BE,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v12,
        v17[0]);
  }
  if ( a6 )
  {
    v23 = 1;
    v13 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 3, 1, (__int64)&v23);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C5,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v13,
        v17[0]);
    v14 = v22;
  }
  else
  {
    LODWORD(a5) = 1;
    v15 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 4, 0, (__int64)&a5);
    if ( v15 >= 0 )
    {
      v14 = (unsigned int)a5;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1CC,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v15);
      v14 = 0;
    }
  }
  _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::~_lambda_07addfc01b5a15b9e6a299ea3205aeb7_((_lambda_07addfc01b5a15b9e6a299ea3205aeb7_ *)v17);
  return v14;
}
