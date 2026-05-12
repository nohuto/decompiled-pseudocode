/*
 * XREFs of sub_140039CF8 @ 0x140039CF8
 * Callers:
 *     sub_140039BC0 @ 0x140039BC0 (sub_140039BC0.c)
 * Callees:
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 */

void __fastcall sub_140039CF8(char *Context)
{
  _QWORD **v2; // rsi
  int v3; // ecx
  int v4; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = (_QWORD **)(Context + 4960);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 620) + 8LL) + 12LL) & 1) == 0 )
  {
    if ( *((_DWORD *)Context + 87) == 1 )
    {
      if ( (Context[107] & 4) == 0 )
        goto LABEL_6;
      v2 = (_QWORD **)(Context + 4960);
    }
    if ( PoRequestPowerIrp(*((PDEVICE_OBJECT *)Context + 1), 2u, (POWER_STATE)1, sub_14003AF90, Context, 0LL) == 259 )
    {
      Context[107] |= 2u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 620));
  if ( byte_140168DAA )
  {
    if ( (byte_1401694F2 & 0x10) != 0 )
      sub_1400541AC(v3, (unsigned int)&unk_14014A840, v4, **v2, *((_DWORD *)Context + 14), 0);
  }
}
