/*
 * XREFs of ?ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x1800C5A30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1800C4E4C (-IsAllowedSku@@YA_NXZ.c)
 *     ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800C59EC (-IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b70c5209c5676cb8296daabd8d05eee7___ @ 0x180211844 (Windows--Internal--ComTaskPool--QueueTask__lambda_b70c5209c5676cb8296daabd8d05eee7___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BroadcastDVRComponent::ProcessCommand(__int64 a1, int a2)
{
  __int64 v4; // rbx
  BroadcastDVRComponent *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a1 - 8;
  if ( a1 != 8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(a1 - 8);
  if ( *(_BYTE *)(a1 + 424) && IsAllowedSku() && BroadcastDVRComponent::IsMRPInstalled(v6) )
  {
    v10 = a2;
    v11 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *))Windows::Internal::ComTaskPool::QueueTask__lambda_b70c5209c5676cb8296daabd8d05eee7___)(
           v8,
           v7,
           *(unsigned int *)(a1 + 232),
           &v10);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27D,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v9);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    return (unsigned int)v9;
  }
  else
  {
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    return 0LL;
  }
}
