/*
 * XREFs of ?NotifyReadyForPresentationChanged@WindowWrapperBase@@AEAAX_N@Z @ 0x18043CDF4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Do_call @ 0x18043F9C0 (std--_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d52ccf2fb40d48112c11e0ea0a6fb7ef_____lambda_d52ccf2fb40d48112c11e0ea0a6fb7ef___ @ 0x1804365EC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d52ccf2fb40d4.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d6b6cd96afe151513f0173ad1156cee6_____lambda_d6b6cd96afe151513f0173ad1156cee6___ @ 0x18043667C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d6b6cd96afe15.c)
 *     _lambda_5fb34dca825284ea67ff945056291927_::_lambda_5fb34dca825284ea67ff945056291927_ @ 0x1804389B8 (_lambda_5fb34dca825284ea67ff945056291927_--_lambda_5fb34dca825284ea67ff945056291927_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::NotifyReadyForPresentationChanged(WindowWrapperBase *this, char a2)
{
  unsigned int v4; // esi
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  int v8; // esi
  __int64 v9; // rax
  unsigned int v10; // edi
  volatile signed __int32 **v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rcx
  int v14; // edi
  _BYTE v15[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  volatile signed __int32 *v18; // [rsp+70h] [rbp+20h] BYREF
  char v19; // [rsp+78h] [rbp+28h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v19 = a2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  if ( a2 && !*((_BYTE *)this + 176) )
  {
    *((_BYTE *)this + 176) = 1;
    v20 = *((int *)this + 74);
    v4 = *((_DWORD *)this + 136);
    v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d52ccf2fb40d48112c11e0ea0a6fb7ef_____lambda_d52ccf2fb40d48112c11e0ea0a6fb7ef___(
           &v18,
           &v20);
    v6 = *v5;
    *v5 = 0LL;
    v7 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
    }
    v8 = SHTaskPoolQueueTask(0LL, 0LL, v4);
    if ( v6 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA49,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8);
  }
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    &v20,
    ((unsigned __int64)this + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  v9 = lambda_5fb34dca825284ea67ff945056291927_::_lambda_5fb34dca825284ea67ff945056291927_(
         (__int64)v15,
         (__int64)this,
         &v20,
         &v19);
  v10 = *((_DWORD *)this + 136);
  v11 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d6b6cd96afe151513f0173ad1156cee6_____lambda_d6b6cd96afe151513f0173ad1156cee6___(
          &v18,
          v9);
  v12 = *v11;
  *v11 = 0LL;
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v13);
  }
  v14 = SHTaskPoolQueueTask(3LL, 2LL, v10);
  if ( v12 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v16);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA54,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
}
