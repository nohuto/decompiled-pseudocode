/*
 * XREFs of ?Connect@FxInterrupt@@QEAAJK@Z @ 0x140067650
 * Callers:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x140067398 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1400AA168 (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     ?InterruptEnable@FxInterrupt@@AEAAJXZ @ 0x140067834 (-InterruptEnable@FxInterrupt@@AEAAJXZ.c)
 *     ?IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ @ 0x14006787C (-IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ.c)
 *     ?IsActiveForWake@FxInterrupt@@QEAAEXZ @ 0x1400678D8 (-IsActiveForWake@FxInterrupt@@QEAAEXZ.c)
 *     ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x1400678F8 (-ConnectInternal@FxInterrupt@@QEAAJXZ.c)
 *     ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x140067B6C (-ReportActive@FxInterrupt@@QEAAXE@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x14006A614 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qDDDDsdisd @ 0x1400AA820 (WPP_IFR_SF_qDDDDsdisd.c)
 */

int __fastcall FxInterrupt::Connect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  char v4; // dl
  FxInterrupt *v5; // rcx
  int v6; // r8d
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  int id; // r14d
  int result; // eax
  int v11; // ebx
  const char *_a10; // r10
  const char *flags; // rdx
  FxDeviceBase *m_DeviceBase; // r8
  const void *v15; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *v17; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]

  m_Globals = this->m_Globals;
  if ( (NotifyFlags & 8) != 0 && FxInterrupt::IsActiveForWake(this) )
  {
    this->m_WakeInterruptMachine->m_ActiveForWake = 0;
    return 0;
  }
  if ( FxInterrupt::IsSoftDisconnectCapable(this) && v6 )
  {
    FxInterrupt::ReportActive(v5, 1u);
$Enable:
    result = FxInterrupt::InterruptEnable(this);
    v11 = result;
    if ( result < 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v15 = 0LL;
      v17 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v17 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xCu,
        0x18u,
        WPP_InterruptObject_cpp_Traceguids,
        v17,
        v15,
        this->m_Interrupt,
        result);
      return v11;
    }
    else
    {
      this->m_Enabled = 1;
    }
    return result;
  }
  if ( v5->m_ForceDisconnected || !v5->m_InterruptInfo.Vector )
    return 0;
  if ( (v4 & 1) != 0 )
    goto $Enable;
  id = FxInterrupt::ConnectInternal(v5);
  if ( id >= 0 )
  {
    this->m_Connected = 1;
    this->m_Active = 1;
    goto $Enable;
  }
  this->m_Interrupt = 0LL;
  LOBYTE(v7) = this->m_FloatingSave;
  _a10 = "True";
  LOBYTE(v8) = this->m_InterruptInfo.ShareDisposition;
  flags = "True";
  if ( !(_BYTE)v7 )
    flags = "False";
  if ( (_BYTE)v8 != 3 )
    _a10 = "False";
  WPP_IFR_SF_qDDDDsdisd(
    m_Globals,
    (unsigned __int8)flags,
    v7,
    v8,
    traceGuid,
    this->m_SpinLock,
    this->m_InterruptInfo.Vector,
    this->m_InterruptInfo.Irql,
    this->m_SynchronizeIrql,
    this->m_InterruptInfo.Mode,
    _a10,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    flags,
    id);
  return id;
}
