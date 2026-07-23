/*
 * XREFs of HalSetBusDataByOffset @ 0x14042C360
 * Callers:
 *     HalSetBusData @ 0x14057BEA0 (HalSetBusData.c)
 *     HalpPiix4Detect @ 0x140C10AEC (HalpPiix4Detect.c)
 *     KdpSysWriteBusData @ 0x140C1B3AC (KdpSysWriteBusData.c)
 * Callees:
 *     HalpSetPCIData @ 0x14042C4F0 (HalpSetPCIData.c)
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG __stdcall HalSetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  char v8; // si
  ULONG v9; // ebx
  ULONG v11; // esi
  ULONG v12; // ebx
  __int64 v13; // rdx
  size_t Size; // [rsp+28h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v8 = BusNumber;
  if ( BusDataType )
  {
    if ( BusDataType == PCIConfiguration )
    {
      v9 = BusNumber >> 8;
      if ( qword_140E00D00 && (unsigned int)guard_dispatch_icall_no_overrides(0LL, retaddr) != -1073741810 )
      {
        return 0;
      }
      else
      {
        LODWORD(Size) = Length;
        LOBYTE(BusNumber) = v8;
        return HalpSetPCIData((unsigned __int16)v9, BusNumber, SlotNumber, (int)Buffer, Offset, Size);
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v11 = HalpCmosBusParameterTable;
    v12 = SlotNumber;
    if ( SlotNumber + Length - 1 <= HalpCmosBusParameterTable )
      v11 = SlotNumber + Length - 1;
    HalpAcquireCmosSpinLock(0LL);
    if ( SlotNumber <= v11 )
    {
      do
      {
        LOBYTE(v13) = *(_BYTE *)Buffer;
        guard_dispatch_icall_no_overrides(v12++, v13);
        Buffer = (char *)Buffer + 1;
      }
      while ( v12 <= v11 );
    }
    HalpReleaseCmosSpinLock();
    return v12 - SlotNumber;
  }
}
