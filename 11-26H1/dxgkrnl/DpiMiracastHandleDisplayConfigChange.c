/*
 * XREFs of DpiMiracastHandleDisplayConfigChange @ 0x140087DD0
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1402D6908 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastHandleDisplayConfigChange(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
      {
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        v9 = *(_QWORD *)(v5 + 3368);
        if ( v9 )
        {
          if ( !*(_DWORD *)(v9 + 680) )
            *(_DWORD *)(v9 + 680) = a2;
          *(_DWORD *)(*(_QWORD *)(v5 + 3368) + 684LL) = a2;
          *(_DWORD *)(*(_QWORD *)(v5 + 3368) + 688LL) = a3;
          *(_DWORD *)(*(_QWORD *)(v5 + 3368) + 692LL) = a4;
          *(_DWORD *)(*(_QWORD *)(v5 + 3368) + 696LL) = a5;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
  }
}
