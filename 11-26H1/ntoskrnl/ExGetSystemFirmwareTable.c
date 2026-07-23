/*
 * XREFs of ExGetSystemFirmwareTable @ 0x140838AC0
 * Callers:
 *     IpmiHwpReadSpmiConfiguration @ 0x140721DB8 (IpmiHwpReadSpmiConfiguration.c)
 *     IpmiLibReadSmbiosRecord38 @ 0x140721E70 (IpmiLibReadSmbiosRecord38.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409A6638 (ExpGetSystemFirmwareTableInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetSystemFirmwareTable(int a1, int a2, void *a3, int a4, _DWORD *a5)
{
  _DWORD *Pool2; // rax
  _DWORD *v11; // rbx
  int SystemFirmwareTableInformation; // edi

  if ( !a3 && a4 )
    return 3221225485LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( Pool2 )
  {
    Pool2[3] = a4;
    *Pool2 = a1;
    Pool2[1] = 1;
    Pool2[2] = a2;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(Pool2);
    if ( (int)(SystemFirmwareTableInformation + 0x80000000) < 0 || SystemFirmwareTableInformation == -1073741789 )
    {
      if ( a5 )
        *a5 = v11[3];
      if ( SystemFirmwareTableInformation >= 0 )
      {
        if ( a3 )
          memmove(a3, v11 + 4, 0xFFFFFFF0uLL);
      }
    }
    ExFreePoolWithTag(v11, 0x54465241u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SystemFirmwareTableInformation;
}
