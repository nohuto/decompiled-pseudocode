/*
 * XREFs of SiGetSystemDeviceName @ 0x140AEB728
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x1407743C4 (SyspartGetFirmwarePartition.c)
 *     IopFindSystemDevice @ 0x14079E1A0 (IopFindSystemDevice.c)
 *     SyspartDirectGetFirmwareSystemPartition @ 0x14089AA00 (SyspartDirectGetFirmwareSystemPartition.c)
 *     SyspartGetSystemPartition @ 0x14089AA28 (SyspartGetSystemPartition.c)
 *     SyspartDirectGetSystemDisk @ 0x140AEB6D0 (SyspartDirectGetSystemDisk.c)
 *     SyspartDirectGetSystemPartition @ 0x140AEB700 (SyspartDirectGetSystemPartition.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     SiGetFirmwareType @ 0x140AEB804 (SiGetFirmwareType.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDeviceName(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int FirmwareType; // eax
  int v8; // esi
  __int64 v9; // rbx
  unsigned int v10; // ebx
  PVOID P[6]; // [rsp+28h] [rbp-30h] BYREF

  *a4 = 0;
  P[0] = 0LL;
  FirmwareType = SiGetFirmwareType();
  v8 = guard_dispatch_icall_no_overrides(FirmwareType, (__int64)P);
  if ( v8 >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *((_WORD *)P[0] + v9) );
    v10 = 2 * v9 + 2;
    if ( a2 && a3 >= v10 )
    {
      v8 = 0;
      if ( KeGetCurrentThread()->PreviousMode )
        RtlCopyToUser(a2, P[0], v10);
      else
        RtlCopyVolatileMemory(a2, P[0], v10);
    }
    else
    {
      v8 = -1073741789;
    }
    *a4 = v10;
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v8;
}
