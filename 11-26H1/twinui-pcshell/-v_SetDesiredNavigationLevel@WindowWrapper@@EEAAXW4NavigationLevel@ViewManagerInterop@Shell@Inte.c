/*
 * XREFs of ?v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18042FC20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1ccbe0050df59b1c7585372b6aa23ae_____lambda_b1ccbe0050df59b1c7585372b6aa23ae___ @ 0x18042D6E0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b1ccbe0050df5.c)
 *     _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::_lambda_8b16b784198cc2ffe8f5be0ce118e36a_ @ 0x18042DA60 (_lambda_8b16b784198cc2ffe8f5be0ce118e36a_--_lambda_8b16b784198cc2ffe8f5be0ce118e36a_.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18043CC58 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  unsigned int v6; // edi
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  int v10; // edi
  __int64 v11[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  volatile signed __int32 *StringRawBuffer; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  *(_DWORD *)(a1 + 612) = a2;
  v4 = *(int *)(a1 + 296);
  v15 = v4;
  if ( a2 || (int)CoreIsWindowServiceSupported(v4, &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc) < 0 )
  {
    WindowWrapperBase::NavigateInternal(a1, a2);
  }
  else
  {
    WindowWrapperBase::NavigateInternal(a1, 3LL);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v14,
      a1);
    StringRawBuffer = (volatile signed __int32 *)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 304), 0LL);
    v5 = lambda_8b16b784198cc2ffe8f5be0ce118e36a_::_lambda_8b16b784198cc2ffe8f5be0ce118e36a_(
           v11,
           &v14,
           a1 - 8,
           &v15,
           (__int64 *)&StringRawBuffer);
    v6 = *(_DWORD *)(a1 + 544);
    v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1ccbe0050df59b1c7585372b6aa23ae_____lambda_b1ccbe0050df59b1c7585372b6aa23ae___(
           &StringRawBuffer,
           v5);
    v8 = *v7;
    *v7 = 0LL;
    v9 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      StringRawBuffer = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v9);
    }
    v10 = SHTaskPoolQueueTask(3LL, 2LL, v6);
    if ( v8 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v11);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  }
}
