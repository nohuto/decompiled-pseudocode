/*
 * XREFs of HalGetBusDataByOffset @ 0x14042C5F0
 * Callers:
 *     HalGetBusData @ 0x14057BE70 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x14059CB5C (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x140C10AEC (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x140C1B344 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetPCIData @ 0x14042C720 (HalpGetPCIData.c)
 *     HalpGetSetCmosData @ 0x1404ED634 (HalpGetSetCmosData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall HalGetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  ULONG v6; // ebx
  ULONG v9; // edi
  size_t v10; // r15
  int v11; // eax
  ULONG v12; // r12d
  ULONG v13; // ebp
  __int64 v14; // rcx
  ULONG v16; // [rsp+30h] [rbp-58h]
  ULONG v17; // [rsp+38h] [rbp-50h]
  PVOID v18; // [rsp+40h] [rbp-48h]
  ULONG *v19; // [rsp+48h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  ULONG v21; // [rsp+90h] [rbp+8h] BYREF

  v6 = 0;
  v9 = BusNumber;
  if ( BusDataType == Cmos )
    return HalpGetSetCmosData(0, SlotNumber, (_DWORD)Buffer, Length, 0);
  if ( BusDataType == PCIConfiguration )
  {
    v10 = Length;
    v11 = -1073741810;
    v12 = Offset;
    v13 = BusNumber >> 8;
    v21 = 0;
    if ( qword_140E00D00 )
    {
      v19 = &v21;
      v14 = (unsigned __int8)SlotNumber >> 5;
      v18 = Buffer;
      v17 = Length;
      v16 = Offset;
      LOBYTE(v14) = 1;
      v11 = guard_dispatch_icall_no_overrides(v14, retaddr);
      v6 = v21;
      if ( v11 >= 0 )
        return v6;
    }
    if ( v9 <= HalpMaxPciBus && v9 >= HalpMinPciBus )
    {
      if ( v11 == -1073741810 )
      {
        LOBYTE(BusNumber) = v9;
        return HalpGetPCIData(
                 (unsigned __int16)v13,
                 *(_QWORD *)&BusNumber,
                 SlotNumber,
                 Buffer,
                 v12,
                 v10,
                 v16,
                 v17,
                 v18,
                 v19);
      }
      else
      {
        memset_0(Buffer, 255, v10);
      }
      return v6;
    }
  }
  return 0;
}
