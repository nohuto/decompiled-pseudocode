/*
 * XREFs of ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140008F68
 * Callers:
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x140009BF0 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x14006D7D0 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086F40 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x140051AB4 (WPP_IFR_SF_Dqqd.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400594F8 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDqd @ 0x140080D24 (WPP_IFR_SF_qDqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dqqd @ 0x140094964 (WPP_IFR_SF_dqqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x140098714 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 */

__int64 __fastcall FxRequest::GetMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v6; // r12
  _IRP *m_Irp; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int flags; // r8d
  FxDeviceBase *v10; // rcx
  int m_Refcnt; // r10d
  void *MasterIrp; // rsi
  unsigned int *p_Options; // r15
  unsigned int v14; // r15d
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v17; // rbp
  unsigned __int16 v19; // ax
  const void *id; // rcx
  const void *level; // rdx
  int IsNotCompleted; // esi
  unsigned int LowPart; // r8d
  _LIST_ENTRY *Flink; // rcx
  _MDL *MdlAddress; // rax
  int v26; // ebp
  const void *v27; // rcx
  unsigned __int16 v28; // dx
  unsigned __int16 *p_m_ObjectSize; // r8
  const void *v30; // rcx
  const void *v31; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v33; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v35; // rdx
  int v36; // ebp
  unsigned __int16 v37; // r9
  unsigned __int16 v38; // ax
  const void *v39; // rbx
  const _GUID *Irp; // [rsp+20h] [rbp-58h]
  int globals; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( m_Globals->FxVerifierIO )
  {
    IsNotCompleted = FxRequest::VerifyRequestIsNotCompleted(this, m_Globals);
    if ( IsNotCompleted < 0 )
      goto LABEL_22;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  flags = CurrentStackLocation->MajorFunction;
  if ( (_BYTE)flags == 14 || (_BYTE)flags == 15 )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (LowPart & 3) == 0 || (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) - 1 < 2 )
    {
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      p_Options = &CurrentStackLocation->Parameters.Create.Options;
      goto LABEL_9;
    }
    m_DeviceBase = this->m_DeviceBase;
    v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( !this->m_ObjectSize )
      v33 = 0LL;
    v35 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v35 = 0LL;
    WPP_IFR_SF_Dqqd(
      m_Globals,
      (unsigned __int8)v35,
      LowPart,
      0xAu,
      WPP_FxRequestKm_cpp_Traceguids,
      LowPart,
      v35,
      v33,
      globals);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequestKm_cpp_Traceguids);
LABEL_48:
    IsNotCompleted = -1073741808;
LABEL_21:
    *pMdl = 0LL;
LABEL_22:
    FxNonPagedObject::Unlock(this, v6);
    return (unsigned int)IsNotCompleted;
  }
  v10 = this->m_DeviceBase;
  m_Refcnt = v10[1].m_Refcnt;
  if ( m_Refcnt != 2 )
  {
    if ( m_Refcnt == 3 )
    {
      MdlAddress = m_Irp->MdlAddress;
      *pMdl = MdlAddress;
      if ( MdlAddress )
      {
        v26 = 0;
      }
      else
      {
        v26 = -1073741789;
        v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v27 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0xDu, WPP_FxRequestKm_cpp_Traceguids, v27, -1073741789);
      }
      IsNotCompleted = v26;
      goto LABEL_22;
    }
    v28 = this->m_ObjectSize;
    p_m_ObjectSize = &v10->m_ObjectSize;
    v30 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Refcnt != 1 )
    {
      v36 = -1073741595;
      if ( !v28 )
        v31 = 0LL;
      if ( !*p_m_ObjectSize )
        v30 = 0LL;
      WPP_IFR_SF_dqqd(m_Globals, v28, 0x10u, 0x10u, WPP_FxRequestKm_cpp_Traceguids, m_Refcnt, v30, v31, -1073741595);
      FxVerifierDbgBreakPoint(m_Globals);
LABEL_58:
      IsNotCompleted = v36;
      goto LABEL_21;
    }
    if ( !v28 )
      v31 = 0LL;
    if ( !*p_m_ObjectSize )
      v30 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequestKm_cpp_Traceguids, v30, v31, 0xC0000010);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xFu, WPP_FxRequestKm_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_48;
  }
  MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
  if ( (unsigned __int8)(flags - 3) > 1u )
  {
    v19 = v10->m_ObjectSize;
    id = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v19 )
      id = 0LL;
    level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      level = 0LL;
    WPP_IFR_SF_qDqd(m_Globals, (unsigned __int8)level, flags, 0xEu, Irp, level, flags, id, globals);
    IsNotCompleted = -1073741811;
    goto LABEL_21;
  }
  p_Options = (unsigned int *)&CurrentStackLocation->Parameters;
LABEL_9:
  v14 = *p_Options;
  if ( MasterIrp && v14 )
  {
    m_AllocatedMdl = this->m_AllocatedMdl;
    if ( m_AllocatedMdl )
    {
      *pMdl = m_AllocatedMdl;
      IsNotCompleted = 0;
      goto LABEL_22;
    }
    if ( m_Globals->FxVerifierOn )
      Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, v14, (unsigned __int8)Irp, 0, retaddr);
    else
      Debug = IoAllocateMdl(MasterIrp, v14, 0, 0, 0LL);
    v17 = Debug;
    if ( Debug )
    {
      MmBuildMdlForNonPagedPool(Debug);
      this->m_AllocatedMdl = v17;
      *pMdl = v17;
      FxNonPagedObject::Unlock(this, v6);
      return 0LL;
    }
    v36 = -1073741670;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequestKm_cpp_Traceguids, MasterIrp, v14, -1073741670);
    goto LABEL_58;
  }
  *pMdl = 0LL;
  FxNonPagedObject::Unlock(this, v6);
  if ( !MasterIrp )
  {
    v37 = 17;
LABEL_63:
    v38 = this->m_ObjectSize;
    v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v38 )
      v39 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v37, WPP_FxRequestKm_cpp_Traceguids, v39, -1073741789);
    return 3221225507LL;
  }
  if ( !v14 )
  {
    v37 = 18;
    goto LABEL_63;
  }
  return 3221225507LL;
}
