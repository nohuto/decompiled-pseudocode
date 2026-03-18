/*
 * XREFs of ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x140014408
 * Callers:
 *     ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400143F0 (-DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140014638 (McTemplateK0_EtwWriteTransfer.c)
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x140049CFC (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 */

void __fastcall DXGADAPTER::ProcessComponentIdleList(DXGADAPTER *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // r15
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *i; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  unsigned int v15; // [rsp+20h] [rbp-40h]
  int v16; // [rsp+28h] [rbp-38h]
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 3702) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0_EtwWriteTransfer(this, &Dxgk_ProcessComponentIdleList);
    v2 = MEMORY[0xFFFFF78000000014];
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 475, &LockHandle);
    v3 = (_QWORD *)((char *)this + 3752);
    v17[1] = v17;
    v4 = (_QWORD *)*((_QWORD *)this + 469);
    v5 = v17;
    while ( 1 )
    {
      v17[0] = v5;
      v6 = v4;
      if ( v4 == v3 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v6[6] > v2 )
        break;
      if ( (_QWORD *)v4[1] != v6
        || (v7 = (_QWORD *)v6[1], (_QWORD *)*v7 != v6)
        || (*v7 = v4, v4[1] = v7, *v6 = 0LL, v8 = v17[0], *(_QWORD **)(v17[0] + 8LL) != v17) )
      {
        __fastfail(3u);
      }
      v5 = v6 + 2;
      v6[2] = v17[0];
      v6[3] = v17;
      *(_QWORD *)(v8 + 8) = v6 + 2;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    for ( i = (_QWORD *)v17[0]; i != v17; i = (_QWORD *)*i )
    {
      v13 = *((_DWORD *)i - 114);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        v16 = 0;
        v15 = v13;
        McTemplateK0pqq_EtwWriteTransfer(v9, (__int64)&Dxgk_ReportPowerComponentState);
      }
      v9 = *((_QWORD *)this + 409);
      if ( v9 )
        PoFxIdleComponent(v9, v13, 0LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 475, &LockHandle);
    *((_BYTE *)this + 3701) = 0;
    v11 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      if ( v11[5] > v2 )
      {
        v14 = v11[7];
        v11[5] = v2;
        v11[6] = v14 + v2;
        DXGADAPTER::ScheduleComponentIdleListTimer(this, v14);
      }
      else
      {
        v12 = v11[6] - v2;
        *((_BYTE *)this + 3701) = 1;
        KeSetTimer((PKTIMER)((char *)this + 3816), (LARGE_INTEGER)-v12, (PKDPC)((char *)this + 3880));
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
