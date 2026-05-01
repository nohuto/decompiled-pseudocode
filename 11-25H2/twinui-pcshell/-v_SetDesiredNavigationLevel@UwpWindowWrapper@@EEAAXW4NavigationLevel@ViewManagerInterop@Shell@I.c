/*
 * XREFs of ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018D040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18018EDB8 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801AAE90 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8b16b784198cc2ffe8f5be0ce118e36a___ @ 0x180427DA4 (Windows--Internal--ComTaskPool--QueueTask__lambda_8b16b784198cc2ffe8f5be0ce118e36a___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___ @ 0x18043683C (Windows--Internal--ComTaskPool--QueueTask__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___.c)
 *     _lambda_3b1236d83d5c2b1f5543058f6bf0f90a_::_lambda_3b1236d83d5c2b1f5543058f6bf0f90a_ @ 0x1804384A0 (_lambda_3b1236d83d5c2b1f5543058f6bf0f90a_--_lambda_3b1236d83d5c2b1f5543058f6bf0f90a_.c)
 *     _lambda_3b1236d83d5c2b1f5543058f6bf0f90a_::__lambda_3b1236d83d5c2b1f5543058f6bf0f90a_ @ 0x180438590 (_lambda_3b1236d83d5c2b1f5543058f6bf0f90a_--__lambda_3b1236d83d5c2b1f5543058f6bf0f90a_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  __int64 v4; // r14
  unsigned int v5; // esi
  _QWORD *v6; // rax
  PCWSTR StringRawBuffer; // rbx
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING v15; // [rsp+60h] [rbp+20h] BYREF
  char v16; // [rsp+70h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  *(_DWORD *)(a1 + 636) = a2;
  v4 = *(int *)(a1 + 296);
  v5 = 0;
  if ( a2 || (int)CoreIsWindowServiceSupported(*(int *)(a1 + 296), &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc) < 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
    if ( a2 != *(_DWORD *)(a1 + 484) )
    {
      *(_DWORD *)(a1 + 484) = a2;
      if ( *(_QWORD *)(a1 + 112) )
      {
        v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 280) + 152LL))(
                         *(_QWORD *)(a1 + 280),
                         &v15);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v6 + 64LL))(*v6, *(unsigned int *)(a1 + 352), a2);
        if ( v15 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16LL))(v15);
      }
      else if ( a2 - 3 <= 1 )
      {
        v15 = 0LL;
        v10 = Windows::Internal::String::Initialize((Windows::Internal::String *)&v15, (HSTRING *)(a1 + 312));
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC6F,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v10);
        v11 = lambda_3b1236d83d5c2b1f5543058f6bf0f90a_::_lambda_3b1236d83d5c2b1f5543058f6bf0f90a_(&v16, &v15);
        Windows::Internal::ComTaskPool::QueueTask__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___(v12, v11);
        lambda_3b1236d83d5c2b1f5543058f6bf0f90a_::__lambda_3b1236d83d5c2b1f5543058f6bf0f90a_(&v16);
        Windows::Internal::String::~String(&v15);
      }
      LOBYTE(v5) = a2 - 4 <= 1;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 216LL))(a1, 0LL, v5);
    }
  }
  else
  {
    UwpWindowWrapperBase::NavigateInternal(a1, 3LL);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v15,
      a1);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 312), 0LL);
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
      v13,
      (__int64 *)&v15);
    v13[1] = a1 - 8;
    v13[2] = v4;
    v13[3] = (__int64)StringRawBuffer;
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_8b16b784198cc2ffe8f5be0ce118e36a___(
           a1 - 8,
           v8,
           *(unsigned int *)(a1 + 560),
           v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v13);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
  }
}
