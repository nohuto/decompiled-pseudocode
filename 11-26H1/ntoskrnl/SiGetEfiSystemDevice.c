/*
 * XREFs of SiGetEfiSystemDevice @ 0x14089B348
 * Callers:
 *     SiGetFirmwareSystemPartition @ 0x14089A7B0 (SiGetFirmwareSystemPartition.c)
 *     SiGetSystemDisk @ 0x14089A8E0 (SiGetSystemDisk.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SiLogMessage @ 0x140774464 (SiLogMessage.c)
 *     SyspartEnumerateDisks @ 0x14089AB98 (SyspartEnumerateDisks.c)
 *     SiDisambiguateSystemDevice @ 0x14089B270 (SiDisambiguateSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x14089B4EC (SiGetEspFromFirmware.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetEfiSystemDevice(unsigned int a1, __int64 a2, wchar_t **a3)
{
  wchar_t *Pool2; // rdi
  __int64 v6; // r8
  int v7; // r9d
  int v8; // ebx
  int EspFromFirmware; // eax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  v11 = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    v8 = -1073741801;
    goto LABEL_3;
  }
  v8 = SiDisambiguateSystemDevice((_DWORD *)&v11 + 2, (_DWORD *)&v11 + 3, v6, v7);
  if ( v8 >= 0 )
  {
    SiLogMessage(2, L"Found stored disambiguated system device to disk %lu, partition %lu.", DWORD2(v11), HIDWORD(v11));
LABEL_17:
    HIDWORD(v11) &= -(a1 != 0);
    RtlStringCbPrintfW(Pool2, 0x6AuLL, L"\\Device\\Harddisk%lu\\Partition%lu", DWORD2(v11), HIDWORD(v11));
    SiLogMessage(2, L"System Device Path Found. Device Path: %ws", Pool2);
    goto LABEL_18;
  }
  v8 = SyspartEnumerateDisks();
  if ( v8 >= 0 )
  {
    if ( (_DWORD)v11 )
    {
      if ( (unsigned int)v11 <= 1 || DWORD1(v11) == 1 )
      {
        v8 = 0;
        goto LABEL_17;
      }
      SiLogMessage(
        3,
        L"Attempting Disambiguation of system device. Found %lu ESP partitions and %lu Virtual ESP partitions.");
      EspFromFirmware = SiGetEspFromFirmware(a1, Pool2);
      v8 = EspFromFirmware;
      if ( EspFromFirmware >= 0 )
      {
        SiLogMessage(2, L"Disambiguation successful. Device Path: %ws", Pool2);
LABEL_18:
        *a3 = Pool2;
        return (unsigned int)v8;
      }
      SiLogMessage(4, L"Disambiguation of system device failed. Status: %x", (unsigned int)EspFromFirmware);
      v8 = -1073740719;
    }
    else
    {
      v8 = -1073740718;
    }
  }
LABEL_3:
  SiLogMessage(4, L"GetEfiSystemDevice Failed. Status: %x", (unsigned int)v8);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v8;
}
