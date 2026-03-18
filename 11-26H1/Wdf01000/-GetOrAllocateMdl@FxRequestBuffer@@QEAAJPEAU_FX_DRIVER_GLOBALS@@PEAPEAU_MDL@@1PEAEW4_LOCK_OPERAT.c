/*
 * XREFs of ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001339C
 * Callers:
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x140002450 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1400137E8 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x140026F90 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1400289A0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x14002BD00 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x140013D00 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     FxProbeAndLockWithAccess @ 0x140014070 (FxProbeAndLockWithAccess.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1400594C8 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1400803F8 (WPP_IFR_SF_Dd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x140098714 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequestBuffer::GetOrAllocateMdl(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _MDL **Mdl,
        _MDL **MdlToFree,
        unsigned __int8 *UnlockWhenFreed,
        _LOCK_OPERATION Operation,
        unsigned __int8 ReuseMdl,
        unsigned __int64 *SizeOfMdl)
{
  _WDFMEMORY_OFFSET *v12; // rax
  char *v13; // r12
  SIZE_T _a1; // r15
  SIZE_T v15; // rax
  unsigned __int64 v16; // r13
  _MDL *v17; // rax
  __int64 result; // rax
  _MDL *v19; // r8
  int _a2; // r14d
  IFxMemory *Memory; // r14
  SIZE_T v22; // rax
  unsigned __int8 v23; // r12
  unsigned __int64 v24; // r13
  _MDL *Debug; // rax
  _WDFMEMORY_OFFSET *Offsets; // r14
  IFxMemory *v27; // rax
  _MDL *v28; // rax
  unsigned __int16 v29; // r9
  int v30; // edx
  unsigned __int8 Irp; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  *UnlockWhenFreed = 0;
  switch ( this->DataType )
  {
    case FxRequestBufferUnspecified:
      result = 0LL;
      goto LABEL_18;
    case FxRequestBufferMemory:
      Offsets = this->u.Memory.Offsets;
      v27 = (IFxMemory *)this->u.Memory.Memory->GetBuffer(this->u.Memory.Memory);
      if ( Offsets )
        Memory = (IFxMemory *)((char *)v27 + Offsets->BufferOffset);
      else
        Memory = v27;
      if ( Memory )
        goto LABEL_30;
      goto LABEL_29;
    case FxRequestBufferMdl:
      v28 = this->u.Mdl.Mdl;
      goto LABEL_42;
    case FxRequestBufferBuffer:
LABEL_29:
      Memory = this->u.Memory.Memory;
LABEL_30:
      _a1 = (int)FxRequestBuffer::GetBufferLength(this);
      v22 = MmSizeOfMdl(Memory, _a1);
      v23 = ReuseMdl;
      v24 = v22;
      if ( ReuseMdl && v22 <= *SizeOfMdl )
      {
        if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages((*MdlToFree)->MappedSystemVa, *MdlToFree);
        *Mdl = *MdlToFree;
      }
      else
      {
        v23 = 0;
        if ( *MdlToFree )
        {
          FxMdlFree(FxDriverGlobals, *MdlToFree);
          *MdlToFree = 0LL;
          if ( SizeOfMdl )
            *SizeOfMdl = 0LL;
        }
        if ( FxDriverGlobals->FxVerifierOn )
          Debug = FxMdlAllocateDebug(FxDriverGlobals, 0LL, Memory, _a1, Irp, 0, retaddr);
        else
          Debug = IoAllocateMdl(Memory, _a1, 0, 0, 0LL);
        *Mdl = Debug;
        if ( !Debug )
        {
          v29 = 10;
          goto LABEL_48;
        }
        if ( SizeOfMdl )
          *SizeOfMdl = v24;
      }
      if ( v23 == 1 )
      {
        v19 = *Mdl;
        v19->Next = 0LL;
        v19->MdlFlags = 0;
        v30 = (unsigned __int16)Memory & 0xFFF;
        v19->Size = 8 * (((_a1 + ((unsigned __int16)Memory & 0xFFF) + 4095LL) >> 12) + 6);
        v19->ByteOffset = v30;
        v19->StartVa = (void *)((unsigned __int64)Memory & 0xFFFFFFFFFFFFF000uLL);
        v19->ByteCount = _a1;
      }
      _a2 = FxProbeAndLockWithAccess(*Mdl, v30, Operation);
      if ( _a2 >= 0 )
      {
        *UnlockWhenFreed = 1;
        goto LABEL_27;
      }
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 6u, 0xBu, WPP_FxRequestBufferKm_cpp_Traceguids, *Mdl, _a2);
      if ( !v23 )
        FxMdlFree(FxDriverGlobals, *Mdl);
      result = (unsigned int)_a2;
LABEL_18:
      *Mdl = 0LL;
      return result;
  }
  if ( this->DataType != FxRequestBufferReferencedMdl )
  {
    result = 3221225485LL;
    goto LABEL_18;
  }
  v12 = this->u.Memory.Offsets;
  if ( !v12 || !v12->BufferOffset && !v12->BufferLength )
  {
    v28 = this->u.RefMdl.Mdl;
LABEL_42:
    *Mdl = v28;
    return 0LL;
  }
  v13 = (char *)this->u.RefMdl.Mdl->StartVa + this->u.RefMdl.Mdl->ByteOffset + v12->BufferOffset;
  LODWORD(_a1) = FxRequestBuffer::GetBufferLength(this);
  v15 = MmSizeOfMdl(v13, (int)_a1);
  v16 = v15;
  if ( ReuseMdl && v15 <= *SizeOfMdl )
  {
    if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages((*MdlToFree)->MappedSystemVa, *MdlToFree);
    v17 = *MdlToFree;
    *Mdl = *MdlToFree;
    goto LABEL_16;
  }
  if ( *MdlToFree )
  {
    FxMdlFree(FxDriverGlobals, *MdlToFree);
    *MdlToFree = 0LL;
    if ( SizeOfMdl )
      *SizeOfMdl = 0LL;
  }
  if ( FxDriverGlobals->FxVerifierOn )
    v17 = FxMdlAllocateDebug(FxDriverGlobals, 0LL, v13, _a1, Irp, 0, retaddr);
  else
    v17 = IoAllocateMdl(v13, _a1, 0, 0, 0LL);
  *Mdl = v17;
  if ( v17 )
  {
    if ( SizeOfMdl )
    {
      *SizeOfMdl = v16;
      v17 = *Mdl;
    }
LABEL_16:
    IoBuildPartialMdl(this->u.RefMdl.Mdl, v17, v13, _a1);
LABEL_27:
    *MdlToFree = *Mdl;
    return 0LL;
  }
  v29 = 12;
LABEL_48:
  WPP_IFR_SF_Dd(FxDriverGlobals, 2u, 6u, v29, WPP_FxRequestBufferKm_cpp_Traceguids, _a1, -1073741670);
  return 3221225626LL;
}
