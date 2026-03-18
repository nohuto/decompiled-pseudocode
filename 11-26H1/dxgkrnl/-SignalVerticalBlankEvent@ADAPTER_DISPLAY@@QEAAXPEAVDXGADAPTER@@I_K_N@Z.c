/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x14003E6EC
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14003E610 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140012A50 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1400423A0 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // r8
  struct _KEVENT *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 24) )
  {
    v7 = *((_QWORD *)this + 16);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v8 = 4024LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + v7 + 936), &LockHandle);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v9 = DXGADAPTER::NumberOfVSyncWaiter(a2, a3);
      McTemplateK0qqqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v8 + v7 + 928),
        &EventDWMVsyncSignal,
        v10,
        *(_DWORD *)(v8 + v7 + 920),
        a4,
        *(_BYTE *)(v8 + v7 + 928),
        v9,
        4);
    }
    v11 = *(struct _KEVENT **)(v8 + v7 + 904);
    *(_BYTE *)(v8 + v7 + 944) = 1;
    KePulseEvent(v11, 0, 0);
    if ( *(_QWORD *)(v8 + v7 + 912) )
    {
      *(_DWORD *)(v8 + v7 + 924) = a4;
      if ( *(_DWORD *)(v8 + v7 + 920) <= a4 )
      {
        if ( *(_BYTE *)(v8 + v7 + 928) )
        {
          *(_BYTE *)(v8 + v7 + 928) = 0;
          if ( *((_QWORD *)a2 + 396) )
            DXGADAPTER::DecrementVSyncWaiter(a2, a3);
        }
        KeSetEvent(*(PRKEVENT *)(v8 + v7 + 912), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
