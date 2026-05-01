/*
 * XREFs of ?OnMessage@CVirtualDesktopManager@@UEAAJI_K_J@Z @ 0x1801F37A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEAUIWeakReference@@@Z @ 0x180109174 (--$GetWeakReference@VCVirtualDesktopManager@@@details@wil@@YAJPEAVCVirtualDesktopManager@@PEAPEA.c)
 *     _lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_ @ 0x180363940 (_lambda_bf3a05332e284c078092dab55d26056a_--_lambda_bf3a05332e284c078092dab55d26056a_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_ @ 0x18054FD68 (Windows--Internal--ComTaskPool--QueueTask__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__-_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::OnMessage(CVirtualDesktopManager *this, int a2, __int64 a3)
{
  char *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 != 26 || a3 != 20 )
    return 0LL;
  *(_QWORD *)v8 = 0LL;
  v4 = (char *)this - 48;
  wil::details::GetWeakReference<CVirtualDesktopManager>((__int64)this - 48, v8);
  lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_(v9, v4, v8);
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____(v5, v9);
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v8);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x665,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v8);
  return v7;
}
