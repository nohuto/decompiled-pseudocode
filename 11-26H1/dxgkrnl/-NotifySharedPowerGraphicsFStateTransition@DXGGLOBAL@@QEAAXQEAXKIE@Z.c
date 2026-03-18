/*
 * XREFs of ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1400344C4
 * Callers:
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x140033670 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1400336C8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z @ 0x140033DE0 (-DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(
        KSPIN_LOCK *this,
        void *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  struct _KTHREAD **v5; // rbx
  DXGGLOBAL *i; // rsi
  DXGGLOBAL *v9; // rdi
  KIRQL CurrentIrql; // al
  __int64 v11; // r9
  __int64 v12; // r13
  KIRQL v13; // al
  volatile signed __int32 *v14; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  char v16; // [rsp+90h] [rbp+8h]

  v5 = (struct _KTHREAD **)(this + 222);
  v14 = (volatile signed __int32 *)(this + 222);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v16 = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 221, &LockHandle);
    v14 = (volatile signed __int32 *)v5;
  }
  else if ( v5[1] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v5);
    v16 = 1;
  }
  for ( i = (DXGGLOBAL *)this[226]; ; i = *(DXGGLOBAL **)i )
  {
    v9 = 0LL;
    if ( i != (DXGGLOBAL *)(this + 226) )
      v9 = i;
    if ( !v9 )
      break;
    if ( *((void *const *)v9 + 4) == a2 && *((_QWORD *)v9 + 7) )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v11) = a5;
      v12 = CurrentIrql;
      (*((void (__fastcall **)(void *const, _QWORD, _QWORD, __int64, _QWORD))v9 + 7))(
        a2,
        a3,
        a4,
        v11,
        *((_QWORD *)v9 + 3));
      if ( (_BYTE)v12 != KeGetCurrentIrql() )
      {
        v13 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, this, v12, v13);
        WdLogGlobalForLineNumber = 7182;
      }
    }
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else if ( v16 )
  {
    _InterlockedDecrement(v14 + 4);
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
}
