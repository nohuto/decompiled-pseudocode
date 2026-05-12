/*
 * XREFs of sub_140039F08 @ 0x140039F08
 * Callers:
 *     sub_140039E80 @ 0x140039E80 (sub_140039E80.c)
 *     sub_14007A2C0 @ 0x14007A2C0 (sub_14007A2C0.c)
 * Callees:
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 */

void __fastcall sub_140039F08(PVOID Context)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // edx
  __int64 v5; // rcx
  int v6; // ecx
  int v7; // r8d
  NTSTATUS v8; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = *((_QWORD *)Context + 620);
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL);
  if ( (v4 & 2) == 0 && *((_DWORD *)Context + 87) == 1 )
  {
    if ( (*(_DWORD *)(v2 + 20) & 0x80u) != 0 && (v4 & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1424, 1, 0) )
          IoQueueWorkItem(*((PIO_WORKITEM *)Context + 710), sub_14007A2C0, DelayedWorkQueue, Context);
        return;
      }
      v8 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             sub_14007A150,
             Context,
             (PIRP *)(*((_QWORD *)Context + 620) + 72LL));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v8 == 259 )
        *(_DWORD *)(*((_QWORD *)Context + 620) + 20LL) |= 0x40u;
    }
    v3 = 0;
    if ( PoRequestPowerIrp(*((PDEVICE_OBJECT *)Context + 1), 2u, (POWER_STATE)4, sub_14003FBA0, Context, 0LL) == 259 )
    {
      *((_BYTE *)Context + 107) |= 4u;
      v3 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v5 = *((_QWORD *)Context + 620);
  *((_QWORD *)Context + 656) = MEMORY[0xFFFFF78000000008];
  if ( (*((_BYTE *)Context + 108) & 1) != 0 )
  {
    *(_DWORD *)(v5 + 20) |= 8u;
    if ( !*((_QWORD *)Context + 655) )
      *((_QWORD *)Context + 655) = *((_QWORD *)Context + 656);
  }
  else
  {
    *(_DWORD *)(v5 + 20) &= ~8u;
  }
  PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 620));
  if ( byte_140168DAA )
  {
    if ( (byte_1401694F2 & 0x10) != 0 )
      sub_1400541AC(v6, (unsigned int)&unk_140149DB0, v7, **((_QWORD **)Context + 620), *((_DWORD *)Context + 14), v3);
  }
}
