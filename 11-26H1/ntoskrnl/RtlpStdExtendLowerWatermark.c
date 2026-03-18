/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x140618E54
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x140619018 (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x1407236F0 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendLowerWatermark(KSPIN_LOCK *SpinLock, __int64 a2)
{
  KSPIN_LOCK v2; // rdi
  KSPIN_LOCK v5; // r14
  void *v6; // rcx
  KSPIN_LOCK v7; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  RegionSize = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = SpinLock[20];
  v6 = (void *)SpinLock[18];
  BaseAddress = v6;
  v7 = v5 + a2;
  if ( !*((_BYTE *)SpinLock + 128) )
  {
    if ( v7 > (unsigned __int64)v6 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v6 + RegionSize >= SpinLock[19]
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      SpinLock[18] = (KSPIN_LOCK)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 48);
    v2 = v5;
    SpinLock[20] = v7;
    goto LABEL_9;
  }
  if ( v7 <= SpinLock[21] )
    goto LABEL_8;
LABEL_9:
  KeReleaseSpinLock(SpinLock, *((_BYTE *)SpinLock + 8));
  return v2;
}
