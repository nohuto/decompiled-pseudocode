/*
 * XREFs of ?NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z @ 0x14030B6A8
 * Callers:
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x14030C27C (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsPowerTransition(
        DXGGLOBAL *this,
        void *const a2,
        unsigned int a3,
        char a4)
{
  DXGGLOBAL *i; // rsi
  DXGGLOBAL *v8; // rbx
  KIRQL CurrentIrql; // al
  __int64 v10; // r8
  __int64 v11; // r12
  KIRQL v12; // al
  volatile signed __int32 *v13; // [rsp+70h] [rbp+8h]

  v13 = (volatile signed __int32 *)((char *)this + 1776);
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1776));
  for ( i = (DXGGLOBAL *)*((_QWORD *)this + 226); ; i = *(DXGGLOBAL **)i )
  {
    v8 = 0LL;
    if ( i != (DXGGLOBAL *)((char *)this + 1808) )
      v8 = i;
    if ( !v8 )
      break;
    if ( *((void *const *)v8 + 4) == a2 )
    {
      if ( *((_QWORD *)v8 + 5) )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(v10) = a4;
        v11 = CurrentIrql;
        (*((void (__fastcall **)(void *const, _QWORD, __int64, _QWORD))v8 + 5))(a2, a3, v10, *((_QWORD *)v8 + 3));
        if ( (_BYTE)v11 != KeGetCurrentIrql() )
        {
          v12 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, this, v11, v12);
          WdLogGlobalForLineNumber = 7227;
        }
      }
    }
  }
  _InterlockedDecrement(v13 + 4);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
}
