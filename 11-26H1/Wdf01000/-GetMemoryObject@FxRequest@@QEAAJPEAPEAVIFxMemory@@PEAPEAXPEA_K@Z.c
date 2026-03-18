/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140051500
 * Callers:
 *     imp_WdfRequestRetrieveOutputMemory @ 0x140050960 (imp_WdfRequestRetrieveOutputMemory.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x140050B10 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x140051120 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1400512C0 (imp_WdfRequestRetrieveInputBuffer.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x140051AB4 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x140082D1C (WPP_IFR_SF_Dqq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400E5850 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMemoryObject(
        FxRequest *this,
        IFxMemory **MemoryObject,
        void **Buffer,
        unsigned __int64 *Length)
{
  KIRQL v4; // r14
  void **v6; // r12
  unsigned __int8 v7; // r8
  char v8; // bp
  unsigned int Options; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int IsNotCompleted; // edi
  unsigned int MajorFunction; // r15d
  unsigned int LowPart; // r8d
  _IRP *v15; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _MDL *m_Mdl; // rcx
  _IRP *m_Irp; // rcx
  unsigned int v20; // r12d
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rcx
  const void *_a1; // rdx
  _MDL *MdlAddress; // rsi
  PVOID MappedSystemVa; // rax
  FxDeviceBase *v27; // rdx
  const void *v28; // rcx
  unsigned __int16 v29; // ax
  const void *v30; // rdx
  FxDeviceBase *v31; // rdx
  const void *v32; // rcx
  unsigned __int16 v33; // ax
  const void *v34; // rdx
  const void *v35; // rcx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v37; // rcx
  const void *v38; // rcx
  const void *v39; // rcx
  const void *v40; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int v42; // [rsp+40h] [rbp-48h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  IFxMemory **v44; // [rsp+98h] [rbp+10h]
  void **v45; // [rsp+A0h] [rbp+18h]

  v45 = Buffer;
  v44 = MemoryObject;
  v4 = 0;
  irql = 0;
  v6 = Buffer;
  v7 = 0;
  v8 = 0;
  Options = 0;
  m_Globals = this->m_Globals;
  IsNotCompleted = 0;
  MajorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      if ( IsNotCompleted < 0 )
        goto $Done_22;
      v7 = 0;
    }
    if ( this->m_Irp.m_Irp->RequestorMode == 1 && (unsigned __int8)(MajorFunction - 3) <= 1u )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( m_DeviceBase[1].m_Refcnt == 1 )
      {
        IsNotCompleted = -1073741808;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qqd(this->m_Globals, 2u, 0x10u, 0x19u, WPP_FxRequest_cpp_Traceguids, _a1, _a2, 0xC0000010);
        WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x1Au, WPP_FxRequest_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_ForwardProgressList.Flink) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, v7);
      v4 = irql;
    }
    else
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
  }
  LOBYTE(LowPart) = MajorFunction;
  switch ( MajorFunction )
  {
    case 0xFu:
      goto LABEL_6;
    case 3u:
    case 4u:
      m_Irp = this->m_Irp.m_Irp;
      Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
      if ( this->m_DeviceBase[1].m_Refcnt == 3 )
        v8 = 1;
      v20 = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
      if ( Options )
      {
        if ( v8 && (this->m_RequestBaseFlags & 1) == 0 )
        {
          MdlAddress = m_Irp->MdlAddress;
          if ( MdlAddress )
          {
            if ( (MdlAddress->MdlFlags & 5) != 0 )
              MappedSystemVa = MdlAddress->MappedSystemVa;
            else
              MappedSystemVa = MmMapLockedPagesSpecifyCache(
                                 MdlAddress,
                                 0,
                                 MmCached,
                                 0LL,
                                 0,
                                 ExDefaultMdlProtection | 0x40000010);
            if ( MappedSystemVa )
            {
              Options = v20;
              this->m_SystemBuffer.m_Buffer = this->m_Irp.m_Irp->MdlAddress;
              this->m_RequestBaseFlags |= 1u;
            }
            else
            {
              IsNotCompleted = -1073741670;
              v40 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v40 = 0LL;
              WPP_IFR_SF_qqd(
                this->m_Globals,
                2u,
                0x10u,
                0x21u,
                WPP_FxRequest_cpp_Traceguids,
                v40,
                MdlAddress,
                0xC000009A);
              Options = v20;
            }
          }
          else
          {
            IsNotCompleted = -1073741789;
            v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v39 = 0LL;
            WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x20u, WPP_FxRequest_cpp_Traceguids, v39, -1073741789);
            Options = v20;
          }
        }
        v6 = v45;
      }
      else
      {
        IsNotCompleted = -1073741789;
        v38 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v38 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x1Fu, WPP_FxRequest_cpp_Traceguids, v38, -1073741789);
        v6 = v45;
      }
      break;
    case 0xEu:
LABEL_6:
      v15 = this->m_Irp.m_Irp;
      CurrentStackLocation = v15->Tail.Overlay.CurrentStackLocation;
      Options = CurrentStackLocation->Parameters.Create.Options;
      if ( Options )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3
          && v15->RequestorMode
          && (_BYTE)MajorFunction != 15 )
        {
          IsNotCompleted = -1073741808;
          v31 = this->m_DeviceBase;
          v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          v33 = v31->m_ObjectSize;
          if ( !this->m_ObjectSize )
            v32 = 0LL;
          v34 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v33 )
            v34 = 0LL;
          WPP_IFR_SF_Dqqd(
            this->m_Globals,
            (unsigned __int8)v34,
            LowPart,
            0x1Cu,
            WPP_FxRequest_cpp_Traceguids,
            LowPart,
            v34,
            v32,
            v42);
          WPP_IFR_SF_D(this->m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, 0xC0000010);
        }
      }
      else
      {
        IsNotCompleted = -1073741789;
        v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v35 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequest_cpp_Traceguids, v35, -1073741789);
      }
      break;
    default:
      v27 = this->m_DeviceBase;
      v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v29 = v27->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v28 = 0LL;
      v30 = (const void *)((unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v29 )
        v30 = 0LL;
      WPP_IFR_SF_Dqq(
        this->m_Globals,
        (unsigned __int8)v30,
        MajorFunction,
        (unsigned __int16)Length,
        traceGuid,
        MajorFunction,
        v30,
        v28);
      FxVerifierDbgBreakPoint(this->m_Globals);
      IsNotCompleted = -1073741808;
      break;
  }
$Done_22:
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v37 = this[-1].m_ForwardProgressList.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v37, v4, LowPart);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v4);
  }
  if ( IsNotCompleted >= 0 )
  {
    *v44 = &this->m_SystemBuffer;
    m_Mdl = this->m_SystemBuffer.m_Mdl;
    if ( v8 )
    {
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        m_Mdl = (_MDL *)m_Mdl->MappedSystemVa;
      else
        m_Mdl = (_MDL *)MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
    }
    *v6 = m_Mdl;
    *Length = Options;
  }
  return (unsigned int)IsNotCompleted;
}
