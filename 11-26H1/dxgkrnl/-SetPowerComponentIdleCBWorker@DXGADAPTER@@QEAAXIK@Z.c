/*
 * XREFs of ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x140011AE0
 * Callers:
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x140011980 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x140011A58 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1400349C8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140012E10 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x140033670 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1400336C8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1400800F4 (-RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBWorker(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  bool v9; // zf
  DXGADAPTER *i; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+48h] [rbp-30h] BYREF

  v3 = a3;
  v4 = a2;
  if ( !*((_QWORD *)this + 409) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentIdleCB, a3, this, a2);
  v6 = *((_QWORD *)this + 408);
  v7 = 520 * v4;
  v8 = *(_QWORD *)(520 * v4 + v6 + 512);
  if ( v8 )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordIdle((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v8 + 136));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + v6 + 504), &LockHandle);
  if ( (int)--*(_DWORD *)(v7 + v6 + 352) <= 0 )
  {
    if ( *(_BYTE *)(v7 + v6 + 360) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v7 + v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v7 + v6 + 4), 1u, 1);
      DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v4, 0);
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v4, 1u, 1u);
      goto LABEL_18;
    }
    v9 = *(_QWORD *)(v7 + v6 + 472) == 0LL;
    *(_QWORD *)(v7 + v6 + 480) = MEMORY[0xFFFFF78000000014];
    if ( v9 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v7 + v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v7 + v6 + 4), 1u, 1);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v16, (__int64)&Dxgk_ReportPowerComponentState);
      v17 = *((_QWORD *)this + 409);
      if ( v17 )
        PoFxIdleComponent(v17, (unsigned int)v4, v3);
      goto LABEL_18;
    }
    if ( *(_DWORD *)(v7 + v6 + 208) != 7
      || (KeReleaseInStackQueuedSpinLock(&LockHandle),
          DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v7 + v6 + 4), 1u, 1),
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + v6 + 504), &LockHandle),
          *(int *)(v7 + v6 + 352) <= 0) )
    {
      *(_QWORD *)(v7 + v6 + 488) = *(_QWORD *)(v7 + v6 + 480) + *(_QWORD *)(v7 + v6 + 472);
      memset(&v21, 0, sizeof(v21));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 475, &v21);
      for ( i = (DXGADAPTER *)*((_QWORD *)this + 470);
            i != (DXGADAPTER *)((char *)this + 3752);
            i = (DXGADAPTER *)*((_QWORD *)i + 1) )
      {
        if ( *(_QWORD *)(v7 + v6 + 488) >= *((_QWORD *)i + 6) )
        {
          v18 = *(_QWORD *)i;
          v19 = (_QWORD *)(v7 + v6 + 440);
          if ( *(DXGADAPTER **)(*(_QWORD *)i + 8LL) == i )
          {
            *v19 = v18;
            v19[1] = i;
            *(_QWORD *)(v18 + 8) = v19;
            *(_QWORD *)i = v19;
            goto LABEL_16;
          }
LABEL_32:
          __fastfail(3u);
        }
      }
      v11 = (_QWORD *)((char *)this + 3752);
      v12 = *((_QWORD *)this + 469);
      v13 = (_QWORD *)(v7 + v6 + 440);
      if ( *(DXGADAPTER **)(v12 + 8) != (DXGADAPTER *)((char *)this + 3752) )
        goto LABEL_32;
      *v13 = v12;
      v13[1] = v11;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = v13;
      v14 = *(_QWORD *)(v7 + v6 + 472);
      if ( !*((_BYTE *)this + 3701) )
      {
        *((_BYTE *)this + 3701) = 1;
        KeSetTimer((PKTIMER)((char *)this + 3816), (LARGE_INTEGER)-v14, (PKDPC)((char *)this + 3880));
      }
LABEL_16:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_18:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentIdleCBEnd, v15, this, v4);
  }
}
