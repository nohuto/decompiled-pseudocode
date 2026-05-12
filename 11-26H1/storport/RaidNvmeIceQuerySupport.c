/*
 * XREFs of RaidNvmeIceQuerySupport @ 0x14007A58C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaidNvmeIceConfigureExclusionRanges @ 0x140079E98 (RaidNvmeIceConfigureExclusionRanges.c)
 *     RaidNvmeIceEnableNvmeDevice @ 0x140079FBC (RaidNvmeIceEnableNvmeDevice.c)
 *     RaidNvmeIceQueryNvmeCapabilities @ 0x14007A518 (RaidNvmeIceQueryNvmeCapabilities.c)
 * Callees:
 *     FreeNvmeIceEntry @ 0x140070BA0 (FreeNvmeIceEntry.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

PVOID *__fastcall RaidNvmeIceQuerySupport(__int64 a1)
{
  PVOID *v2; // rdi
  _QWORD *v3; // rax
  PVOID *v4; // rsi
  volatile signed __int32 *v5; // rbx
  int v6; // ebp
  PVOID *v7; // rcx
  PVOID **v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&NvmeIceListSpinLock, &LockHandle);
  v2 = (PVOID *)NvmeIceList;
  if ( NvmeIceList != &NvmeIceList )
  {
    while ( v2 != &NvmeIceList )
    {
      v3 = v2[6];
      v4 = v2;
      if ( v3 && v3[15] )
      {
        v5 = (volatile signed __int32 *)(v2 + 2);
        _InterlockedIncrement((volatile signed __int32 *)v2 + 4);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v6 = (*((__int64 (__fastcall **)(_QWORD, __int64))v2[6] + 15))(*((_QWORD *)v2[6] + 1), a1);
        KeAcquireInStackQueuedSpinLock(&NvmeIceListSpinLock, &LockHandle);
        v2 = (PVOID *)*v2;
        if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
        {
          v7 = (PVOID *)*v4;
          if ( *((PVOID **)*v4 + 1) != v4 || (v8 = (PVOID **)v4[1], *v8 != v4) )
            __fastfail(3u);
          *v8 = v7;
          v7[1] = v8;
          FreeNvmeIceEntry(v4);
        }
        else if ( !v6 )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          return v4;
        }
      }
      else
      {
        v2 = (PVOID *)*v2;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
