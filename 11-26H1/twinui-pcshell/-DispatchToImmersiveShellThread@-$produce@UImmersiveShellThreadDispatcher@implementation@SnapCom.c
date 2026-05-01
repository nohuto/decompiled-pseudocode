/*
 * XREFs of ?DispatchToImmersiveShellThread@?$produce@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcher@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x18059EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x1805B6744 (CreationThreadDispatcher--RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>::DispatchToImmersiveShellThread(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 32LL;
  v3 = *(_QWORD *)v2;
  v4 = a1 + 8;
  if ( !a1 )
    v4 = 24LL;
  v5 = *(_DWORD *)v4;
  v7 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v7);
  CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___(v3, &v7, v5);
  return 0LL;
}
