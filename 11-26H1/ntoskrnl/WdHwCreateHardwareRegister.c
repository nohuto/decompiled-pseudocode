/*
 * XREFs of WdHwCreateHardwareRegister @ 0x1405A7644
 * Callers:
 *     HalpWdatProcessWdrtInternalData @ 0x14059A224 (HalpWdatProcessWdrtInternalData.c)
 *     WdInstrInitializeInstruction @ 0x1405A78D4 (WdInstrInitializeInstruction.c)
 * Callees:
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 */

__int64 __fastcall WdHwCreateHardwareRegister(LARGE_INTEGER PhysicalAddress, char a2, char a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 (__fastcall *v8)(); // rsi
  unsigned __int8 v9; // r12
  __int64 (__fastcall *v10)(); // rbp
  PVOID QuadPart; // rax

  v4 = 0;
  if ( !PhysicalAddress.QuadPart || (unsigned __int8)(a3 - 1) > 2u || !a4 )
    return (unsigned int)-1073741811;
  v8 = 0LL;
  v9 = 1 << (a3 - 1);
  if ( !a2 )
  {
    switch ( v9 )
    {
      case 1u:
        v8 = WdHwpReadRegisterUChar;
        break;
      case 2u:
        v8 = (__int64 (__fastcall *)())READ_REGISTER_USHORT;
        goto LABEL_10;
      case 4u:
        v8 = (__int64 (__fastcall *)())READ_REGISTER_ULONG;
        break;
    }
    v10 = 0LL;
    if ( v9 == 1 )
    {
      v10 = (__int64 (__fastcall *)())WdHwpWriteRegisterUChar;
      goto LABEL_31;
    }
    if ( v9 != 2 )
    {
      if ( v9 == 4 )
        v10 = (__int64 (__fastcall *)())WdHwpWriteRegisterULong;
      goto LABEL_31;
    }
LABEL_10:
    v10 = (__int64 (__fastcall *)())WdHwpWriteRegisterUShort;
    goto LABEL_31;
  }
  if ( a2 != 1 )
    goto LABEL_24;
  if ( v9 == 1 )
  {
    v8 = WdHwpReadPortUChar;
    goto LABEL_24;
  }
  if ( v9 != 2 )
  {
    if ( v9 == 4 )
      v8 = (__int64 (__fastcall *)())WdHwpReadPortULong;
LABEL_24:
    v10 = 0LL;
    if ( a2 != 1 )
      goto LABEL_31;
    goto LABEL_25;
  }
  v8 = WdHwpReadPortUShort;
  v10 = 0LL;
LABEL_25:
  switch ( v9 )
  {
    case 1u:
      v10 = WdHwpWritePortUChar;
      break;
    case 2u:
      v10 = WdHwpWritePortUShort;
      break;
    case 4u:
      v10 = (__int64 (__fastcall *)())WRITE_PORT_ULONG;
      break;
  }
LABEL_31:
  if ( !v8 || !v10 )
    return (unsigned int)-1073741811;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      QuadPart = (PVOID)PhysicalAddress.QuadPart;
      goto LABEL_38;
    }
    return (unsigned int)-1073741811;
  }
  QuadPart = HalMapIoSpace(PhysicalAddress, v9, MmNonCached);
  if ( QuadPart )
  {
LABEL_38:
    *(_DWORD *)(a4 + 10) = 0;
    *(_WORD *)(a4 + 14) = 0;
    *(LARGE_INTEGER *)a4 = PhysicalAddress;
    *(_BYTE *)(a4 + 8) = a2;
    *(_BYTE *)(a4 + 9) = v9;
    *(_QWORD *)(a4 + 16) = QuadPart;
    *(_QWORD *)(a4 + 24) = v8;
    *(_QWORD *)(a4 + 32) = v10;
    return v4;
  }
  return (unsigned int)-1073741670;
}
