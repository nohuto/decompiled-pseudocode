/*
 * XREFs of ?DetectExcessiveAllocation@FxObject@@AEAAXXZ @ 0x140026C60
 * Callers:
 *     imp_WdfMemoryCreate @ 0x140014B20 (imp_WdfMemoryCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1400245E0 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfRequestCreate @ 0x140024FC0 (imp_WdfRequestCreate.c)
 *     imp_WdfMemoryCreateFromLookaside @ 0x14005CB30 (imp_WdfMemoryCreateFromLookaside.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     FxLiveDump @ 0x140083910 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083E48 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxObject::DetectExcessiveAllocation(FxObject *this)
{
  FxObjectExcessiveAllocation *ObjectExcessiveAllocation; // rbx
  int v3; // ecx
  signed int _a1; // esi
  _WDF_BUGCHECK_CODES v5; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const char *DriverName; // rdi

  ObjectExcessiveAllocation = this->m_Globals->ObjectExcessiveAllocation;
  if ( ObjectExcessiveAllocation && !ObjectExcessiveAllocation->ViolationReported )
  {
    v3 = this->m_Type - 4098;
    if ( v3 )
    {
      if ( v3 == 6 && BYTE5(this[2].__vftable) != 2 )
        return;
    }
    else if ( _InterlockedIncrement(&ObjectExcessiveAllocation->DeviceCnt) >= 2 )
    {
      _InterlockedAdd(&ObjectExcessiveAllocation->LimitScaled, ObjectExcessiveAllocation->Limit);
    }
    this->m_ObjectFlags |= 0x40u;
    _a1 = _InterlockedIncrement(&ObjectExcessiveAllocation->ObjectCnt);
    if ( _a1 >= ObjectExcessiveAllocation->LimitScaled
      && !KeGetCurrentIrql()
      && !_InterlockedCompareExchange(&ObjectExcessiveAllocation->ViolationReported, 1, 0) )
    {
      WPP_IFR_SF_D(this->m_Globals, 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
      if ( ObjectExcessiveAllocation->BreakpointOk )
        DbgBreakPoint();
      m_Globals = this->m_Globals;
      DriverName = m_Globals->Public.DriverName;
      FxLiveDump(m_Globals, v5, (unsigned __int64)m_Globals->Public.DriverName, _a1);
      if ( _a1 >= ObjectExcessiveAllocation->LimitScaled )
        MicrosoftTelemetryAssertTriggeredArgsKM(DriverName, _a1, 0);
    }
  }
}
