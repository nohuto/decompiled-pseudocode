/*
 * XREFs of ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x140028650
 * Callers:
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x140016380 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1400173B4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     FxIoTargetSendIoctl @ 0x140027D60 (FxIoTargetSendIoctl.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1400289A0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     FxIoTargetSendIo @ 0x14002B350 (FxIoTargetSendIo.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequestBuffer::ValidateMemoryDescriptor(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_MEMORY_DESCRIPTOR *Descriptor,
        __int64 Flags)
{
  IFxMemory *Buffer; // rcx
  _WDFMEMORY_OFFSET **p_Offsets; // rax
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int16 *v14; // rsi
  _WDFMEMORY_OFFSET *Offsets; // rax
  _WDFMEMORY_OFFSET *v16; // rbx
  _MDL *v17; // rax
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v19; // rbp
  unsigned int _a1; // edx
  unsigned __int16 v21; // r9
  IFxMemory v22; // rax
  _WDFMEMORY_OFFSET **v23; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  IFxMemory **p_pMemory; // [rsp+50h] [rbp-38h] BYREF
  __int16 v26; // [rsp+58h] [rbp-30h]
  __int16 v27; // [rsp+5Ah] [rbp-2Eh]
  int v28; // [rsp+5Ch] [rbp-2Ch]
  IFxMemory *pMemory; // [rsp+A0h] [rbp+18h] BYREF

  if ( Descriptor )
  {
    if ( Descriptor->Type == WdfMemoryDescriptorTypeBuffer )
    {
      Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
      if ( Buffer )
      {
        p_Offsets = &Descriptor->u.HandleType.Offsets;
LABEL_5:
        v9 = *(_DWORD *)p_Offsets;
        this->DataType = FxRequestBufferBuffer;
LABEL_6:
        this->u.Mdl.Length = v9;
        this->u.Memory.Memory = Buffer;
        return 0;
      }
      if ( (Flags & 2) == 0 )
      {
        WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xBu, WPP_FxRequestBuffer_cpp_Traceguids);
        return 3221225485LL;
      }
      _a1 = Descriptor->u.BufferType.Length;
      p_Offsets = &Descriptor->u.HandleType.Offsets;
      if ( !_a1 )
        goto LABEL_5;
      v21 = 12;
      goto LABEL_29;
    }
    if ( Descriptor->Type != WdfMemoryDescriptorTypeMdl )
    {
      if ( Descriptor->Type == WdfMemoryDescriptorTypeHandle )
      {
        v12 = (unsigned __int64)Descriptor->u.BufferType.Buffer;
        if ( v12 )
        {
          v10 = 0;
          LOWORD(v13) = 0;
          v14 = (unsigned __int16 *)(~v12 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( (v12 & 1) != 0 )
          {
            v13 = *v14;
            v14 = (unsigned __int16 *)((char *)v14 - v13);
          }
          if ( v14[4] == 4106 )
          {
            pMemory = (IFxMemory *)v14;
          }
          else
          {
            v27 = v13;
            pMemory = 0LL;
            v28 = 0;
            v22.__vftable = *(IFxMemory_vtbl **)v14;
            p_pMemory = &pMemory;
            v26 = 4106;
            if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***, _WDF_MEMORY_DESCRIPTOR *, __int64))v22.GetDriverGlobals)(
                   v14,
                   &p_pMemory,
                   Descriptor,
                   Flags) < 0 )
            {
              WPP_IFR_SF_qDqD(
                *((_FX_DRIVER_GLOBALS **)v14 + 2),
                (unsigned __int8)FxDriverGlobals,
                (unsigned int)Descriptor,
                Flags,
                traceGuid,
                (const void *)v12,
                0x100Au,
                v14,
                v14[4]);
              FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v14 + 2), WDF_INVALID_HANDLE, v12, 0x100AuLL);
            }
            v14 = (unsigned __int16 *)pMemory;
          }
          Offsets = Descriptor->u.HandleType.Offsets;
          if ( Offsets )
          {
            BufferLength = Offsets->BufferLength;
            v19 = BufferLength + Offsets->BufferOffset;
            if ( v19 < BufferLength
              || v19 > (*(__int64 (__fastcall **)(unsigned __int16 *, unsigned __int64, _WDF_MEMORY_DESCRIPTOR *, __int64))(*(_QWORD *)v14 + 8LL))(
                         v14,
                         BufferLength,
                         Descriptor,
                         Flags) )
            {
              v10 = -1073741675;
              WPP_IFR_SF_D(FxDriverGlobals, 2u, 6u, 0x10u, WPP_FxRequestBuffer_cpp_Traceguids, 0xC0000095);
              return v10;
            }
            v14 = (unsigned __int16 *)pMemory;
          }
          if ( v14 )
          {
            v16 = Descriptor->u.HandleType.Offsets;
            v17 = (_MDL *)(*(__int64 (__fastcall **)(unsigned __int16 *, _FX_DRIVER_GLOBALS *, _WDF_MEMORY_DESCRIPTOR *, __int64))(*(_QWORD *)v14 + 16LL))(
                            v14,
                            FxDriverGlobals,
                            Descriptor,
                            Flags);
            this->u.Memory.Memory = (IFxMemory *)v14;
            this->u.Memory.Offsets = v16;
            if ( v17 )
            {
              this->DataType = FxRequestBufferReferencedMdl;
              this->u.RefMdl.Mdl = v17;
            }
            else
            {
              this->DataType = FxRequestBufferMemory;
            }
          }
          return v10;
        }
        if ( (Flags & 2) != 0 )
          return 0;
        WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xFu, WPP_FxRequestBuffer_cpp_Traceguids);
      }
      return (unsigned int)-1073741811;
    }
    Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
    if ( Buffer )
    {
      v23 = &Descriptor->u.HandleType.Offsets;
    }
    else
    {
      if ( (Flags & 2) == 0 )
      {
        WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxRequestBuffer_cpp_Traceguids);
        return 3221225485LL;
      }
      _a1 = Descriptor->u.BufferType.Length;
      v23 = &Descriptor->u.HandleType.Offsets;
      if ( _a1 )
      {
        v21 = 14;
LABEL_29:
        WPP_IFR_SF_D(FxDriverGlobals, 2u, 6u, v21, WPP_FxRequestBuffer_cpp_Traceguids, _a1);
        return 3221225485LL;
      }
    }
    v9 = *(_DWORD *)v23;
    this->DataType = FxRequestBufferMdl;
    goto LABEL_6;
  }
  if ( (Flags & 1) != 0 )
    return 0LL;
  WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xAu, WPP_FxRequestBuffer_cpp_Traceguids);
  return 3221225485LL;
}
