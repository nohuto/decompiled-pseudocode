/*
 * XREFs of ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180184170
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180127C68 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801A29A0 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::_lambda_8b16b784198cc2ffe8f5be0ce118e36a_ @ 0x18042DA60 (_lambda_8b16b784198cc2ffe8f5be0ce118e36a_--_lambda_8b16b784198cc2ffe8f5be0ce118e36a_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8b16b784198cc2ffe8f5be0ce118e36a___ @ 0x180433C34 (Windows--Internal--ComTaskPool--QueueTask__lambda_8b16b784198cc2ffe8f5be0ce118e36a___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_048a96d3662c681a0b7978326510b206___ @ 0x180442C7C (Windows--Internal--ComTaskPool--QueueTask__lambda_048a96d3662c681a0b7978326510b206___.c)
 *     _lambda_048a96d3662c681a0b7978326510b206_::_lambda_048a96d3662c681a0b7978326510b206_ @ 0x180444B10 (_lambda_048a96d3662c681a0b7978326510b206_--_lambda_048a96d3662c681a0b7978326510b206_.c)
 *     _lambda_048a96d3662c681a0b7978326510b206_::__lambda_048a96d3662c681a0b7978326510b206_ @ 0x180444B28 (_lambda_048a96d3662c681a0b7978326510b206_--__lambda_048a96d3662c681a0b7978326510b206_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  HSTRING v16; // [rsp+80h] [rbp+30h] BYREF
  PCWSTR StringRawBuffer; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  *(_DWORD *)(a1 + 620) = a2;
  v4 = *(int *)(a1 + 296);
  v18 = v4;
  v5 = 0;
  if ( a2 || (int)CoreIsWindowServiceSupported(v4, &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc) < 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
    if ( a2 != *(_DWORD *)(a1 + 468) )
    {
      *(_DWORD *)(a1 + 468) = a2;
      if ( *(_QWORD *)(a1 + 112) )
      {
        v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 280) + 152LL))(
                         *(_QWORD *)(a1 + 280),
                         &v16);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v6 + 64LL))(*v6, *(unsigned int *)(a1 + 352), a2);
        if ( v16 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16LL))(v16);
      }
      else if ( a2 - 3 <= 1 )
      {
        v16 = 0LL;
        v11 = Windows::Internal::String::Initialize(&v16, (HSTRING *)(a1 + 312));
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC67,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v11);
        v12 = lambda_048a96d3662c681a0b7978326510b206_::_lambda_048a96d3662c681a0b7978326510b206_(
                &StringRawBuffer,
                &v16);
        Windows::Internal::ComTaskPool::QueueTask__lambda_048a96d3662c681a0b7978326510b206___(v13, v12);
        lambda_048a96d3662c681a0b7978326510b206_::__lambda_048a96d3662c681a0b7978326510b206_(&StringRawBuffer);
        Windows::Internal::String::~String(&v16);
      }
      LOBYTE(v5) = a2 - 4 <= 1;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 216LL))(a1, 0LL, v5);
    }
  }
  else
  {
    UwpWindowWrapperBase::NavigateInternal(a1, 3LL);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v16,
      a1);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 312), 0LL);
    v7 = lambda_8b16b784198cc2ffe8f5be0ce118e36a_::_lambda_8b16b784198cc2ffe8f5be0ce118e36a_(
           (unsigned int)v14,
           (unsigned int)&v16,
           (int)a1 - 8,
           (unsigned int)&v18,
           (__int64)&StringRawBuffer);
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_8b16b784198cc2ffe8f5be0ce118e36a___(
            v9,
            v8,
            *(unsigned int *)(a1 + 544),
            v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v14);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
  }
}
