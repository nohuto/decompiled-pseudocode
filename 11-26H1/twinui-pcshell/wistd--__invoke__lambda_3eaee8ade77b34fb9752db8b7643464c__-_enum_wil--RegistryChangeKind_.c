/*
 * XREFs of wistd::__invoke__lambda_3eaee8ade77b34fb9752db8b7643464c__&_enum_wil::RegistryChangeKind_ @ 0x18033EC68
 * Callers:
 *     wistd::__function::__func__lambda_3eaee8ade77b34fb9752db8b7643464c__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180344CE0 (wistd--__function--__func__lambda_3eaee8ade77b34fb9752db8b7643464c__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2_____lambda_2e75a8851595db8237201f9332f154f2___ @ 0x18033C3D8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2e75a8851595d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::__invoke__lambda_3eaee8ade77b34fb9752db8b7643464c____enum_wil::RegistryChangeKind_(
        __int64 *a1,
        volatile signed __int32 *a2)
{
  unsigned int v2; // edi
  volatile signed __int32 **v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v7 = *a1;
  v2 = *(_DWORD *)(v7 + 1580);
  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2_____lambda_2e75a8851595db8237201f9332f154f2___(
         &v8,
         &v7);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v5);
  }
  result = SHTaskPoolQueueTask(3LL, 2LL, v2);
  if ( v4 )
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
