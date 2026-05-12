/*
 * XREFs of sub_14007A040 @ 0x14007A040
 * Callers:
 *     sub_140079E70 @ 0x140079E70 (sub_140079E70.c)
 * Callees:
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 *     sub_14006C334 @ 0x14006C334 (sub_14006C334.c)
 */

void __fastcall sub_14007A040(char *Context)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  __int64 v5; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*((_DWORD *)Context + 87) != 1 || (Context[107] & 4) != 0)
    && PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)1,
         (PREQUEST_POWER_COMPLETE)sub_140079F70,
         Context,
         0LL) == 259 )
  {
    Context[107] |= 2u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 620));
    if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
    {
      LODWORD(v5) = 0;
      LODWORD(Contexta) = *((_DWORD *)Context + 14);
      sub_1400541AC(v2, &stru_14014AE78, v3, **((_QWORD **)Context + 620), Contexta, v5);
    }
    if ( *((char **)Context + 718) == Context + 5744 )
      Context[109] &= ~0x40u;
    else
      sub_14006C334(*((struct _DEVICE_OBJECT **)Context + 1));
  }
}
