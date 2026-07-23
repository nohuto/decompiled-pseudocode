/*
 * XREFs of HsaFreeRemappingTableEntry @ 0x1405AC180
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HsaGetDeviceAperture @ 0x1405300CC (HsaGetDeviceAperture.c)
 *     ExtEnvCriticalFailure @ 0x140530120 (ExtEnvCriticalFailure.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14059A5B0 (ExtEnvFreePhysicalMemory.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405AD79C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HsaFreeRemappingTableEntry(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // r15
  char v7; // r14
  _QWORD *DeviceAperture; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-38h]
  unsigned __int64 v15; // [rsp+50h] [rbp-28h]

  v3 = 0;
  v13 = 0LL;
  v4 = 0LL;
  LODWORD(v14) = 0;
  v7 = 0;
  if ( a2 >> 9 >= dword_140F8774C || a3 + (a2 & 0x1FF) > 0x200 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    DeviceAperture = (_QWORD *)HsaGetDeviceAperture(a2);
    if ( *DeviceAperture == a1 )
    {
      LOBYTE(EmpParseLock.Padding[4]) = HalpAcquireHighLevelLock(&EmpParseLock.Padding[3]);
      v9 = *((_DWORD *)DeviceAperture + 12) == a3;
      *((_DWORD *)DeviceAperture + 12) -= a3;
      if ( v9 )
      {
        HsaUpdateRemappingTableInDeviceTableEntry(a1, (char *)DeviceAperture + 52, &xmmword_140F87720);
        v13 = *(_OWORD *)(DeviceAperture + 1);
        v15 = DeviceAperture[5];
        v14 = *(_OWORD *)(DeviceAperture + 3);
        memset_0(DeviceAperture, 0, 0x40uLL);
        v4 = v15;
        v7 = 1;
      }
      HalpReleaseHighLevelLock(&EmpParseLock.Padding[3], EmpParseLock.Padding[4]);
      if ( v7 )
      {
        if ( *((_QWORD *)&v13 + 1) == *((_QWORD *)&xmmword_140F87720 + 1) )
          ExtEnvCriticalFailure(v10, 0LL, 0LL, 0LL, 0LL);
        ExtEnvFreePhysicalMemory(v10, *((struct _LIST_ENTRY **)&v13 + 1), v14, 1u);
        ExtEnvFreeMemory(v11, v4);
      }
    }
    else
    {
      return (unsigned int)-1073741594;
    }
  }
  return v3;
}
