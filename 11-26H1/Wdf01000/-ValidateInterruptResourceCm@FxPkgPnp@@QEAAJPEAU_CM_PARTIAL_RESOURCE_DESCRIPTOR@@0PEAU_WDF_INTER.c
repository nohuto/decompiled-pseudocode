/*
 * XREFs of ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A4854
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1400A2980 (imp_WdfInterruptCreate.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1400A4660 (-ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::ValidateInterruptResourceCm(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResource,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v8; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v9; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v12; // r8
  unsigned __int16 v13; // r9
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v14; // r13
  FxDeviceBase *v15; // rcx
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rcx
  _LIST_ENTRY *p_m_InterruptListHead; // rax
  int v19; // r15d
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY **p_Blink; // rdx
  FxDeviceBase *v22; // rcx
  unsigned __int16 v23; // ax
  const void *v24; // rcx
  FxDeviceBase *v25; // rcx
  unsigned __int16 v26; // ax
  const void *v27; // rcx
  FxDeviceBase *v28; // rcx
  unsigned __int16 v29; // ax
  const void *_a3; // rcx
  bool v31; // zf
  __int16 v32; // ax
  const void *v33; // rdx
  FxDeviceBase *v34; // rcx
  unsigned __int16 v35; // ax
  const void *v36; // rcx
  __int16 v37; // ax
  const void *v38; // rdx
  unsigned __int16 v39; // r9
  FxDeviceBase *v40; // rcx
  unsigned __int16 v41; // ax
  __int16 v42; // ax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *_a1; // [rsp+28h] [rbp-50h]
  void *_a2; // [rsp+30h] [rbp-48h]
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v46; // [rsp+80h] [rbp+8h] BYREF
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v47; // [rsp+88h] [rbp+10h] BYREF
  _WDF_INTERRUPT_CONFIG *v48; // [rsp+98h] [rbp+20h]

  v48 = Configuration;
  m_Globals = this->m_Globals;
  v46 = CmIntResourceRaw;
  v47 = CmIntResource;
  v8 = FxPkgPnp::ValidateCmResource(this, &v46, &v47);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v46;
  if ( v46->Type != 2 )
  {
    v8 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v12 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v12 = 0LL;
    v13 = 38;
    _a2 = (void *)v12;
    _a1 = CmIntResourceRaw;
LABEL_6:
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, v13, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, 0xC000000D);
    goto LABEL_7;
  }
  v14 = v47;
  if ( v47->Type != 2 )
  {
    v8 = -1073741811;
    v15 = this->m_DeviceBase;
    v16 = v15->m_ObjectSize;
    v17 = (unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v16 )
      v17 = 0LL;
    v13 = 39;
    _a2 = (void *)v17;
    _a1 = CmIntResource;
    goto LABEL_6;
  }
  p_m_InterruptListHead = &this->m_InterruptListHead;
  v19 = 0;
  for ( i = this->m_InterruptListHead.Flink; ; i = i->Flink )
  {
    if ( i == p_m_InterruptListHead )
      return 0;
    p_Blink = &i[-28].Blink;
    if ( v14 == (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)i[-2].Blink )
      break;
    if ( v19 )
    {
      v8 = -1073741811;
      v22 = this->m_DeviceBase;
      v23 = v22->m_ObjectSize;
      v24 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v23 )
        v24 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x28u, WPP_PnpStateMachine_cpp_Traceguids, v24, -1073741811);
      goto LABEL_7;
    }
LABEL_34:
    ;
  }
  if ( p_Blink[34] && v48->PassiveHandling )
  {
    v34 = this->m_DeviceBase;
    v35 = v34->m_ObjectSize;
    v36 = (const void *)((unsigned __int64)v34 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v31 = v35 == 0;
    v37 = *((_WORD *)p_Blink + 5);
    if ( v31 )
      v36 = 0LL;
    v38 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v37 )
      v38 = 0LL;
    v39 = 41;
    goto LABEL_40;
  }
  if ( *((_BYTE *)p_Blink + 258) && v48->CanWakeDevice )
  {
    v40 = this->m_DeviceBase;
    v41 = v40->m_ObjectSize;
    v36 = (const void *)((unsigned __int64)v40 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v31 = v41 == 0;
    v42 = *((_WORD *)p_Blink + 5);
    if ( v31 )
      v36 = 0LL;
    v38 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v42 )
      v38 = 0LL;
    v39 = 42;
LABEL_40:
    WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, v39, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v38, v36);
    return (unsigned int)-1073741811;
  }
  if ( (v14->Flags & 2) == 0 )
  {
    v28 = this->m_DeviceBase;
    v29 = v28->m_ObjectSize;
    _a3 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v31 = v29 == 0;
    v32 = *((_WORD *)p_Blink + 5);
    if ( v31 )
      _a3 = 0LL;
    v33 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v32 )
      v33 = 0LL;
    WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v33, _a3);
    v9 = v46;
    goto LABEL_33;
  }
  if ( ++v19 <= (unsigned int)v9->u.MessageInterrupt.Raw.MessageCount )
  {
LABEL_33:
    p_m_InterruptListHead = &this->m_InterruptListHead;
    goto LABEL_34;
  }
  v8 = -1073741811;
  v25 = this->m_DeviceBase;
  v26 = v25->m_ObjectSize;
  v27 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v26 )
    v27 = 0LL;
  WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0x2Cu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v27, 0xC000000D);
LABEL_7:
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)v8;
}
