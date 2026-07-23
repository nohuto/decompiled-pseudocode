/*
 * XREFs of WmipGetSMBiosTableData @ 0x140AC6900
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x1404C3D00 (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x140AC6630 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     RtlCopyDeviceMemory @ 0x14055BC1C (RtlCopyDeviceMemory.c)
 *     WmipSMBiosHideMachine @ 0x1408293C8 (WmipSMBiosHideMachine.c)
 *     WmipGetRegistryHideMachine @ 0x140AC69FC (WmipGetRegistryHideMachine.c)
 *     WmipAcquireSmbiosLockShared @ 0x140AC6AA4 (WmipAcquireSmbiosLockShared.c)
 */

__int64 __fastcall WmipGetSMBiosTableData(char *a1, int *a2, _DWORD *a3)
{
  int v6; // ebx
  char *v8; // rax
  char *v9; // rbx

  if ( !a2 )
    return 3221225485LL;
  WmipAcquireSmbiosLockShared();
  if ( a3 )
    *a3 = WmipSMBiosVersionInfo;
  if ( *a2 >= (unsigned int)WmipSMBiosTableLength )
  {
    if ( ExpPlatformBinaryLock.StackLimit )
    {
      v8 = (char *)MmMapIoSpaceEx((__int64)ExpPlatformBinaryLock.StackLimit, (unsigned int)WmipSMBiosTableLength, 4u);
      v9 = v8;
      if ( v8 )
      {
        RtlCopyDeviceMemory(a1, v8, (unsigned int)WmipSMBiosTableLength);
        MmUnmapIoSpace(v9, (unsigned int)WmipSMBiosTableLength);
        v6 = 0;
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      v6 = -1073741808;
    }
  }
  else
  {
    v6 = -1073741789;
  }
  *a2 = WmipSMBiosTableLength;
  if ( (unsigned __int8)WmipGetRegistryHideMachine() )
  {
    if ( v6 >= 0 )
      WmipSMBiosHideMachine(a1, *a2);
  }
  ExReleaseResourceLite(&WmipSMBiosLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
