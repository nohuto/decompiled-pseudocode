/*
 * XREFs of sub_1400308A8 @ 0x1400308A8
 * Callers:
 *     sub_140030360 @ 0x140030360 (sub_140030360.c)
 *     sub_14007AC90 @ 0x14007AC90 (sub_14007AC90.c)
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140053738 @ 0x140053738 (sub_140053738.c)
 */

void __fastcall sub_1400308A8(char *Context)
{
  __int64 v2; // rax
  int v3; // edx
  char v4; // r14
  PDEVICE_OBJECT *v5; // r15
  NTSTATUS v6; // edi
  __int64 v7; // r8
  int v8; // edx
  int v9; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  v2 = *((_QWORD *)Context + 234);
  v3 = *(_DWORD *)(v2 + 32);
  if ( (v3 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 2) != 0 )
  {
    KeCancelTimer((PKTIMER)(Context + 1056));
    _interlockedbittestandset((volatile signed __int32 *)Context + 126, 0xDu);
    v4 = 0;
    if ( *(_QWORD *)(*((_QWORD *)Context + 3) + 4960LL)
      && _InterlockedCompareExchange((volatile signed __int32 *)Context + 902, 0, 1) == 1 )
    {
      sub_140021110(*((_QWORD *)Context + 3), 0LL, 0LL);
    }
    goto LABEL_16;
  }
  v4 = 0;
  if ( *((_DWORD *)Context + 137) != 1 )
    goto LABEL_16;
  if ( (v3 & 1) == 0 )
  {
    v5 = (PDEVICE_OBJECT *)(Context + 8);
    goto LABEL_14;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !KeGetCurrentIrql() )
  {
    v5 = (PDEVICE_OBJECT *)(Context + 8);
    v6 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           sub_14007AB70,
           Context,
           (PIRP *)(*((_QWORD *)Context + 234) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
    if ( v6 >= 0 )
    {
LABEL_14:
      v4 = 0;
      if ( PoRequestPowerIrp(*v5, 2u, (POWER_STATE)4, sub_1400436D0, Context, 0LL) == 259 )
      {
        Context[505] |= 1u;
        _InterlockedExchange((volatile __int32 *)Context + 473, 0);
        v4 = 1;
      }
    }
LABEL_16:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v7 = *((_QWORD *)Context + 234);
    *((_QWORD *)Context + 269) = MEMORY[0xFFFFF78000000008];
    v8 = *(_DWORD *)(v7 + 32);
    if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) != 0 )
    {
      *(_DWORD *)(v7 + 32) = v8 | 0x20;
      if ( !*((_QWORD *)Context + 266) )
        *((_QWORD *)Context + 266) = *((_QWORD *)Context + 269);
    }
    else
    {
      *(_DWORD *)(v7 + 32) = v8 & 0xFFFFFFDF;
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 234));
    if ( byte_140168DAA )
    {
      if ( (byte_1401694F2 & 0x10) != 0 )
        sub_140053738(
          *((_QWORD *)Context + 3),
          (unsigned int)&unk_14014B068,
          v9,
          **((_QWORD **)Context + 234),
          *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
          Context[104],
          Context[105],
          Context[106],
          v4);
    }
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 508, 1, 0) )
    IoQueueWorkItem(*((PIO_WORKITEM *)Context + 252), sub_14007AC90, DelayedWorkQueue, Context);
}
