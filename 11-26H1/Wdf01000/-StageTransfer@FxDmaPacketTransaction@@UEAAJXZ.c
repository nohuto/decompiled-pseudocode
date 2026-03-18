/*
 * XREFs of ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x14001F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x14001FAA8 (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_dqd @ 0x14003E928 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqiDq @ 0x140088018 (WPP_IFR_SF_qqiDq.c)
 *     WPP_IFR_SF_qqqD @ 0x14008838C (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_sqqii @ 0x1400885D8 (WPP_IFR_SF_sqqii.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StageTransfer(FxDmaPacketTransaction *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v5; // r15
  int v6; // esi
  KIRQL v7; // di
  unsigned __int8 v8; // r8
  char v9; // r14
  unsigned int v10; // ecx
  FxTagTracker *m_MapRegisterBase; // rax
  unsigned __int64 m_Remaining; // r10
  unsigned __int64 flags; // r11
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 id; // r8
  unsigned int m_MapRegistersReserved; // eax
  _FX_DRIVER_GLOBALS *v18; // r9
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int8 *SgList; // r15
  FxDmaPacketTransaction_vtbl *v21; // rax
  unsigned __int8 v22; // dl
  unsigned int v23; // r8d
  unsigned __int16 v24; // r9
  _FX_DRIVER_GLOBALS *v25; // rdi
  unsigned int m_CurrentFragmentLength; // ecx
  bool v27; // zf
  const void *v28; // r14
  unsigned __int64 v29; // rax
  const void *ProgramDma; // rdx
  WDFDMATRANSACTION__ *v31; // rdx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v34; // r8
  KIRQL v35; // al
  unsigned __int8 v36; // r8
  char v37; // di
  FxVerifierLock *v39; // rcx
  FxVerifierLock *v40; // rcx
  _FX_DRIVER_GLOBALS *v41; // rcx
  _MDL *m_CurrentFragmentMdl; // rcx
  unsigned __int64 ByteCount; // r8
  unsigned __int64 v44; // rax
  const char *v45; // rcx
  const void *globals; // rdx
  unsigned __int64 v47; // rax
  const void *v48; // rax
  DMA_COMPLETION_STATUS CompletionStatus; // edi
  unsigned __int8 v50; // dl
  unsigned int v51; // r8d
  const void *v52; // rax
  unsigned __int8 v53; // r8
  const _GUID *Direction; // [rsp+28h] [rbp-69h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+68h] [rbp-29h] BYREF
  _FX_DRIVER_GLOBALS *Tag; // [rsp+70h] [rbp-21h] BYREF
  const void *v57; // [rsp+78h] [rbp-19h]
  unsigned __int8 sgListBuffer[40]; // [rsp+80h] [rbp-11h] BYREF

  LOBYTE(pFxDriverGlobals) = 0;
  m_Globals = this->m_Globals;
  Tag = m_Globals;
  v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v6 = 0;
  if ( !this->m_ObjectSize )
    v5 = 0LL;
  v57 = v5;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionPacket_cpp_Traceguids, v5);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v40 = *(FxVerifierLock **)&this[-1].m_MapRegisterBaseSet) != 0LL )
  {
    FxVerifierLock::Lock(v40, (unsigned __int8 *)&pFxDriverGlobals, a3);
    v7 = (unsigned __int8)pFxDriverGlobals;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    LOBYTE(pFxDriverGlobals) = v7;
  }
  if ( this->m_TransferState.CurrentStagingThread )
  {
    v41 = Tag;
    v9 = 0;
    this->m_TransferState.RerunStaging = 1;
    if ( v41->FxVerifierOn && v41->FxVerboseOn )
      WPP_IFR_SF_q(v41, 5u, 0xFu, 0x1Bu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v5);
  }
  else
  {
    v9 = 1;
    this->m_TransferState.CurrentStagingThread = KeGetCurrentThread();
  }
  FxNonPagedObject::Unlock(this, v7, v8);
  v10 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_MapRegisterBase = (FxTagTracker *)this[-1].m_MapRegisterBase;
    if ( m_MapRegisterBase )
      FxTagTracker::UpdateTagHistory(m_MapRegisterBase, &Tag, 0, 0LL, TagAddRef, v10);
  }
  if ( v9 )
  {
    do
    {
      m_Remaining = this->m_Remaining;
      flags = this->m_Transferred;
      m_MaxFragmentLength = m_Remaining;
      if ( m_Remaining >= this->m_MaxFragmentLength )
        m_MaxFragmentLength = this->m_MaxFragmentLength;
      v15 = flags + this->m_StartOffset;
      id = m_MaxFragmentLength;
      this->m_CurrentFragmentLength = m_MaxFragmentLength;
      this->m_CurrentFragmentOffset = v15;
      if ( !this->m_RequireSingleTransfer )
      {
        m_MapRegistersReserved = this->m_MapRegistersReserved;
        if ( m_MapRegistersReserved )
        {
          if ( this->m_MapRegistersNeeded > m_MapRegistersReserved )
          {
            m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
            while ( m_CurrentFragmentMdl )
            {
              ByteCount = m_CurrentFragmentMdl->ByteCount;
              if ( ByteCount >= v15 )
                break;
              m_CurrentFragmentMdl = m_CurrentFragmentMdl->Next;
              v15 -= ByteCount;
            }
            id = m_MaxFragmentLength;
            v44 = (m_MapRegistersReserved << 12)
                - 4096
                - (unsigned __int64)(((_WORD)v15 + (unsigned __int16)m_CurrentFragmentMdl->ByteOffset) & 0xFFF)
                + 4096;
            if ( m_MaxFragmentLength >= v44 )
              id = v44;
            this->m_CurrentFragmentLength = id;
          }
        }
      }
      v18 = Tag;
      this->m_Remaining = m_Remaining - id;
      if ( v18->FxVerifierOn && v18->FxVerboseOn )
      {
        v45 = "first";
        globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          globals = 0LL;
        if ( flags )
          v45 = "next";
        WPP_IFR_SF_sqqii(
          v18,
          (unsigned __int8)globals,
          id,
          (unsigned __int16)v18,
          Direction,
          v45,
          globals,
          this->m_CurrentFragmentMdl,
          flags,
          id);
      }
      if ( this->m_IsCancelled == 1 )
      {
        v6 = -1073741536;
      }
      else if ( this->PreMapTransfer(this) )
      {
        m_DmaEnabler = this->m_DmaEnabler;
        if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
          SgList = &sgListBuffer[8];
        else
          SgList = (unsigned __int8 *)m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment;
        v21 = this->__vftable;
        HIDWORD(pFxDriverGlobals) = 0;
        v21->GetTransferCompletionRoutine(this);
        v25 = this->m_Globals;
        m_CurrentFragmentLength = this->m_CurrentFragmentLength;
        v27 = this->m_ObjectSize == 0;
        v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        HIDWORD(pFxDriverGlobals) = m_CurrentFragmentLength;
        if ( v27 )
          v28 = 0LL;
        if ( v25->FxVerifierOn && v25->FxVerboseOn )
          WPP_IFR_SF_qqiDq(
            v25,
            v22,
            v23,
            v24,
            Direction,
            v28,
            this->m_CurrentFragmentMdl,
            this->m_CurrentFragmentOffset,
            m_CurrentFragmentLength,
            this->m_MapRegisterBase);
        if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->DeviceDescription.Version == 3 )
        {
          LODWORD(Direction) = this->m_DeviceAddressOffset;
          v6 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransferEx)(
                 this->m_AdapterInfo->AdapterObject,
                 this->m_CurrentFragmentMdl,
                 this->m_MapRegisterBase,
                 this->m_CurrentFragmentOffset);
        }
        else
        {
          *(_DWORD *)SgList = 1;
          *((_QWORD *)SgList + 1) = 0LL;
          Direction = (const _GUID *)((char *)&pFxDriverGlobals + 4);
          *((_QWORD *)SgList + 2) = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransfer)(
                                      this->m_AdapterInfo->AdapterObject,
                                      this->m_CurrentFragmentMdl,
                                      this->m_MapRegisterBase,
                                      (char *)this->m_CurrentFragmentMdl->StartVa
                                    + this->m_CurrentFragmentMdl->ByteOffset
                                    + this->m_CurrentFragmentOffset);
          v6 = 0;
          *((_DWORD *)SgList + 6) = HIDWORD(pFxDriverGlobals);
        }
        if ( v25->FxVerifierOn && v25->FxVerboseOn )
          WPP_IFR_SF_dqd(
            v25,
            5u,
            0xFu,
            0xEu,
            WPP_FxDmaTransactionPacket_hpp_Traceguids,
            SHIDWORD(pFxDriverGlobals),
            v28,
            v6);
        if ( v6 >= 0 )
        {
          v29 = this->m_CurrentFragmentLength;
          if ( HIDWORD(pFxDriverGlobals) < v29 )
          {
            v47 = v29 - HIDWORD(pFxDriverGlobals);
            this->m_CurrentFragmentLength = HIDWORD(pFxDriverGlobals);
            this->m_Remaining += v47;
          }
          ProgramDma = this->m_DmaAcquiredFunction.Method.ProgramDma;
          if ( ProgramDma )
          {
            if ( Tag->FxVerifierOn && Tag->FxVerboseOn )
            {
              v48 = 0LL;
              if ( this->m_ObjectSize )
                v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              WPP_IFR_SF_qqq(
                Tag,
                5u,
                0xFu,
                0x1Du,
                WPP_FxDmaTransactionPacket_cpp_Traceguids,
                ProgramDma,
                this->m_DmaAcquiredContext,
                v48);
            }
            v31 = 0LL;
            m_DeviceBase = this->m_DmaEnabler->FxDmaTransactionBase::m_DeviceBase;
            m_ObjectSize = m_DeviceBase->m_ObjectSize;
            v34 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v34 = 0LL;
            if ( this->m_ObjectSize )
              v31 = (WDFDMATRANSACTION__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
              &this->m_DmaAcquiredFunction,
              v31,
              v34,
              this->m_DmaAcquiredContext,
              this->m_DmaDirection,
              (_SCATTER_GATHER_LIST *)SgList);
          }
        }
      }
      else
      {
        v6 = 0;
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v39 = *(FxVerifierLock **)&this[-1].m_MapRegisterBaseSet) != 0LL )
      {
        FxVerifierLock::Lock(v39, (unsigned __int8 *)&pFxDriverGlobals, id);
        v35 = (unsigned __int8)pFxDriverGlobals;
      }
      else
      {
        v35 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        LOBYTE(pFxDriverGlobals) = v35;
      }
      if ( this->m_TransferState.RerunCompletion == 1 )
      {
        CompletionStatus = this->m_TransferState.CompletionStatus;
        this->m_TransferState.CompletionStatus = -1;
        this->m_TransferState.RerunCompletion = 0;
        FxNonPagedObject::Unlock(this, v35, v36);
        if ( Tag->FxVerifierOn && Tag->FxVerboseOn )
        {
          v52 = 0LL;
          if ( this->m_ObjectSize )
            v52 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qqqD(
            Tag,
            v50,
            v51,
            0x1Eu,
            WPP_FxDmaTransactionPacket_cpp_Traceguids,
            this[1].m_Globals,
            *(const void **)&this[1].m_ObjectFlags,
            v52,
            CompletionStatus);
        }
        this->CallEvtDmaCompleted(this, CompletionStatus);
        FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v53);
        v35 = (unsigned __int8)pFxDriverGlobals;
      }
      if ( this->m_TransferState.RerunStaging == 1 )
      {
        v37 = 1;
        this->m_TransferState.RerunStaging = 0;
      }
      else
      {
        this->m_TransferState.CurrentStagingThread = 0LL;
        v37 = 0;
      }
      FxNonPagedObject::Unlock(this, v35, v36);
    }
    while ( v37 );
    v5 = v57;
  }
  this->Release(this, &Tag, 0, 0LL);
  if ( Tag->FxVerifierOn && Tag->FxVerboseOn )
    WPP_IFR_SF_qd(Tag, 5u, 0xFu, 0x1Fu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v5, v6);
  return (unsigned int)v6;
}
