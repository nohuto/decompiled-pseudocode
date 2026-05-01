/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914____0 @ 0x180443F9C
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914___ @ 0x180443F78 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a5d22ecb58441efa00d854dd3686f914____long_&__lambda_a5d22ecb58441efa00d854dd3686f914___ @ 0x1804423A0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a5d22ec.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914____0(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  void *v4; // r8
  unsigned int v5; // edi
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  int v9; // edi
  volatile signed __int32 *v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = a3;
  v12 = 0;
  v14 = 0;
  if ( CoGetApartmentType((APTTYPE *)&v12, (APTTYPEQUALIFIER *)&v14) < 0 || !v12 || v12 == 3 )
    v5 = 0;
  else
    v5 = 4;
  LODWORD(v13) = 0;
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a5d22ecb58441efa00d854dd3686f914____long____lambda_a5d22ecb58441efa00d854dd3686f914___(
         &v11,
         (__int64)&v13,
         v4);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v9 >= 0 )
    return (unsigned int)v13;
  return (unsigned int)v9;
}
