/*
 * XREFs of SmHwAcceleratorPartitionMgrCleanup @ 0x140821A4C
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionCleanup @ 0x14081F1A0 (SmPartitionCleanup.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SmHwAcceleratorMgrPartitionUnregister @ 0x1408215D8 (SmHwAcceleratorMgrPartitionUnregister.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x1408219D8 (SmHwAcceleratorPartitionCtxCleanup.c)
 */

void __fastcall SmHwAcceleratorPartitionMgrCleanup(__int64 a1, struct _KPROCESS *a2)
{
  PPRIVILEGE_SET *v2; // r14
  int v5; // r15d
  _DWORD *v6; // r12
  PPRIVILEGE_SET v7; // rbx
  struct _PRIVILEGE_SET *v8; // rsi
  struct _PRIVILEGE_SET *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v2 = (PPRIVILEGE_SET *)(a1 + 32);
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0;
  v6 = (_DWORD *)(a1 + 48);
  do
  {
    v7 = *v2;
    if ( *v2 )
    {
      v8 = (PPRIVILEGE_SET)((char *)v7 + 16 * (unsigned __int16)KeNumberNodes);
      while ( v7 < v8 )
      {
        while ( 1 )
        {
          v9 = *(struct _PRIVILEGE_SET **)&v7->PrivilegeCount;
          if ( *(PPRIVILEGE_SET *)&v7->PrivilegeCount == v7 )
            break;
          if ( (PPRIVILEGE_SET)v9->Privilege[0].Luid != v7
            || (v10 = *(_QWORD *)&v9->PrivilegeCount,
                *(struct _PRIVILEGE_SET **)(*(_QWORD *)&v9->PrivilegeCount + 8LL) != v9) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)&v7->PrivilegeCount = v10;
          *(_QWORD *)(v10 + 8) = v7;
          --*v6;
          SmHwAcceleratorPartitionCtxCleanup((__int64)v9);
          CmSiFreeMemory(v9);
        }
        v7 = (PPRIVILEGE_SET)((char *)v7 + 16);
      }
      CmSiFreeMemory(*v2);
    }
    ++v5;
    ++v2;
    ++v6;
  }
  while ( v5 < 2 );
  if ( *(_QWORD *)(a1 + 16) )
  {
    KeStackAttachProcess(a2, &ApcState);
    SmHwAcceleratorMgrPartitionUnregister(*(struct _KTHREAD **)(a1 + 16), (_QWORD *)a1, v11, v12);
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  }
}
