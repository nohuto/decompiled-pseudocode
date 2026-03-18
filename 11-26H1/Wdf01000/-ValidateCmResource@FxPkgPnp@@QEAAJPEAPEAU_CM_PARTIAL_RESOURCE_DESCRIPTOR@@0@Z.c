/*
 * XREFs of ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1400A4660
 * Callers:
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A4854 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::ValidateCmResource(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResource)
{
  FxCollectionInternal *v4; // r11
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY **p_Blink; // r9
  _LIST_ENTRY **v9; // r10
  _LIST_ENTRY *v10; // rbx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v11; // rcx
  unsigned int v12; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rcx
  const void *_a1; // r11
  const void *v18; // rbp
  FxDeviceBase *v19; // rdx
  unsigned __int16 v20; // ax
  const void *v21; // rdx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v22; // r15
  FxDeviceBase *v23; // rcx
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // r9
  const void *v26; // rcx
  bool v27; // zf
  const void *v28; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // rbx
  FxDeviceBase *v30; // rcx
  unsigned __int16 v31; // ax

  v4 = &this->m_Resources->FxCollectionInternal;
  m_Globals = this->m_Globals;
  p_Blink = &this->m_Resources->m_ListHead.Flink[-1].Blink;
  v9 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  if ( p_Blink == (_LIST_ENTRY **)v4 )
  {
LABEL_4:
    v12 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0x22u, WPP_PnpStateMachine_cpp_Traceguids, *CmResource, _a2, 0xC000000D);
  }
  else
  {
    while ( 1 )
    {
      v10 = *v9;
      v11 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&(*p_Blink)[7].Blink + 4);
      if ( v11 == *CmResource )
        break;
      p_Blink = &p_Blink[1][-1].Blink;
      v9 = &v9[1][-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)v4 )
        goto LABEL_4;
    }
    _a1 = *CmResourceRaw;
    v18 = (char *)&v10[7].Blink + 4;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&v10[7].Blink + 4) == *CmResourceRaw )
    {
      v22 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*p_Blink)[6].Blink;
      if ( RtlCompareMemory(v11, v22, 0x14uLL) == 20 )
      {
        v29 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v10[6].Blink;
        if ( RtlCompareMemory(v18, v29, 0x14uLL) == 20 )
        {
          *CmResourceRaw = v29;
          v12 = 0;
          *CmResource = v22;
          return v12;
        }
        v12 = -1073741811;
        v30 = this->m_DeviceBase;
        v31 = v30->m_ObjectSize;
        v25 = 37;
        v26 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
        v27 = v31 == 0;
        v28 = *CmResourceRaw;
      }
      else
      {
        v12 = -1073741811;
        v23 = this->m_DeviceBase;
        v24 = v23->m_ObjectSize;
        v25 = 36;
        v26 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
        v27 = v24 == 0;
        v28 = *CmResource;
      }
      if ( v27 )
        v26 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, v25, WPP_PnpStateMachine_cpp_Traceguids, v28, v26, 0xC000000D);
    }
    else
    {
      v12 = -1073741811;
      v19 = this->m_DeviceBase;
      v20 = v19->m_ObjectSize;
      v21 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20 )
        v21 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0x23u, WPP_PnpStateMachine_cpp_Traceguids, _a1, v21, 0xC000000D);
    }
  }
  FxVerifierDbgBreakPoint(m_Globals);
  return v12;
}
