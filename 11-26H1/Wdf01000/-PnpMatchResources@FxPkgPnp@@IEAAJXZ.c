/*
 * XREFs of ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x14003A9E4
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1400397FC (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x14003ACC8 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14003C0F8 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x14007BE54 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpMatchResources(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v3; // r12d
  FxCmResList *m_ResourcesRaw; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // rsi
  int _a2; // eax
  int _a1; // edi
  _LIST_ENTRY *p_m_InterruptListHead; // rsi
  _LIST_ENTRY *i; // rax
  FxCmResList *m_Resources; // rax
  _LIST_ENTRY *v12; // r14
  _LIST_ENTRY *Flink; // r15
  FxCollectionInternal *v14; // rcx
  _LIST_ENTRY *v15; // rbp
  _LIST_ENTRY **p_Blink; // r15
  _LIST_ENTRY **v17; // rbp
  FxDeviceBase *v18; // rdx
  _FX_DRIVER_GLOBALS *v19; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *v23; // rdx
  FxDeviceBase *v24; // rcx
  unsigned __int16 v25; // ax
  const void *v26; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v27; // rdx
  _LIST_ENTRY *v28; // rax
  _LIST_ENTRY *v29; // r13
  FxDeviceBase *v30; // rcx
  unsigned __int16 v31; // ax
  const void *v32; // rcx
  unsigned int Blink_high; // [rsp+80h] [rbp+8h]
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v34; // [rsp+88h] [rbp+10h]
  FxCollectionInternal *v35; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  v3 = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x1Du, WPP_PnpStateMachine_cpp_Traceguids);
  m_ResourcesRaw = this->m_ResourcesRaw;
  this->m_PnpState.Value = this->m_PnpState.Value & 0xFFFFF3CF | 0x820;
  CurrentStackLocation = this->m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  _a2 = FxCmResList::BuildFromWdmList(
          m_ResourcesRaw,
          CurrentStackLocation->Parameters.StartDevice.AllocatedResources,
          0);
  _a1 = _a2;
  if ( _a2 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v23 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v23 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PnpStateMachine_cpp_Traceguids, v23, _a2);
  }
  else
  {
    _a1 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 0);
    if ( _a1 < 0 )
    {
      v24 = this->m_DeviceBase;
      v25 = v24->m_ObjectSize;
      v26 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v25 )
        v26 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x1Fu, WPP_PnpStateMachine_cpp_Traceguids, v26, _a1);
    }
    else
    {
      p_m_InterruptListHead = &this->m_InterruptListHead;
      for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
      {
        i[-5].Blink = 0LL;
        LOWORD(i[-2].Flink) = 0;
        BYTE4(i[-4].Blink) = 0;
        BYTE1(i[-3].Blink) = 0;
        LODWORD(i[-3].Flink) = 0;
        LODWORD(i[-4].Blink) = 0;
        BYTE1(i[-19].Blink) = 0;
      }
      m_Resources = this->m_Resources;
      v12 = &this->m_InterruptListHead;
      Flink = m_Resources->m_ListHead.Flink;
      v14 = &m_Resources->FxCollectionInternal;
      v35 = &m_Resources->FxCollectionInternal;
      v15 = this->m_ResourcesRaw->m_ListHead.Flink;
      while ( 1 )
      {
        p_Blink = &Flink[-1].Blink;
        v17 = &v15[-1].Blink;
        if ( p_Blink == (_LIST_ENTRY **)v14 )
          break;
        v27 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*v17)[6].Blink;
        v34 = v27;
        if ( v27->Type == 2 )
        {
          v28 = v12->Flink;
          v12 = v28;
          if ( v28 == p_m_InterruptListHead )
          {
            v30 = this->m_DeviceBase;
            v31 = v30->m_ObjectSize;
            v32 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v31 )
              v32 = 0LL;
            WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0x20u, WPP_PnpStateMachine_cpp_Traceguids, v32);
            break;
          }
          v29 = *p_Blink;
          Blink_high = HIWORD((*v17)[6].Blink);
          if ( (BYTE2((*p_Blink)[6].Blink) & 2) != 0 && HIWORD((*v17)[6].Blink) > 1u )
          {
            do
            {
              if ( v12 == p_m_InterruptListHead )
                break;
              FxInterrupt::AssignResources(
                (FxInterrupt *)&v12[-28].Blink,
                v27,
                (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v29[6].Blink);
              v12 = v12->Flink;
              ++v3;
              v27 = v34;
            }
            while ( v3 < Blink_high );
            v3 = 0;
          }
          else
          {
            FxInterrupt::AssignResources(
              (FxInterrupt *)&v28[-28].Blink,
              v27,
              (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v29[6].Blink);
          }
        }
        Flink = p_Blink[1];
        v15 = v17[1];
        v14 = v35;
      }
      v18 = this->m_DeviceBase;
      if ( BYTE1(v18[1].m_Globals) )
      {
        if ( (v18->m_AttachedDevice.m_DeviceObject->Characteristics & 1) != 0 )
          v18->m_DeviceObject.m_DeviceObject->Characteristics |= 1u;
        FxDevice::SetFilterIoType(this->m_Device);
      }
    }
  }
  v19 = this->m_Globals;
  if ( v19->FxVerboseOn )
    WPP_IFR_SF_D(v19, 5u, 0xCu, 0x21u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
