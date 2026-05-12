/*
 * XREFs of sub_140079C30 @ 0x140079C30
 * Callers:
 *     sub_140079AF0 @ 0x140079AF0 (sub_140079AF0.c)
 *     sub_140079E50 @ 0x140079E50 (sub_140079E50.c)
 * Callees:
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 */

void __fastcall sub_140079C30(char *Context)
{
  _QWORD **v2; // r14
  NTSTATUS v3; // edi
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // r8
  PVOID Contexta; // [rsp+20h] [rbp-48h]
  PIRP *Irp; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = (_QWORD **)(Context + 4960);
  if ( *((_DWORD *)Context + 87) == 1 )
  {
    if ( (*((_DWORD *)*v2 + 5) & 0x80u) != 0 && (*(_DWORD *)((*v2)[1] + 12LL) & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1424, 1, 0) )
          IoQueueWorkItem(*((PIO_WORKITEM *)Context + 710), sub_140079E50, DelayedWorkQueue, Context);
        return;
      }
      v3 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             sub_14007A150,
             Context,
             (PIRP *)*v2 + 9);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v3 == 259 )
        *((_DWORD *)*v2 + 5) |= 0x40u;
    }
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)sub_140079B80,
           Context,
           0LL) == 259 )
    {
      Context[107] |= 4u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v5 = (__int64)*v2;
  *((_QWORD *)Context + 666) = MEMORY[0xFFFFF78000000008];
  v6 = *(_DWORD *)(v5 + 20);
  if ( (Context[108] & 1) != 0 )
  {
    *(_DWORD *)(v5 + 20) = v6 | 0x20;
    if ( !*((_QWORD *)Context + 665) )
      *((_QWORD *)Context + 665) = *((_QWORD *)Context + 666);
  }
  else
  {
    *(_DWORD *)(v5 + 20) = v6 & 0xFFFFFFDF;
  }
  PoFxCompleteDirectedPowerDown(**v2, v5, v4);
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
  {
    LODWORD(Irp) = 0;
    LODWORD(Contexta) = *((_DWORD *)Context + 14);
    sub_1400541AC(v7, &stru_14014AEB8, v8, **v2, Contexta, Irp);
  }
}
