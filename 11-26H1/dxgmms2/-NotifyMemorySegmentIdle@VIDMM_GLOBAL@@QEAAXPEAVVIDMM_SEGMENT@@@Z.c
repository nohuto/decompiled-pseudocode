/*
 * XREFs of ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1400379E0
 * Callers:
 *     ?SetSegmentPowerState@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXII_N@Z @ 0x14004AE60 (-SetSegmentPowerState@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXII_N@Z.c)
 *     ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400FBA98 (-DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 * Callees:
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140037C80 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentIdle(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  int v4; // ebp
  _DWORD *v5; // rsi
  struct _KEVENT *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1 << *((_BYTE *)a2 + 70);
  v5 = *(_DWORD **)(*((_QWORD *)this + 5040) + 8LL * *((unsigned __int16 *)a2 + 34));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5156, &LockHandle);
  *((_QWORD *)this + 5157) = KeGetCurrentThread();
  if ( !*((_QWORD *)a2 + 37) && !*((_BYTE *)a2 + 404) )
  {
    v5[138] &= ~v4;
    if ( v5[44] != VIDMM_SEGMENT::DriverId(a2) && v5[40] != VIDMM_SEGMENT::DriverId(a2) )
      VIDMM_GLOBAL::NotifyMemorySegmentHasData(this, *((_DWORD *)a2 + 100), 0);
    if ( !v5[138] )
    {
      v6 = (struct _KEVENT *)*((_QWORD *)this + 5607);
      *((_BYTE *)this + 41071) = 1;
      KeSetEvent(v6, 0, 0);
    }
  }
  *((_QWORD *)this + 5157) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
