/*
 * XREFs of HalpIvtProcessDrhdEntry @ 0x1405B12F8
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x1405B1244 (HalpIvtProcessDmarTable.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1404B90A0 (RtlIsProcessorFeaturePresent.c)
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     HalpUnmapVirtualAddress @ 0x140503890 (HalpUnmapVirtualAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14059A750 (HalRegisterPermanentAddressUsage.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     DmrGetNextDrhdDeviceScope @ 0x1405B259C (DmrGetNextDrhdDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x1405B2930 (DmrValidateDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x1405B2A28 (DmrEnumerateRmrrDomains.c)
 *     DmrFreeRmrrTree @ 0x1405B2B84 (DmrFreeRmrrTree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExtEnvRegisterIommu @ 0x140CB6E30 (ExtEnvRegisterIommu.c)
 */

__int64 __fastcall HalpIvtProcessDrhdEntry(__int64 a1, __int64 a2)
{
  BOOL v2; // r13d
  int v5; // r14d
  __int64 v6; // rcx
  unsigned int *v7; // r12
  LARGE_INTEGER v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned int v12; // r11d
  int v13; // esi
  unsigned __int64 v14; // rax
  _BYTE *NextDrhdDeviceScope; // rax
  __int64 (__fastcall *v16)(__int64, __int64, char); // r8
  int v17; // r11d
  char v19; // dl
  _DWORD *v20; // rdx
  int v21; // eax
  unsigned int v22; // r12d
  unsigned int v23; // r13d
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  size_t v26; // rdi
  __int16 v27; // ax
  __int64 v28; // rcx
  unsigned int **v29; // rbx
  int Memory; // eax
  __int64 v31; // r8
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  _BYTE v37[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v39; // [rsp+38h] [rbp-C8h]
  unsigned int v40; // [rsp+3Ch] [rbp-C4h]
  int v41; // [rsp+40h] [rbp-C0h]
  unsigned int *v42; // [rsp+48h] [rbp-B8h] BYREF
  size_t Size; // [rsp+50h] [rbp-B0h]
  _QWORD *v44; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v46[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+80h] [rbp-80h]
  int v49; // [rsp+84h] [rbp-7Ch]
  _QWORD *v50; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall **v51)(); // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  int v54; // [rsp+C8h] [rbp-38h]
  unsigned int v55; // [rsp+CCh] [rbp-34h]
  __int64 (__fastcall *v56)(); // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall *v57)(__int64, __int64, int, char); // [rsp+E8h] [rbp-18h]
  void (__fastcall *v58)(__int64, __int64, __int64, char); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v59)(__int64, __int64, __int64, unsigned int, int, int); // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v60)(_QWORD *, __int64, __int64, unsigned int, _BYTE *); // [rsp+100h] [rbp+0h]
  void (__fastcall *v61)(__int64, int, __int64, __int64, _QWORD *, unsigned int, __int64); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v62)(__int64, unsigned __int16, char); // [rsp+110h] [rbp+10h]
  unsigned __int64 (__fastcall *v63)(__int64, unsigned int, __int16, unsigned __int16, int); // [rsp+118h] [rbp+18h]
  __int64 (__fastcall *v64)(_QWORD *, int *, _QWORD *, _WORD *, unsigned __int64 *, __int64 *); // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v65)(); // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v66)(); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v67)(); // [rsp+138h] [rbp+38h]
  char (__fastcall *v68)(__int64); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v69)(); // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v70)(); // [rsp+150h] [rbp+50h]
  __int64 (__fastcall *v71)(__int64, unsigned __int16, char); // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v72)(_QWORD *, __int64, unsigned int); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v73)(); // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v74)(__int64, __int64, char); // [rsp+188h] [rbp+88h]
  _QWORD v75[28]; // [rsp+190h] [rbp+90h] BYREF
  char v77; // [rsp+288h] [rbp+188h]
  char v78; // [rsp+298h] [rbp+198h] BYREF

  v45 = 0LL;
  memset_0(v75, 0, 0x98uLL);
  memset_0(&v56, 0, 0xB0uLL);
  LOBYTE(v2) = 0;
  v77 = 0;
  v5 = 0;
  v40 = v2;
  v44 = 0LL;
  v42 = 0LL;
  v78 = 0;
  v37[0] = 0;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)v5;
  if ( (int)HalSocRequestApi(16LL, 0LL, 2, 16LL, &v45) >= 0 )
    guard_dispatch_icall_no_overrides(&v78, v37);
  v5 = ExtEnvAllocateMemory(v6, 0x18u, &v42);
  if ( v5 < 0 )
    goto LABEL_77;
  v7 = v42;
  v5 = DmrEnumerateRmrrDomains(a1, a2 + 4, v42);
  if ( v5 < 0 )
    goto LABEL_77;
  memset_0(v46, 0, 0x68uLL);
  v46[1] = 104;
  v8 = *(LARGE_INTEGER *)(a2 + 8);
  v46[0] = 1;
  *(_QWORD *)&v45 = HalMapIoSpace(v8, 0x220uLL, MmNonCached);
  if ( !(_QWORD)v45 )
  {
    v5 = -1073741670;
LABEL_77:
    v34 = (unsigned __int64)v42;
    if ( v42 )
    {
      DmrFreeRmrrTree(v42);
      ExtEnvFreeMemory(v35, v34);
    }
    return (unsigned int)v5;
  }
  v5 = HalRegisterPermanentAddressUsage(v8, 0x220u);
  if ( v5 >= 0 )
  {
    LODWORD(Size) = *(unsigned __int16 *)(a2 + 2) - 16;
    v48 = Size + 472;
    v50 = v75;
    v51 = &v56;
    v75[0] = IvtConfigureSettings;
    v75[1] = IvtInitializeIommu;
    v75[2] = IvtAllocateDomain;
    v75[3] = IvtFreeDomain;
    v75[4] = IvtCreateDevice;
    v75[5] = IvtDeleteDevice;
    v69 = IvtCheckForReservedRegion;
    v56 = IvtFindDevice;
    v73 = IvtEnumerateRmrrDevices;
    v9 = *(_QWORD *)(v45 + 8);
    v53 = *(unsigned __int16 *)(a2 + 6);
    v10 = v9 & 0xFFFFFFFFFFFFEEFFuLL;
    v52 = 2;
    v11 = *(_QWORD *)(v45 + 16);
    v47 = 0LL;
    _BitScanReverse(&v12, BYTE1(v10) & 0x1F);
    v13 = 4;
    v49 = 4;
    v39 = v12;
    v14 = 1LL << (((unsigned __int8)(v11 >> 35) & 0x1Fu) + 1);
    if ( v14 > 0x100000 )
      LODWORD(v14) = 0x100000;
    v54 = v14;
    if ( (*(_BYTE *)(a1 + 37) & 3) == 1 && (v11 & 0x18) == 24 )
    {
      v75[15] = IvtUpdateRemappingTableEntry;
      v13 = 68;
      v49 = 68;
      v75[16] = IvtInvalidateRemappingTableEntry;
      v75[17] = IvtUpdateRemappingDestination;
    }
    if ( (v11 & 0x2480000000000LL) == 0x2480000000000LL && (v13 & 0x100) != 0 )
    {
      v2 = RtlIsProcessorFeaturePresent(0x3Du) != 0;
      v40 = v2;
    }
    NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, 0LL);
    if ( v2 )
    {
      if ( (v11 & 0x1000000000000LL) != 0 )
      {
        v13 |= 0x800u;
        v49 = v13;
      }
      v19 = 0;
      v77 = 0;
    }
    else
    {
      if ( !NextDrhdDeviceScope
        || *NextDrhdDeviceScope != 1
        || NextDrhdDeviceScope[1] != 8
        || NextDrhdDeviceScope[5]
        || NextDrhdDeviceScope[6] != 2
        || NextDrhdDeviceScope[7]
        || *(_WORD *)(a2 + 6)
        || (v10 & 0x3F0000) >= 0x2F0000 )
      {
        goto LABEL_35;
      }
      if ( !HalpDeviceBlockUnblockPushLock.ApcState.KernelApcPending )
      {
        v13 &= ~0x100u;
        v49 = v13;
      }
      if ( v17 ? (v10 & 0x800000000LL) != 0 : (v10 & 0x400000000LL) != 0 )
      {
        v19 = 1;
        v77 = 1;
      }
      else
      {
LABEL_35:
        v19 = 0;
      }
      if ( (v11 & 1) != 0 )
      {
        v13 |= 0x800u;
        v49 = v13;
      }
    }
    if ( v2 )
    {
      if ( (v11 & 0x800004000000LL) == 0x800004000000LL )
      {
        if ( (v10 & 0x1000000000000000LL) != 0 )
          v13 |= 0x10000080u;
        else
          v13 |= 0x8000080u;
        v49 = v13;
        v58 = IvtSetDevicePasidTable;
        v59 = IvtGrowPasidTable;
        v60 = IvtSetPasidAddressSpace;
        v70 = IvtMarkHiberRegions;
        v57 = IvtSetDeviceSvmCapabilities;
        v61 = IvtFlushTb;
      }
      v16 = IvtConfigureAts;
      if ( (v11 & 0x1850224000004LL) == 0x1850224000004LL )
      {
        v13 |= 0x20u;
        v49 = v13;
        if ( (v11 & 0x80000000) != 0 )
        {
          v13 |= 0x10000u;
          v49 = v13;
        }
        v61 = IvtFlushTb;
        v57 = IvtSetDeviceSvmCapabilities;
        v58 = IvtSetDevicePasidTable;
        v59 = IvtGrowPasidTable;
        v60 = IvtSetPasidAddressSpace;
        v70 = IvtMarkHiberRegions;
        v63 = IvtDismissPageFault;
        v64 = IvtGetPageFault;
        v71 = IvtDrainSvmPageRequests;
        v72 = IvtCancelPageRequests;
        v74 = IvtConfigureAts;
        v62 = IvtFlushDeviceTbOnly;
      }
      if ( (v11 & 4) != 0 )
      {
        v13 |= 0x1000u;
        v74 = IvtConfigureAts;
        v49 = v13;
        v61 = IvtFlushTb;
        v62 = IvtFlushDeviceTbOnly;
      }
    }
    v38 = 0;
    v20 = (_DWORD *)((unsigned __int64)&v38 & -(__int64)(v19 != 0));
    v21 = 1 << (2 * (v10 & 7) + 4);
    if ( v20 )
      *v20 = --v21;
    v22 = *v7;
    v41 = v21 - 1;
    v23 = v21 - 1 - v22;
    v55 = v23;
    if ( (v13 & 0x120) != 0 || (v13 & 0x80u) != 0 )
    {
      v13 |= 0x12u;
      v66 = IvtEnableInterrupt;
      v67 = IvtDisableInterrupt;
      v68 = IvtHandleInterrupt;
      v65 = IvtSetMessageInterruptRouting;
      v49 = v13;
    }
    if ( (int)DmrValidateDeviceScope(a1, a2, v16, 0LL) < 0 && (v13 & 0x20) != 0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
    v5 = ExtEnvRegisterIommu(v46, v24, &v44);
    if ( v5 >= 0 )
    {
      v25 = v44;
      *v44 = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v25 + 63) = *(unsigned __int16 *)(a2 + 6);
      v25[27] = v10;
      v25[28] = v11;
      v25[35] = v25 + 59;
      v26 = (unsigned int)Size;
      *((_DWORD *)v25 + 64) = Size;
      *((_BYTE *)v25 + 268) = *(_BYTE *)(a2 + 4) & 1;
      *((_DWORD *)v25 + 65) = v41;
      *((_DWORD *)v25 + 66) = v38;
      *((_DWORD *)v25 + 62) = v39;
      v25[26] = 0LL;
      v25[30] = v25 + 29;
      v25[29] = v25 + 29;
      v25[8] = v25 + 7;
      v25[7] = v25 + 7;
      v25[10] = v25 + 9;
      v25[9] = v25 + 9;
      v25[12] = v25 + 11;
      v25[11] = v25 + 11;
      v25[49] = IvtIommuFaultLogDeferredRoutine;
      *((_DWORD *)v25 + 92) = 275;
      v25[50] = v25;
      v25[53] = 0LL;
      v25[48] = 0LL;
      v25[56] = IvtIommuFaultLogWorkerRoutine;
      v27 = v49;
      v25[57] = v25;
      v25[54] = 0LL;
      if ( (v27 & 0x100) != 0 )
        *((_BYTE *)v25 + 318) = 1;
      if ( (v27 & 0x80u) != 0 )
        *((_BYTE *)v25 + 360) = 1;
      v28 = v40;
      *((_BYTE *)v25 + 320) = v40;
      if ( (v27 & 0x20) != 0 )
        *((_BYTE *)v25 + 316) = 1;
      if ( (v27 & 0x1000) != 0 )
        *((_BYTE *)v25 + 317) = 1;
      if ( v77 )
        *((_BYTE *)v25 + 319) = 1;
      v29 = (unsigned int **)(v25 + 44);
      *((_DWORD *)v25 + 68) = v25[28] & 1;
      v25[43] = v42;
      Memory = ExtEnvAllocateMemory(v28, 16 * v22 + 8, v25 + 44);
      v31 = 0LL;
      v5 = Memory;
      if ( Memory >= 0 )
      {
        v32 = 0;
        for ( **v29 = v22; v32 < v22; (*v29)[v31 - 2] = v33 )
        {
          v33 = v32 + v23;
          ++v32;
          v31 += 4LL;
        }
        memmove((void *)v25[35], (const void *)(a2 + 16), v26);
      }
    }
  }
  HalpUnmapVirtualAddress(v45, 1LL, 0);
  if ( v5 < 0 )
    goto LABEL_77;
  return (unsigned int)v5;
}
