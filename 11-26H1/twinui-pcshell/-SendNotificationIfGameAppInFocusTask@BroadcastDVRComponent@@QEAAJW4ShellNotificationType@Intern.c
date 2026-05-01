/*
 * XREFs of ?SendNotificationIfGameAppInFocusTask@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@@Z @ 0x180297D90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef26dee21aeac91685b7d7242343189e___::Run @ 0x180297D80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ef26dee21aeac91685b7d7242343189e___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1800C8874 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BroadcastDVRComponent::SendNotificationIfGameAppInFocusTask(_QWORD *a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  std::_Ref_count_base *v6; // rbp
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // r9d
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v3 = a1[38];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[40];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v5 = a1[39];
  v6 = (std::_Ref_count_base *)a1[40];
  if ( v5 && *(_BYTE *)(v5 + 16) && *(_QWORD *)v5 )
  {
    v7 = *(_DWORD *)(v5 + 56);
    LOBYTE(v13) = (v7 & 2) != 0;
    v8 = (*(_BYTE *)(v5 + 18) != 0 ? 65 : 1) | 2;
    if ( (v7 & 8) == 0 )
      v8 = *(_BYTE *)(v5 + 18) != 0 ? 65 : 1;
    v9 = v8 | 4;
    if ( (v7 & 0x10) == 0 )
      v9 = v8;
    v10 = v9 | 8;
    if ( (v7 & 0x20) == 0 )
      v10 = v9;
    v11 = v10 | 0x10;
    if ( (v7 & 0x40) == 0 )
      v11 = v10;
    BroadcastDVRComponent::SendShellNotificationToDVR2(
      (__int64)a1,
      2,
      (struct BroadcastDVRActiveAppInfo *)v5,
      v11,
      (v7 & 2) == 0,
      &v13);
    if ( (_BYTE)v13 )
      *(_DWORD *)(v5 + 56) |= 2u;
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
