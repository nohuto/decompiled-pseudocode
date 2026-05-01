/*
 * XREFs of ?GameDVRConfigChangedTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1801F4FFC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95___::Run @ 0x18029B3D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1800C8874 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::GameDVRConfigChangedTask(BroadcastDVRComponent *this, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  std::_Ref_count_base *v7; // rbp
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // r9d
  bool v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h]

  v4 = *((_QWORD *)this + 38);
  v14 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 40);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v6 = *((_QWORD *)this + 39);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 40);
  if ( v6 && *(_BYTE *)(v6 + 16) && a2 )
  {
    v8 = *(_DWORD *)(v6 + 56);
    v9 = (*(_BYTE *)(v6 + 18) != 0 ? 65 : 1) | 2;
    if ( (v8 & 8) == 0 )
      v9 = *(_BYTE *)(v6 + 18) != 0 ? 65 : 1;
    v10 = v9 | 4;
    if ( (v8 & 0x10) == 0 )
      v10 = v9;
    v11 = v10 | 8;
    if ( (v8 & 0x20) == 0 )
      v11 = v10;
    v12 = v11 | 0x10;
    if ( (v8 & 0x40) == 0 )
      v12 = v11;
    v13 = (*(_DWORD *)(v6 + 56) & 2) != 0;
    BroadcastDVRComponent::SendShellNotificationToDVR2(
      (__int64)this,
      2,
      (struct BroadcastDVRActiveAppInfo *)v6,
      v12,
      (v8 & 2) == 0,
      &v13);
    if ( v13 )
      *(_DWORD *)(v6 + 56) |= 2u;
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
