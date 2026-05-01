/*
 * XREFs of wistd::__function::__func__lambda_b38e7178277656866a6ae1d155e28b4d__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180342470
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a5678224a4d8e5c3d2776497db9e7e0_____lambda_9a5678224a4d8e5c3d2776497db9e7e0___ @ 0x18033CA58 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9a5678224a4d8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_b38e7178277656866a6ae1d155e28b4d__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
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
  v7 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(v7 + 1516);
  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a5678224a4d8e5c3d2776497db9e7e0_____lambda_9a5678224a4d8e5c3d2776497db9e7e0___(
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
