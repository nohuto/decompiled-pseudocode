/*
 * XREFs of RaInsertDFxQueue @ 0x1400732C0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 *     NvmeNamespaceAttemptQueueIrpForDfxPowerDown @ 0x14005C540 (NvmeNamespaceAttemptQueueIrpForDfxPowerDown.c)
 *     NvmeAdapterAttemptQueueIrpForDfxPowerDown @ 0x140122F00 (NvmeAdapterAttemptQueueIrpForDfxPowerDown.c)
 *     RaDriverSystemControlIrp @ 0x1401B7620 (RaDriverSystemControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     GetRaidAdapter @ 0x140010A8C (GetRaidAdapter.c)
 *     GetNvmeNamespace @ 0x14005CC1C (GetNvmeNamespace.c)
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 */

__int64 __fastcall RaInsertDFxQueue(__int64 a1, __int64 a2)
{
  _QWORD *Pool; // rax
  _QWORD *v5; // rsi
  KSPIN_LOCK *v7; // rbx
  int v8; // eax
  KSPIN_LOCK *RaidAdapter; // rbx
  KSPIN_LOCK **v10; // rax
  KSPIN_LOCK v11; // rdx
  KSPIN_LOCK *v12; // rcx
  KSPIN_LOCK **v13; // rcx
  KSPIN_LOCK v14; // rdx
  KSPIN_LOCK *v15; // rax
  _DWORD *NvmeAdapter; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  _DWORD *NvmeNamespace; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool = (_QWORD *)RaidAllocatePool(64LL, 24LL, 1363435858LL, a1);
  v5 = Pool;
  if ( !Pool )
    return 3221225495LL;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  *Pool = a2;
  v7 = *(KSPIN_LOCK **)(a1 + 64);
  v8 = *(_DWORD *)v7;
  if ( *(_DWORD *)v7 != 1094997074 )
  {
    switch ( v8 )
    {
      case 1431193940:
        KeAcquireInStackQueuedSpinLock(v7 + 440, &LockHandle);
        v13 = (KSPIN_LOCK **)(v7 + 437);
        v14 = v7[437];
        v15 = v5 + 1;
        if ( *(KSPIN_LOCK **)(v14 + 8) == v7 + 437 )
        {
          *v15 = v14;
          v5[2] = v13;
          *(_QWORD *)(v14 + 8) = v15;
          *v13 = v15;
          ++*((_DWORD *)v7 + 878);
          goto LABEL_22;
        }
        break;
      case 1314275652:
        NvmeAdapter = GetNvmeAdapter(a1);
        v17 = *((_QWORD *)NvmeAdapter + 20);
        if ( !v17 )
          return 0LL;
        v18 = *(_QWORD *)(v17 + 8);
        if ( !v18 || !*(_BYTE *)(v18 + 65) )
          return 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 168), &LockHandle);
        v19 = v5 + 1;
        v20 = *((_QWORD *)NvmeAdapter + 20) + 144LL;
        v21 = *(_QWORD *)v20;
        if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) == v20 )
        {
          *v19 = v21;
          v5[2] = v20;
          *(_QWORD *)(v21 + 8) = v19;
          *(_QWORD *)v20 = v19;
          ++*(_DWORD *)(*((_QWORD *)NvmeAdapter + 20) + 160LL);
          goto LABEL_22;
        }
        break;
      case 1314278989:
        NvmeNamespace = GetNvmeNamespace(a1);
        v23 = *((_QWORD *)NvmeNamespace + 16);
        if ( !v23 )
          return 0LL;
        v24 = *(_QWORD *)(v23 + 8);
        if ( !v24 || !*(_BYTE *)(v24 + 41) )
          return 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 128), &LockHandle);
        v25 = v5 + 1;
        v26 = *((_QWORD *)NvmeNamespace + 16) + 104LL;
        v27 = *(_QWORD *)v26;
        if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) == v26 )
        {
          *v25 = v27;
          v5[2] = v26;
          *(_QWORD *)(v27 + 8) = v25;
          *(_QWORD *)v26 = v25;
          ++*(_DWORD *)(*((_QWORD *)NvmeNamespace + 16) + 120LL);
          goto LABEL_22;
        }
        break;
      default:
        return 0LL;
    }
LABEL_20:
    __fastfail(3u);
  }
  RaidAdapter = (KSPIN_LOCK *)GetRaidAdapter(a1);
  KeAcquireInStackQueuedSpinLock(RaidAdapter + 729, &LockHandle);
  v10 = (KSPIN_LOCK **)(RaidAdapter + 726);
  v11 = RaidAdapter[726];
  v12 = v5 + 1;
  if ( *(KSPIN_LOCK **)(v11 + 8) != RaidAdapter + 726 )
    goto LABEL_20;
  *v12 = v11;
  v5[2] = v10;
  *(_QWORD *)(v11 + 8) = v12;
  *v10 = v12;
  ++*((_DWORD *)RaidAdapter + 1456);
LABEL_22:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
