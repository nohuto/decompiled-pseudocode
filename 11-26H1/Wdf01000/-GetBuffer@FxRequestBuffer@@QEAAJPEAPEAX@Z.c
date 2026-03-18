/*
 * XREFs of ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x140059820
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x140026F90 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequestBuffer::GetBuffer(FxRequestBuffer *this, IFxMemory **Buffer)
{
  FxRequestBufferType DataType; // eax
  __int64 result; // rax
  __int32 v6; // eax
  _WDFMEMORY_OFFSET *Offsets; // rsi
  IFxMemory *v8; // rax
  __int32 v9; // eax
  _MDL *Mdl; // rcx
  IFxMemory *MappedSystemVa; // rax
  _WDFMEMORY_OFFSET *v12; // rcx
  IFxMemory *Memory; // rcx
  IFxMemory *v14; // rdx

  DataType = this->DataType;
  if ( this->DataType == FxRequestBufferBuffer )
  {
    *Buffer = this->u.Memory.Memory;
    return 0LL;
  }
  else
  {
    if ( DataType == FxRequestBufferUnspecified )
    {
      *Buffer = 0LL;
      return 0LL;
    }
    v6 = DataType - 1;
    if ( !v6 )
    {
      Offsets = this->u.Memory.Offsets;
      v8 = (IFxMemory *)this->u.Memory.Memory->GetBuffer(this->u.Memory.Memory);
      if ( Offsets )
      {
        *Buffer = (IFxMemory *)((char *)v8 + Offsets->BufferOffset);
        return 0LL;
      }
      goto LABEL_8;
    }
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 == 2 )
      {
        Mdl = this->u.RefMdl.Mdl;
        if ( (Mdl->MdlFlags & 5) != 0 )
          MappedSystemVa = (IFxMemory *)Mdl->MappedSystemVa;
        else
          MappedSystemVa = (IFxMemory *)MmMapLockedPagesSpecifyCache(
                                          Mdl,
                                          0,
                                          MmCached,
                                          0LL,
                                          0,
                                          ExDefaultMdlProtection | 0x40000010);
        *Buffer = MappedSystemVa;
        if ( MappedSystemVa )
        {
          v12 = this->u.Memory.Offsets;
          if ( !v12 )
            return 0LL;
          v8 = (IFxMemory *)((char *)MappedSystemVa + v12->BufferOffset);
LABEL_8:
          *Buffer = v8;
          return 0LL;
        }
        return 3221225626LL;
      }
      else
      {
        return 3221225485LL;
      }
    }
    else
    {
      Memory = this->u.Memory.Memory;
      if ( (BYTE2(Memory[1].__vftable) & 5) != 0 )
        v14 = (IFxMemory *)Memory[3].__vftable;
      else
        v14 = (IFxMemory *)MmMapLockedPagesSpecifyCache(
                             (PMDL)Memory,
                             0,
                             MmCached,
                             0LL,
                             0,
                             ExDefaultMdlProtection | 0x40000010);
      *Buffer = v14;
      result = 3221225626LL;
      if ( v14 )
        return 0LL;
    }
  }
  return result;
}
