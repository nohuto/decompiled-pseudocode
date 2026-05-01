/*
 * XREFs of _lambda_398c59650b4848a9090526bc8733f68c_::operator() @ 0x1801F7E30
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_398c59650b4848a9090526bc8733f68c___::Run @ 0x1801F7E20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_398c59650b4848a9090526bc8733f68c___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800C708C (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_398c59650b4848a9090526bc8733f68c_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  bool v5; // bp
  __int64 v6; // rsi
  std::_Ref_count_base *v7; // rdi
  HWND DesktopWindow; // r8
  bool v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  v10 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 296);
  v5 = 1;
  if ( v4 )
    _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
  v6 = *(_QWORD *)(v3 + 288);
  v7 = *(std::_Ref_count_base **)(v3 + 296);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 447LL) )
  {
    DesktopWindow = GetDesktopWindow();
    goto LABEL_14;
  }
  if ( v6 )
  {
    DesktopWindow = *(HWND *)v6;
    v5 = (*(_DWORD *)(v6 + 56) & 2) != 0;
LABEL_14:
    v9 = v5;
    if ( DesktopWindow )
    {
      BroadcastDVRComponent::SendShellNotificationToDVR(
        *(_QWORD *)(a1 + 8),
        13 - (*(_DWORD *)a1 != 0),
        DesktopWindow,
        0,
        0,
        &v9,
        0LL);
      if ( v9 && !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 447LL) )
        *(_DWORD *)(v6 + 56) |= 2u;
    }
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    return;
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
