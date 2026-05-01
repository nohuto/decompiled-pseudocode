/*
 * XREFs of wistd::__invoke_void_return_wrapper_void_::__call__lambda_cfd27ea05118e91876b01966f7f941a5__&_enum_Windows::Internal::Shell::Holographic::ShellState_const_&_ @ 0x1802BD41C
 * Callers:
 *     wistd::__function::__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x1802300A0 (wistd--__function--__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl(enum_Windows--I.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ba7657056a16329b8a6e21579ce82d14___ @ 0x1801D2074 (Windows--Internal--ComTaskPool--QueueTask__lambda_ba7657056a16329b8a6e21579ce82d14___.c)
 */

__int64 __fastcall wistd::__invoke_void_return_wrapper_void_::__call__lambda_cfd27ea05118e91876b01966f7f941a5____enum_Windows::Internal::Shell::Holographic::ShellState_const___(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // r8
  volatile int v3; // r9d
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  volatile int *v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  volatile int v10; // [rsp+28h] [rbp-20h]
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = *(_QWORD *)(*a1 + 616);
  if ( v4 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v4 + 44), a2);
  v9 = v2;
  v10 = v3;
  v11[0] = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v11, a2);
  Windows::Internal::ComTaskPool::QueueTask__lambda_ba7657056a16329b8a6e21579ce82d14___(v5, 0, v6, (__int64)&v9);
  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v11);
  if ( v4 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
             v4,
             v8);
  return result;
}
