/*
 * XREFs of _lambda_3b1236d83d5c2b1f5543058f6bf0f90a_::operator() @ 0x180438BE8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___::Run @ 0x18043B2A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_3b1236d83d5c2b1f5543058f6bf0f90a_::operator()(HSTRING *a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, PCWSTR, _QWORD, _QWORD, int *); // rdi
  PCWSTR StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+48h] [rbp+10h] BYREF
  LPVOID v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v2 = CoCreateInstance(&CLSID_ApplicationActivationClient, 0LL, 1u, &GUID_2e941141_7f97_4756_ba1d_9decde894a3d, &v11);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v10 = 0;
    v5 = v11;
    v6 = *(__int64 (__fastcall **)(LPVOID, PCWSTR, _QWORD, _QWORD, int *))(*(_QWORD *)v11 + 24LL);
    StringRawBuffer = WindowsGetStringRawBuffer(*a1, 0LL);
    v2 = v6(v5, StringRawBuffer, 0LL, 0LL, &v10);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 3198LL;
  }
  else
  {
    v4 = 3191LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  return v3;
}
