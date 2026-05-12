/*
 * XREFs of sub_14007A550 @ 0x14007A550
 * Callers:
 *     sub_14007A2E0 @ 0x14007A2E0 (sub_14007A2E0.c)
 *     sub_14007A790 @ 0x14007A790 (sub_14007A790.c)
 * Callees:
 *     sub_140053738 @ 0x140053738 (sub_140053738.c)
 */

void __fastcall sub_14007A550(char *Context)
{
  PDEVICE_OBJECT *v2; // r14
  NTSTATUS v3; // edi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-68h]
  PIRP *Irp; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  if ( *((_DWORD *)Context + 137) != 1 )
    goto LABEL_7;
  if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 1) == 0 )
  {
    v2 = (PDEVICE_OBJECT *)(Context + 8);
LABEL_11:
    if ( PoRequestPowerIrp(*v2, 2u, (POWER_STATE)4, (PREQUEST_POWER_COMPLETE)sub_14007A400, Context, 0LL) == 259 )
    {
      Context[505] |= 1u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)Context + 473, 0);
      return;
    }
    goto LABEL_7;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( KeGetCurrentIrql() )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 508, 1, 0) )
      IoQueueWorkItem(*((PIO_WORKITEM *)Context + 252), sub_14007A790, DelayedWorkQueue, Context);
    return;
  }
  v2 = (PDEVICE_OBJECT *)(Context + 8);
  v3 = PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         0,
         (POWER_STATE)1,
         sub_14007AB70,
         Context,
         (PIRP *)(*((_QWORD *)Context + 234) + 72LL));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  if ( v3 >= 0 )
    goto LABEL_11;
LABEL_7:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v4 = *((_QWORD *)Context + 234);
  *((_QWORD *)Context + 277) = MEMORY[0xFFFFF78000000008];
  v5 = *(unsigned int *)(v4 + 32);
  if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) != 0 )
  {
    LODWORD(v5) = v5 | 0x80;
    *(_DWORD *)(v4 + 32) = v5;
    if ( !*((_QWORD *)Context + 276) )
      *((_QWORD *)Context + 276) = *((_QWORD *)Context + 277);
  }
  else
  {
    LODWORD(v5) = v5 & 0xFFFFFF7F;
    *(_DWORD *)(v4 + 32) = v5;
  }
  PoFxCompleteDirectedPowerDown(**((_QWORD **)Context + 234), v5, v4);
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
  {
    v7 = *((_QWORD *)Context + 3);
    LOBYTE(Irp) = Context[104];
    LODWORD(Contexta) = *(_DWORD *)(v7 + 56);
    sub_140053738(v7, &stru_14014A098, v6, **((_QWORD **)Context + 234), Contexta, Irp, Context[105], Context[106], 0);
  }
}
