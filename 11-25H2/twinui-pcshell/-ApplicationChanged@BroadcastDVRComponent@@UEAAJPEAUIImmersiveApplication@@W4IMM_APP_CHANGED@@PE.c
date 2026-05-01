/*
 * XREFs of ?ApplicationChanged@BroadcastDVRComponent@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1800B1CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2d9789bb2175b1fa91a59323fd187f28___ @ 0x1800B1C2C (Windows--Internal--ComTaskPool--QueueTask__lambda_2d9789bb2175b1fa91a59323fd187f28___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BroadcastDVRComponent::ApplicationChanged(__int64 a1, __int64 a2, int a3)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rcx
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 312) || ((a3 - 6) & 0xFFFFFFFD) != 0 )
    return 0LL;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = a1 - 120;
  if ( a1 != 120 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(a1 - 120);
  *(_QWORD *)v12 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v12);
  v13 = a3;
  v14[0] = a1 - 120;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_2d9789bb2175b1fa91a59323fd187f28___(
          v9,
          v8,
          *(_DWORD *)(a1 + 120),
          (__int64)v12);
  v11 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v12);
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72C,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v10);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v10;
}
