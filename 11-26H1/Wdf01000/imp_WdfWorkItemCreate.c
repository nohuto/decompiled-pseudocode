/*
 * XREFs of imp_WdfWorkItemCreate @ 0x14001A180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x14001A400 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfWorkItemCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  unsigned __int64 ParentObject; // rdi
  __int64 v9; // rax
  FxObject *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  FxObject_vtbl *v13; // rax
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  unsigned int _a1; // ebx
  const _GUID *v17; // rax
  unsigned __int16 v18; // r9
  WDFWORKITEM__ **v19; // [rsp+20h] [rbp-68h]
  FxObject **p_pParent; // [rsp+50h] [rbp-38h] BYREF
  __int16 v21; // [rsp+58h] [rbp-30h]
  __int16 v22; // [rsp+5Ah] [rbp-2Eh]
  int v23; // [rsp+5Ch] [rbp-2Ch]
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxObject *pParent; // [rsp+90h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !Attributes )
  {
    _a1 = -1071644142;
    v17 = WPP_FxValidateFunctions_hpp_Traceguids;
    v18 = 10;
LABEL_18:
    WPP_IFR_SF_D(v4, 2u, 0x12u, v18, v17, _a1);
    return _a1;
  }
  if ( Attributes->Size != 56 )
  {
    _a1 = -1073741820;
    WPP_IFR_SF_qddd(
      v4,
      (unsigned __int8)Config,
      6u,
      0xBu,
      WPP_FxValidateFunctions_hpp_Traceguids,
      Attributes,
      56,
      Attributes->Size,
      -1073741820);
    return _a1;
  }
  ParentObject = (unsigned __int64)Attributes->ParentObject;
  if ( !ParentObject )
  {
    _a1 = -1071644142;
    WPP_IFR_SF_qd(v4, 2u, 0x12u, 0xCu, WPP_FxValidateFunctions_hpp_Traceguids, Attributes, -1071644142);
    return _a1;
  }
  LOWORD(v9) = 0;
  flags = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (ParentObject & 1) != 0 )
  {
    v9 = LOWORD(flags->__vftable);
    flags = (FxObject *)((char *)flags - v9);
  }
  if ( flags->m_Type == 4096 )
  {
    pParent = flags;
  }
  else
  {
    v22 = v9;
    pParent = 0LL;
    v23 = 0;
    v13 = flags->__vftable;
    p_pParent = &pParent;
    v21 = 4096;
    if ( v13->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pParent) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        (unsigned __int8)Config,
        v14,
        v15,
        (const _GUID *)v19,
        (const void *)ParentObject,
        0x1000u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
    }
    flags = pParent;
  }
  m_Globals = flags->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( !WorkItem )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( Config->Size != 24 )
  {
    _a1 = -1073741820;
    WPP_IFR_SF_DDd(
      m_Globals,
      (unsigned __int8)Config,
      0x12u,
      0xAu,
      WPP_FxWorkItemApi_cpp_Traceguids,
      Config->Size,
      0x18u,
      -1073741820);
    return _a1;
  }
  if ( !Config->EvtWorkItemFunc )
  {
    _a1 = -1073741811;
    v17 = WPP_FxWorkItemApi_cpp_Traceguids;
    v18 = 11;
    v4 = m_Globals;
    goto LABEL_18;
  }
  result = FxValidateObjectAttributes(flags->m_Globals, Attributes, 0);
  if ( result >= 0 )
    return FxWorkItem::_Create(m_Globals, Config, Attributes, pParent, WorkItem);
  return result;
}
