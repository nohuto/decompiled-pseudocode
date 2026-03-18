/*
 * XREFs of ??1MxTimer@@QEAA@XZ @ 0x1400308C0
 * Callers:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14002B070 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x14002EF24 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x14002F214 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140031790 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x14003B408 (--1FxTimer@@UEAA@XZ.c)
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x14003C450 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MxTimer::~MxTimer(MxTimer *this, __int64 a2)
{
  struct _EX_TIMER *m_KernelExTimer; // rcx

  if ( this->m_Timer.m_IsExtTimer )
  {
    m_KernelExTimer = this->m_Timer.m_KernelExTimer;
    if ( m_KernelExTimer )
    {
      LOBYTE(a2) = 1;
      ExDeleteTimer(m_KernelExTimer, a2, 0LL, 0LL);
      this->m_Timer.m_KernelExTimer = 0LL;
    }
  }
}
