/*
 * XREFs of wistd::__invoke_void_return_wrapper_void_::__call__lambda_cfd27ea05118e91876b01966f7f941a5__&_enum_Windows::Internal::Shell::Holographic::ShellState_const_&_ @ 0x180298190
 * Callers:
 *     wistd::__function::__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x180221020 (wistd--__function--__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl(enum_Windows--I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800245A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ba7657056a16329b8a6e21579ce82d14___ @ 0x1800245FC (Windows--Internal--ComTaskPool--QueueTask__lambda_ba7657056a16329b8a6e21579ce82d14___.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180072E58 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_ @ 0x180298204 (_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_--_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_.c)
 */

__int64 __fastcall wistd::__invoke_void_return_wrapper_void_::__call__lambda_cfd27ea05118e91876b01966f7f941a5____enum_Windows::Internal::Shell::Holographic::ShellState_const___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rbx
  volatile int *v3; // rdx
  __int128 v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  volatile int *v8; // rdx
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(*a1 + 616LL);
  v4 = *(_OWORD *)lambda_7c0ea6bcd92fa0f22b391c2e3237e792_::_lambda_7c0ea6bcd92fa0f22b391c2e3237e792_(v9, *a1, a2);
  if ( v2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 44), v3);
  v11[0] = v2;
  v10 = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v11, v3);
  Windows::Internal::ComTaskPool::QueueTask__lambda_ba7657056a16329b8a6e21579ce82d14___(v5, 0, v6, &v10);
  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v11);
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
             v2,
             v8);
  return result;
}
