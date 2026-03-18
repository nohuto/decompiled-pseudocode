/*
 * XREFs of HsaFreeRemappingTableEntry @ 0x1405A9970
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 *     HsaGetDeviceAperture @ 0x14052DBAC (HsaGetDeviceAperture.c)
 *     ExtEnvCriticalFailure @ 0x14052DC00 (ExtEnvCriticalFailure.c)
 *     ExtEnvFreeMemory @ 0x140597DF0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x140597E30 (ExtEnvFreePhysicalMemory.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405AAF8C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  if ( a2 >> 9 >= dword_140F87388 || a3 + (a2 & 0x1FF) > 0x200 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    DeviceAperture = (_QWORD *)HsaGetDeviceAperture(a2);
    if ( *DeviceAperture == a1 )
    {
      byte_140F87358 = HalpAcquireHighLevelLock(&unk_140F87350);
      v9 = *((_DWORD *)DeviceAperture + 12) == a3;
      *((_DWORD *)DeviceAperture + 12) -= a3;
      if ( v9 )
      {
        HsaUpdateRemappingTableInDeviceTableEntry(a1, (char *)DeviceAperture + 52, &EmpParseLock.1144);
        v13 = *(_OWORD *)(DeviceAperture + 1);
        v15 = DeviceAperture[5];
        v14 = *(_OWORD *)(DeviceAperture + 3);
        memset_0(DeviceAperture, 0, 0x40uLL);
        v4 = v15;
        v7 = 1;
      }
      HalpReleaseHighLevelLock(&unk_140F87350, byte_140F87358);
      if ( v7 )
      {
        if ( *((_QWORD *)&v13 + 1) == EmpParseLock.KcsanThread )
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
