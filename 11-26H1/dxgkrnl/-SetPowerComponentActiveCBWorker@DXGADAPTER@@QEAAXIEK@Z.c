/*
 * XREFs of ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x140012110
 * Callers:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x140011EA0 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x140011F30 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x140056518 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140012E10 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x140033670 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1400336C8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140080084 (-RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBWorker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  char v4; // bl
  __int64 v5; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  char v10; // r13
  char v11; // r12
  __int64 v12; // rbx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 **v15; // rdx
  char v16; // bp
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 **v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 i; // rdx
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+30h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-80h] BYREF
  char *v31; // [rsp+68h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+70h] [rbp-58h] BYREF
  char v33; // [rsp+88h] [rbp-40h]
  char v34; // [rsp+E0h] [rbp+18h]

  v34 = a3;
  v4 = a3;
  v5 = a2;
  if ( !*((_QWORD *)this + 409) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentActiveCB, a3, this, a2);
  v7 = *((_QWORD *)this + 408);
  v8 = 520 * v5;
  v9 = *(_QWORD *)(520 * v5 + v7 + 512);
  if ( v9 )
  {
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v9 + 136));
    if ( (*((_DWORD *)this + 754) & 0x10) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 474); i = (unsigned int)(i + 1) )
      {
        if ( !*(_DWORD *)(*((_QWORD *)this + 544) + 4 * i) )
          goto LABEL_6;
      }
    }
    else if ( !**((_DWORD **)this + 544) )
    {
      goto LABEL_6;
    }
    memset(&v29, 0, sizeof(v29));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 584, &v29);
    *(_BYTE *)(*(_QWORD *)(v8 + v7 + 512) + 240LL) = 1;
    if ( !*((_BYTE *)this + 4680) )
    {
      *((_BYTE *)this + 4680) = 1;
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      *((_QWORD *)this + 567) = -1LL;
      KeSetTimer((PKTIMER)this + 71, (LARGE_INTEGER)-120000LL, (PKDPC)this + 72);
    }
    KeReleaseInStackQueuedSpinLock(&v29);
  }
LABEL_6:
  v10 = v4;
  v11 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + v7 + 504), &LockHandle);
  if ( (int)++*(_DWORD *)(v8 + v7 + 352) > 1 )
  {
    v16 = 1;
    goto LABEL_18;
  }
  v12 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v8 + v7 + 480);
  if ( *(_BYTE *)(v8 + v7 + 360) )
  {
    v10 = 0;
    v11 = 1;
  }
  else
  {
    if ( *(_QWORD *)(v8 + v7 + 400) )
    {
      v33 = 0;
      v31 = (char *)this + 3728;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 466, &v32);
      *((_QWORD *)this + 467) = KeGetCurrentThread();
      v23 = (__int64 *)(v8 + v7 + 400);
      v33 = 1;
      v24 = *v23;
      if ( !*v23 )
        goto LABEL_50;
      if ( *(__int64 **)(v24 + 8) != v23 )
        goto LABEL_51;
      v25 = (__int64 **)v23[1];
      if ( *v25 != v23 )
        goto LABEL_51;
      *v25 = (__int64 *)v24;
      *(_QWORD *)(v24 + 8) = v25;
      *v23 = 0LL;
      if ( *((DXGADAPTER **)this + 464) == (DXGADAPTER *)((char *)this + 3712) && *((_BYTE *)this + 3700) )
      {
        v26 = *((_QWORD *)this + 396);
        *((_BYTE *)this + 3700) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v26 + 736) + 8LL) + 888LL))(
          *(_QWORD *)(v26 + 744),
          0LL);
      }
      if ( v33 )
      {
LABEL_50:
        v33 = 0;
        *((_QWORD *)v31 + 1) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v32);
      }
    }
    memset(&v29, 0, sizeof(v29));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 475, &v29);
    v13 = (__int64 *)(v8 + v7 + 440);
    v14 = (__int64 *)*v13;
    if ( *v13 )
    {
      if ( (__int64 *)v14[1] == v13 )
      {
        v15 = (__int64 **)v13[1];
        if ( *v15 == v13 )
        {
          *v15 = v14;
          v14[1] = (__int64)v15;
          *v13 = 0LL;
          if ( *((DXGADAPTER **)this + 469) == (DXGADAPTER *)((char *)this + 3752) )
          {
            KeCancelTimer((PKTIMER)((char *)this + 3816));
            *((_BYTE *)this + 3701) = 0;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v29);
          if ( v12 > *(_QWORD *)(v8 + v7 + 496) )
            *(_QWORD *)(v8 + v7 + 472) = 0LL;
          v16 = 1;
          goto LABEL_17;
        }
      }
LABEL_51:
      __fastfail(3u);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v29);
    v22 = *(_QWORD *)(v8 + v7 + 496);
    if ( v12 < v22 )
      *(_QWORD *)(v8 + v7 + 472) = v22;
    v10 = 1;
  }
  v16 = 0;
LABEL_17:
  v4 = v34;
LABEL_18:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_DWORD *)(v8 + v7 + 208) == 7 )
    DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v8 + v7 + 4), 0, 1);
  if ( v10 )
  {
    if ( v4 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        WdLogSingleEntry5(0LL, 275LL, 20LL, this, 0LL, 0LL);
        WdLogGlobalForLineNumber = 1733;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v27, (__int64)&Dxgk_ReportPowerComponentState);
      PoFxActivateComponent(*((_QWORD *)this + 409), (unsigned int)v5, 1LL);
      v19 = a4;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v17, (__int64)&Dxgk_ReportPowerComponentState);
      v19 = a4;
      PoFxActivateComponent(*((_QWORD *)this + 409), (unsigned int)v5, a4);
    }
    if ( v16 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v20, (__int64)&Dxgk_ReportPowerComponentState);
      v21 = *((_QWORD *)this + 409);
      if ( v21 )
        PoFxIdleComponent(v21, (unsigned int)v5, v19);
    }
  }
  if ( v11 )
  {
    DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v5, 0, 1u);
    DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v5, 1u);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentActiveCBEnd, v18, this, v5);
  }
}
