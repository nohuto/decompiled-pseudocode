/*
 * XREFs of PopThermalReadCounters @ 0x140A766C8
 * Callers:
 *     PoThermalCounterSetCallback @ 0x140A761B0 (PoThermalCounterSetCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 */

__int64 __fastcall PopThermalReadCounters(__int64 a1, __int64 a2, unsigned int *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // esi
  struct _KTHREAD *v8; // rdi
  IRP *v9; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 228) )
    goto LABEL_2;
  if ( (a2 & 9) == 0 )
    goto LABEL_2;
  v8 = (struct _KTHREAD *)(a1 + 432);
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 432), a2, (__int64)a3, a4);
  KeResetEvent((PRKEVENT)(a1 + 472));
  v9 = *(IRP **)(a1 + 56);
  *(_DWORD *)(a1 + 112) = 0;
  IoCancelIrp(v9);
  PopReleaseRwLock(v8);
  Object[0] = (PVOID)(a1 + 472);
  Object[1] = (PVOID)(a1 + 448);
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
LABEL_2:
    PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 432), a2, (__int64)a3, a4);
    *a3 = *(_DWORD *)(a1 + 128) / 0xAu;
    a3[3] = *(_DWORD *)(a1 + 128);
    a3[1] = *(_DWORD *)(a1 + 80);
    a3[2] = *(_DWORD *)(a1 + 212);
    PopReleaseRwLock((struct _KTHREAD *)(a1 + 432));
  }
  return v4;
}
