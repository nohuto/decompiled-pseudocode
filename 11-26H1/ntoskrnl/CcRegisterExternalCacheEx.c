/*
 * XREFs of CcRegisterExternalCacheEx @ 0x1405B3970
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcAddExternalCacheToVolumeEx @ 0x1405B3240 (CcAddExternalCacheToVolumeEx.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCacheEx(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 )
    return 3221225485LL;
  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x24BEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( CcEnablePerVolumeLazyWriter )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x50uLL, 0x43456343u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = a2;
      v6 = CcAddExternalCacheToVolumeEx((__int64)PoolWithTag);
      if ( v6 < 0 )
      {
        *a3 = 0LL;
        ExFreePoolWithTag(v8, 0x43456343u);
      }
      else
      {
        v9 = v8[9];
        v10 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * ***(unsigned __int16 ***)(v8[8] + 8LL)) + 22288LL);
        *(_DWORD *)(v9 + 1064) = 10;
        *(_QWORD *)(v9 + 1032) = v10 >> 2;
        *(_QWORD *)(v9 + 1024) = v10 >> 2;
        *(_QWORD *)(v9 + 1016) = v10 >> 2;
        *(_QWORD *)(v9 + 1048) = 10 * v10;
        *(_QWORD *)(v9 + 1056) = 0LL;
        *(_DWORD *)(v9 + 1040) = (v10 >> 3) + (v10 >> 4);
        *a3 = v8;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8[8] + 768LL), &LockHandle);
        CcScheduleLazyWriteScan((_BYTE *)v8[8], (_BYTE *)v8[9], 1, 0);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    else
    {
      v6 = -1073741670;
      *a3 = 0LL;
    }
  }
  else
  {
    v6 = -1073741637;
    *a3 = 0LL;
  }
  return (unsigned int)v6;
}
