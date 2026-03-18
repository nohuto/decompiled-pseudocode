/*
 * XREFs of ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x14000AF40
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x14000BD20 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qcDqd @ 0x14007F3A0 (WPP_IFR_SF_qcDqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoTargetSelf::Send(FxIoTargetSelf *this, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  FxIoQueue *m_DispatchQueue; // r9
  __int64 MajorFunction; // r8
  unsigned int _a2; // edx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 Blink; // rax
  _LIST_ENTRY *v10; // r11
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  FxPkgIo *v12; // rcx
  FxIoInCallerContext *p_IoInCallerContextCallback; // r8
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  const void *_a1; // rcx
  int v19; // esi
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *globals; // rcx
  bool v26; // zf
  unsigned __int16 v27; // ax
  const void *v28; // r10
  int v29; // [rsp+48h] [rbp-10h]

  --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  m_DispatchQueue = this->m_DispatchQueue;
  MajorFunction = CurrentStackLocation->MajorFunction;
  _a2 = CurrentStackLocation->MajorFunction;
  if ( !m_DispatchQueue )
  {
    m_DispatchQueue = (FxIoQueue *)*((_QWORD *)&this->m_DeviceBase[3].m_ChildListHead.Blink[9].Flink + MajorFunction);
    if ( !m_DispatchQueue )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetSelf_cpp_Traceguids, _a1, _a2);
      v19 = -1073741436;
$Fail:
      Irp->IoStatus.Status = v19;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return;
    }
  }
  m_DeviceBase = this->m_DeviceBase;
  if ( _a2 <= 0xF )
  {
    if ( _a2 == 15 )
    {
LABEL_4:
      Blink = (unsigned __int64)m_DeviceBase[3].m_ChildListHead.Blink;
      goto LABEL_5;
    }
    if ( CurrentStackLocation->MajorFunction )
    {
      v20 = _a2 - 2;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
          goto LABEL_4;
        v22 = v21 - 1;
        if ( !v22 || v22 == 10 )
          goto LABEL_4;
        goto LABEL_28;
      }
    }
LABEL_10:
    Blink = m_DeviceBase[3].m_SpinLock.m_Lock;
    goto LABEL_5;
  }
  v14 = _a2 - 16;
  if ( !v14 )
    goto LABEL_10;
  v15 = v14 - 2;
  if ( !v15 )
    goto LABEL_10;
  v16 = v15 - 4;
  if ( !v16 )
    goto LABEL_13;
  v17 = v16 - 1;
  if ( !v17 )
  {
    Blink = (unsigned __int64)m_DeviceBase[3].m_ParentObject;
    goto LABEL_5;
  }
  if ( v17 == 4 )
  {
LABEL_13:
    Blink = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( Blink )
      goto LABEL_5;
  }
LABEL_28:
  Blink = (unsigned __int64)m_DeviceBase[3].m_ChildEntry.Flink;
LABEL_5:
  v10 = m_DeviceBase[3].m_ChildListHead.Blink;
  if ( (_LIST_ENTRY *)Blink != v10 )
  {
    v19 = -1073741811;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    p_m_Globals = &this->m_Globals;
    globals = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v26 = m_ObjectSize == 0;
    v27 = this->m_ObjectSize;
    if ( v26 )
      globals = 0LL;
    v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v27 )
      v28 = 0LL;
    WPP_IFR_SF_qcDqd(
      *p_m_Globals,
      CurrentStackLocation->MinorFunction,
      0xEu,
      0xBu,
      WPP_FxIoTargetSelf_cpp_Traceguids,
      v28,
      MajorFunction,
      CurrentStackLocation->MinorFunction,
      globals,
      v29);
    FxVerifierDbgBreakPoint(*p_m_Globals);
    goto $Fail;
  }
  m_CxDeviceInfo = m_DispatchQueue->m_CxDeviceInfo;
  v12 = (FxPkgIo *)m_DeviceBase[3].m_ChildListHead.Blink;
  p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
  if ( !m_CxDeviceInfo )
    p_IoInCallerContextCallback = (FxIoInCallerContext *)&v10[24].Blink;
  FxPkgIo::DispatchStep2(v12, Irp, p_IoInCallerContextCallback, m_DispatchQueue);
}
