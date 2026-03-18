/*
 * XREFs of ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1400802B0
 * Callers:
 *     DxgNotifyVSyncCB @ 0x140035C30 (DxgNotifyVSyncCB.c)
 * Callees:
 *     ?CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x14007FD64 (-CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync(KSPIN_LOCK *this)
{
  signed __int64 v2; // r11
  _QWORD *v3; // rdi
  KSPIN_LOCK v4; // r8
  __int64 v5; // rdx
  KSPIN_LOCK v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r11
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  if ( *((_BYTE *)this + 88) != 1 )
  {
    v2 = this[4];
    v3 = this + 9;
    if ( v2 > (__int64)this[5] )
    {
      v4 = **(_QWORD **)(*this + 4440);
      v5 = *(unsigned int *)(this[2] + 4LL * *((unsigned int *)this + 14) + 4);
      v6 = v4 - v2;
      this[4] = v4;
      v2 = v4;
      *v3 += v6 * v5;
    }
    LODWORD(v7) = 0;
    if ( v2 )
    {
      v8 = **(_QWORD **)(*this + 4448);
      if ( v8 )
        v7 = 1000LL * *v3 / *(unsigned int *)(this[2] + 4LL * *((unsigned int *)this + 14) + 4) / v8;
    }
    DXGPOWERSTATISTICSTRANSITIONENGINE::CalculatePState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, v7);
    *v3 = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
