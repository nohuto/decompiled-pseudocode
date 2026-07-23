/*
 * XREFs of HalpAcpiSetupPmRegisterLegacy @ 0x140CB97FC
 * Callers:
 *     HalpAcpiInitializePmRegisters @ 0x140CB94AC (HalpAcpiInitializePmRegisters.c)
 * Callees:
 *     HalpAcpiSetupPmRegister @ 0x140CB96B4 (HalpAcpiSetupPmRegister.c)
 */

__int64 __fastcall HalpAcpiSetupPmRegisterLegacy(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  int v9; // [rsp+28h] [rbp-8h]

  if ( LOBYTE(HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink) < 5u && !a2 )
    return 3221225473LL;
  v8 = 0LL;
  v9 = 0;
  if ( LOBYTE(HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink) < 5u )
  {
    BYTE2(v8) = 0;
    HIDWORD(v8) = a2;
    LOBYTE(v8) = 1;
    switch ( (unsigned __int8)a4 )
    {
      case 1u:
        BYTE3(v8) = 1;
        break;
      case 2u:
        BYTE3(v8) = 2;
        break;
      case 4u:
        BYTE3(v8) = 3;
        break;
      case 8u:
        BYTE3(v8) = 4;
        break;
      default:
        BYTE3(v8) = 0;
        break;
    }
    if ( 8 * a4 <= 0xFF )
      BYTE1(v8) = 8 * a4;
    else
      BYTE1(v8) = -1;
  }
  else
  {
    v7 = *((_DWORD *)a3 + 2);
    v8 = *a3;
    v9 = v7;
  }
  return HalpAcpiSetupPmRegister(a4, a5, (__int64)&v8, a6);
}
