/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x14061BF8C
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendUpperWatermark(KSPIN_LOCK *SpinLock, void *a2)
{
  KSPIN_LOCK v2; // rsi
  char *v4; // rcx
  KSPIN_LOCK v5; // rdi
  char *v6; // rcx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v2 = 0LL;
  RegionSize = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v4 = (char *)SpinLock[19];
  v5 = SpinLock[21] - 8;
  BaseAddress = v4;
  if ( !*((_BYTE *)SpinLock + 128) )
  {
    if ( v5 < (unsigned __int64)v4 )
    {
      v6 = v4 - 4096;
      RegionSize = 4096LL;
      if ( (unsigned __int64)v6 <= SpinLock[18] )
        goto LABEL_9;
      BaseAddress = v6;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      SpinLock[19] = (KSPIN_LOCK)BaseAddress;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 45);
    v2 = v5;
    SpinLock[21] = v5;
    goto LABEL_9;
  }
  if ( v5 >= SpinLock[20] )
    goto LABEL_8;
LABEL_9:
  KeReleaseSpinLock(SpinLock, *((_BYTE *)SpinLock + 8));
  return v2;
}
