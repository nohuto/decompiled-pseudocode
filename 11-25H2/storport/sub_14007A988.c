/*
 * XREFs of sub_14007A988 @ 0x14007A988
 * Callers:
 *     sub_14007A7B0 @ 0x14007A7B0 (sub_14007A7B0.c)
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140053738 @ 0x140053738 (sub_140053738.c)
 *     sub_14006C334 @ 0x14006C334 (sub_14006C334.c)
 */

void __fastcall sub_14007A988(char *Context)
{
  _QWORD **v2; // r14
  struct _DEVICE_OBJECT **v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  PVOID Contexta; // [rsp+20h] [rbp-68h]
  PIRP *Irp; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  if ( *((_DWORD *)Context + 137) != 1 || (Context[505] & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)sub_14007A950,
           Context,
           0LL) == 259 )
    {
      Context[504] |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)Context + 472, 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v3 = (struct _DEVICE_OBJECT **)(Context + 8);
    v2 = (_QWORD **)(Context + 1872);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)Context + 234) + 36LL), 0, 1) )
    {
      v4 = *((_QWORD *)Context + 3);
      if ( sub_140021280((__int64)Context) )
      {
        PoFxIdleComponent(**((_QWORD **)Context + 234), 0LL, 0LL);
        ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
      }
      if ( *(_QWORD *)(v4 + 4960) )
        sub_140021110(v4, 0LL, 0LL);
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 = (_QWORD **)(Context + 1872);
    v3 = (struct _DEVICE_OBJECT **)(Context + 8);
  }
  PoFxReportDevicePoweredOn(**v2);
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
  {
    LOBYTE(Irp) = Context[104];
    LODWORD(Contexta) = *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL);
    sub_140053738(v5, &stru_140149D60, v6, **v2, Contexta, Irp, Context[105], Context[106], 0);
  }
  if ( *((char **)Context + 436) == Context + 3488 )
    Context[507] &= ~2u;
  else
    sub_14006C334(*v3);
}
