/*
 * XREFs of MiLockImageSection @ 0x140A9E9E8
 * Callers:
 *     MiLockPagableImageSection @ 0x140368CD0 (MiLockPagableImageSection.c)
 * Callees:
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     ExBlockOnAddressPushLock @ 0x140478530 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 */

__int64 __fastcall MiLockImageSection(__int64 a1, unsigned int *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v3; // rdi
  unsigned __int32 v6; // eax
  unsigned __int32 v7; // r8d
  __int64 PteAddress; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int32 v11; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int32 *)(a2 + 2);
  --CurrentThread->KernelApcDisable;
LABEL_2:
  v6 = *v3;
  do
  {
    v11 = v6;
    v7 = v6;
    if ( v6 == 1 )
    {
      ExBlockOnAddressPushLock((signed __int64 *)&stru_140E2D2D0.SuspendEvent.Header.Lock, v3, &v11, 4LL, 0LL);
      goto LABEL_2;
    }
    v6 = _InterlockedCompareExchange(v3, v6 + 1, v6);
  }
  while ( v6 != v7 );
  if ( v6 < 2 )
  {
    PteAddress = MiGetPteAddress(*(_QWORD *)(a1 + 48));
    MiLockCode(a1, (ULONG_PTR *)(PteAddress + 8LL * *a2), PteAddress + 8LL * a2[1], 1);
    _InterlockedIncrement(v3);
    _InterlockedOr(v10, 0);
    if ( *(_QWORD *)&stru_140E2D2D0.SuspendEvent.Header.Lock )
      ExfUnblockPushLock((volatile __int64 *)&stru_140E2D2D0.SuspendEvent.Header.Lock, 0LL);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
