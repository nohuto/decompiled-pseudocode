/*
 * XREFs of HsaAllocateRemappingTableEntry @ 0x1405AB470
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HsaGetDeviceAperture @ 0x1405300CC (HsaGetDeviceAperture.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14059A394 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14059A5B0 (ExtEnvFreePhysicalMemory.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405AD79C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HsaAllocateRemappingTableEntry(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int16 a5,
        char a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int64 v12; // r13
  char v13; // r14
  int PhysicalMemory; // ebx
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 DeviceAperture; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // xmm0_8
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  void *v31[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE Size[24]; // [rsp+60h] [rbp-20h] BYREF
  char v34; // [rsp+D0h] [rbp+50h]
  char v35; // [rsp+D0h] [rbp+50h]

  v28 = 0LL;
  if ( a3 && ((a3 - 1) & a3) == 0 )
  {
    v12 = 0LL;
    v13 = 0;
    v30 = 0LL;
    PhysicalMemory = 0;
    v29 = 0LL;
    *(_OWORD *)&Size[8] = 0LL;
    v31[0] = 0LL;
    v31[1] = 0LL;
    if ( *(_DWORD *)(a1 + 160) == a4
      && (!a9 || *(_DWORD *)a9 != 1
        ? (HIDWORD(v28) = 0, v15 = a7 & 7 | (8 * (a6 & 0x1F | (32 * (unsigned __int8)a5))))
        : (v15 = *(unsigned __int16 *)(a9 + 12), HIDWORD(v28) = *(_WORD *)(a9 + 10) & 3),
          v16 = *(_QWORD *)(a1 + 192),
          LODWORD(v28) = v15,
          ((*(char *)(((unsigned __int64)v15 >> 3) + v16) >> (v15 & 7)) & 1) != 0) )
    {
      v17 = HIWORD(a2);
      if ( (unsigned int)v17 >= 0x20 || a2 >> 9 >= dword_140F87748 || a3 + (a2 & 0x1FF) > 0x200 )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        LOBYTE(EmpParseLock.Padding[4]) = HalpAcquireHighLevelLock(&EmpParseLock.Padding[3]);
        DeviceAperture = HsaGetDeviceAperture(a2);
        v19 = DeviceAperture;
        if ( DeviceAperture && *(_QWORD *)(DeviceAperture + 16) )
        {
          *(_DWORD *)(DeviceAperture + 48) += a3;
          v34 = 0;
        }
        else
        {
          v34 = 1;
        }
        HalpReleaseHighLevelLock(&EmpParseLock.Padding[3], EmpParseLock.Padding[4]);
        if ( v34 )
        {
          if ( v19 )
            goto LABEL_21;
          PhysicalMemory = ExtEnvAllocateMemory(v20, 0x2000u, &v30);
          if ( PhysicalMemory >= 0 )
          {
            v12 = v30;
            v13 = 1;
LABEL_21:
            *(_QWORD *)Size = 0x20000002000LL;
            PhysicalMemory = ExtEnvAllocatePhysicalMemory(v20, 0x2000u, 0, MmCached, (LARGE_INTEGER *)v31, &v31[1]);
            if ( PhysicalMemory >= 0 )
            {
              memset_0(v31[1], 0, *(unsigned int *)Size);
              v35 = 1;
              PhysicalMemory = ExtEnvAllocateMemory(
                                 v22,
                                 4 * (unsigned int)(((unsigned __int64)*(unsigned int *)&Size[4] + 31) >> 5),
                                 &v29);
              if ( PhysicalMemory < 0 )
                goto LABEL_28;
              *(_DWORD *)&Size[8] = *(_DWORD *)&Size[4];
              *(_QWORD *)&Size[16] = v29;
              RtlClearBits((PRTL_BITMAP)&Size[8], 0, *(ULONG *)&Size[4]);
              LOBYTE(EmpParseLock.Padding[4]) = HalpAcquireHighLevelLock(&EmpParseLock.Padding[3]);
              if ( !qword_140F87760[v17] )
              {
                qword_140F87760[v17] = v12;
                v23 = HsaGetDeviceAperture(a2);
                dword_140F8774C += 128;
                v19 = v23;
                v13 = 0;
              }
              if ( !*(_QWORD *)(v19 + 16) )
              {
                v24 = *(_OWORD *)Size;
                v25 = v28;
                *(_OWORD *)(v19 + 8) = *(_OWORD *)v31;
                v26 = *(_QWORD *)&Size[16];
                *(_OWORD *)(v19 + 24) = v24;
                *(_QWORD *)(v19 + 40) = v26;
                *(_QWORD *)v19 = a1;
                *(_QWORD *)(v19 + 52) = v25;
                HsaUpdateRemappingTableInDeviceTableEntry(a1, &v28, v31);
                v35 = 0;
              }
              *(_DWORD *)(v19 + 48) += a3;
              HalpReleaseHighLevelLock(&EmpParseLock.Padding[3], EmpParseLock.Padding[4]);
              if ( v35 )
              {
LABEL_28:
                if ( v31[1] )
                  ExtEnvFreePhysicalMemory(v21, (struct _LIST_ENTRY *)v31[1], *(unsigned int *)Size, 1u);
                if ( v29 )
                  ExtEnvFreeMemory(v21, v29);
              }
            }
            if ( v13 )
              ExtEnvFreeMemory(v21, v12);
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741594;
    }
    return (unsigned int)PhysicalMemory;
  }
  return 3221225485LL;
}
