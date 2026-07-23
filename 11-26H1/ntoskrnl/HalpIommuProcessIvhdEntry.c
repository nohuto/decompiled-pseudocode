/*
 * XREFs of HalpIommuProcessIvhdEntry @ 0x1405AAB6C
 * Callers:
 *     HalpIommuHsaDiscover @ 0x140CBB5B4 (HalpIommuHsaDiscover.c)
 * Callees:
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14059A750 (HalRegisterPermanentAddressUsage.c)
 *     HalpIommuProcessDeviceEntries @ 0x1405AA884 (HalpIommuProcessDeviceEntries.c)
 *     HsaProcessIvmd @ 0x1405ACDEC (HsaProcessIvmd.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExtEnvRegisterIommu @ 0x140CB6E30 (ExtEnvRegisterIommu.c)
 */

int __fastcall HalpIommuProcessIvhdEntry(__int64 a1, __int64 a2, char *a3)
{
  char v6; // di
  bool v7; // cf
  __int64 *i; // rcx
  unsigned __int64 v9; // rax
  __int16 v10; // r8
  __int16 v11; // r8
  bool v12; // r10
  unsigned __int64 v13; // r14
  __int16 v14; // r8
  __int16 v15; // bx
  int result; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rcx
  unsigned int *v24; // r13
  unsigned int **v25; // r12
  unsigned int v26; // ebx
  int v27; // r14d
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int *v37; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v39[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h]
  int v41; // [rsp+50h] [rbp-B0h]
  unsigned int v42; // [rsp+54h] [rbp-ACh]
  _QWORD *v43; // [rsp+78h] [rbp-88h]
  _QWORD *v44; // [rsp+80h] [rbp-80h]
  int v45; // [rsp+88h] [rbp-78h]
  int v46; // [rsp+8Ch] [rbp-74h]
  int v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+94h] [rbp-6Ch]
  int v49; // [rsp+98h] [rbp-68h]
  int v50; // [rsp+9Ch] [rbp-64h]
  _QWORD v51[22]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v52[26]; // [rsp+160h] [rbp+60h] BYREF
  char v53; // [rsp+248h] [rbp+148h] BYREF
  char *v54; // [rsp+250h] [rbp+150h]
  char v55; // [rsp+258h] [rbp+158h] BYREF

  v54 = a3;
  v6 = 0;
  v36 = 0LL;
  memset_0(v52, 0, 0x98uLL);
  memset_0(v51, 0, sizeof(v51));
  v7 = *(_WORD *)(a2 + 2) < 0x28u;
  v38 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  *a3 = 0;
  v55 = 0;
  v53 = 0;
  if ( v7 || *(_BYTE *)a2 != 17 && *(_BYTE *)a2 != 64 )
    return -1073741811;
  for ( i = (__int64 *)qword_140F87860; i != &qword_140F87860; i = (__int64 *)*i )
  {
    if ( i[2] == *(_QWORD *)(a2 + 8) )
      return 0;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v10 = (4 * v9) & 8 | (16 * ((v9 >> 45) & 1)) | 1;
  if ( (*(_BYTE *)(a2 + 1) & 0x10) == 0 || (v9 & 0x600000000008LL) != 0x600000000008LL )
    v10 = (4 * v9) & 8 | (16 * ((*(_QWORD *)(a2 + 24) >> 45) & 1));
  v11 = (((*(_BYTE *)(a2 + 1) & 0x10) != 0) << 6) | 4 | v10;
  v12 = (v9 & 0xC000) != 0;
  if ( (v9 & 0x20000000000LL) == 0
    || (v11 & 1) == 0
    || (v9 & 0x12) != 18
    || !v12
    || (v13 = HIDWORD(v9), (BYTE4(v9) & 0x1Fu) < 8) )
  {
    v11 &= ~4u;
    v13 = HIDWORD(v9);
  }
  v14 = v11 | 0x20;
  if ( (v9 & 0x1000000000000LL) == 0 || (v9 & 0x10) == 0 || (v14 & 1) == 0 || !v12 || (v13 & 0x1F) < 8 )
    v14 &= ~0x20u;
  v15 = v14 | 2;
  if ( (v9 & 0x84) != 0x84 )
    v15 = v14;
  if ( (v15 & 1) == 0 && (v15 & 2) == 0 )
    return 0;
  result = HsaProcessIvmd(a2, a1 + *(unsigned int *)(a1 + 4), &v53, &v37);
  if ( result >= 0 )
  {
    result = ExtEnvAllocateMemory(v17, 0x168u, &v35);
    if ( result >= 0 )
    {
      v18 = v35;
      v19 = (_QWORD *)(v35 + 224);
      *(_QWORD *)(v35 + 232) = v35 + 224;
      *v19 = v19;
      *(_BYTE *)(v18 + 16) = *(_BYTE *)(a2 + 1);
      *(_WORD *)(v18 + 18) = v15;
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v18 + 160) = *(unsigned __int16 *)(a2 + 16);
      *(_DWORD *)(v18 + 164) = *(unsigned __int8 *)(a2 + 5);
      v20 = *(_DWORD *)(v18 + 168) ^ ((unsigned __int8)*(_DWORD *)(v18 + 168) ^ (unsigned __int8)(*(unsigned __int16 *)(a2 + 4) >> 3)) & 0x1Fu;
      *(_DWORD *)(v18 + 168) = v20;
      *(_DWORD *)(v18 + 168) = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)(32 * *(_WORD *)(a2 + 4))) & 0xE0;
      *(_QWORD *)(v18 + 280) = HsaIommuEventLogDeferredRoutine;
      *(_DWORD *)(v18 + 256) = 275;
      *(_QWORD *)(v18 + 288) = v18;
      *(_QWORD *)(v18 + 312) = 0LL;
      *(_QWORD *)(v18 + 272) = 0LL;
      *(_QWORD *)(v18 + 336) = HsaIommuEventLogWorkerRoutine;
      *(_QWORD *)(v18 + 344) = v18;
      *(_QWORD *)(v18 + 320) = 0LL;
      result = ExtEnvAllocateMemory(v20, 0x2000u, &v36);
      if ( result >= 0 )
      {
        *(_QWORD *)(v18 + 192) = v36;
        *(_DWORD *)(v18 + 184) = 0x10000;
        RtlClearBits((PRTL_BITMAP)(v18 + 184), 0, 0x10000u);
        *(_QWORD *)(v18 + 152) = 0LL;
        *(_QWORD *)(v18 + 248) = v18 + 240;
        *(_QWORD *)(v18 + 240) = v18 + 240;
        result = HalpIommuProcessDeviceEntries(v18, a2, &v55);
        if ( result >= 0 )
        {
          result = HalRegisterPermanentAddressUsage(*(LARGE_INTEGER *)(v18 + 8), 0x2040u);
          if ( result >= 0 )
          {
            memset_0(v39, 0, 0x68uLL);
            v46 = *(_DWORD *)(v18 + 160);
            v21 = 2076;
            v47 = *(_DWORD *)(v18 + 164);
            v48 = *(_DWORD *)(v18 + 168);
            v43 = v52;
            v44 = v51;
            v52[0] = HsaConfigureSettings;
            v52[1] = HsaInitializeIommu;
            v39[0] = 1;
            v39[1] = 104;
            v40 = v18;
            v41 = 0;
            v45 = 1;
            v42 = 2076;
            if ( (v15 & 1) != 0 )
            {
              v52[4] = HsaCreateDevice;
              v52[5] = HsaDeleteDevice;
              v51[0] = HsaFindDevice;
              v51[5] = HsaFlushTb;
              v51[6] = HsaFlushDeviceTbOnly;
              v51[19] = HsaQueryAcpiDeviceMapping;
              v51[20] = HsaGetRidAcpiMapCount;
              if ( !v53 )
              {
                v51[17] = HsaEnumerateIvmdDevices;
                v21 = 2332;
                v51[18] = HsaProcessReservedDomains;
                v52[8] = HsaAttachDeviceDomain;
                v52[9] = HsaDetachDeviceDomain;
                if ( (v15 & 0x20) != 0 )
                  v21 = 134220188;
              }
              v21 |= 0x6000u;
              v52[10] = HsaFlushDomainTb;
              v52[11] = xHalTimerWatchdogStop;
              v52[12] = xHalTimerWatchdogStop;
              v42 = v21;
            }
            if ( (v21 & 0x80u) == 0 )
              LOBYTE(v15) = v15 & 0xDF;
            LOBYTE(v13) = v13 & 0x1F;
            v22 = 0x40000;
            v23 = (unsigned int)(v13 + 1);
            if ( (unsigned int)((1 << (v13 + 1)) - 1) < 0x40000 )
              v22 = (1 << (v13 + 1)) - 1;
            v49 = v22;
            if ( (v15 & 4) != 0 )
            {
              v21 |= 0x20022u;
              v51[9] = HsaSetMessageInterruptRouting;
              v51[7] = HsaDismissPageFault;
              v51[8] = HsaGetPageFault;
              v42 = v21;
            }
            if ( (v15 & 0x24) != 0 )
            {
              v51[1] = HsaSetDeviceSvmCapabilities;
              v51[2] = HsaSetDevicePasidTable;
              v51[3] = HsaGrowPasidTable;
              v51[4] = HsaSetPasidAddressSpace;
              v51[14] = HsaMarkHiberRegions;
            }
            if ( (v15 & 2) != 0 )
            {
              v52[15] = HsaUpdateRemappingTableEntry;
              v42 = v21 & 0xFFFFFFAF | 0x40;
              v52[16] = HsaInvalidateRemappingTableEntry;
              v52[17] = HsaUpdateRemappingDestination;
              v52[13] = HsaAllocateRemappingTableEntry;
              v52[14] = HsaFreeRemappingTableEntry;
            }
            if ( (v15 & 0x25) != 0 )
            {
              v51[10] = HsaEnableInterrupt;
              v51[11] = HsaDisableInterrupt;
              v51[12] = HsaHandleInterrupt;
            }
            v24 = v37;
            v25 = (unsigned int **)(v18 + 216);
            v26 = *v37;
            v27 = 65534 - *v37;
            v28 = 16 * *v37 + 8;
            v50 = v27;
            result = ExtEnvAllocateMemory(v23, v28, (_QWORD *)(v18 + 216));
            if ( result >= 0 )
            {
              v29 = 0LL;
              **v25 = v26;
              if ( v26 )
              {
                v30 = 0LL;
                do
                {
                  v31 = v29 + v27;
                  v29 = (unsigned int)(v29 + 1);
                  v30 += 4LL;
                  (*v25)[v30 - 2] = v31;
                }
                while ( (unsigned int)v29 < v26 );
              }
              *(_DWORD *)(v18 + 200) = 65534;
              *(_QWORD *)(v18 + 208) = v24;
              result = ExtEnvRegisterIommu(v39, v29, 0LL);
              if ( result >= 0 )
              {
                result = ExtEnvAllocateMemory(v32, 0x18u, &v38);
                if ( result >= 0 )
                {
                  v33 = v38;
                  v38[2] = *(_QWORD *)(a2 + 8);
                  v34 = (_QWORD *)qword_140F87868;
                  if ( *(__int64 **)qword_140F87868 != &qword_140F87860 )
                    __fastfail(3u);
                  *v33 = &qword_140F87860;
                  v33[1] = v34;
                  *v34 = v33;
                  qword_140F87868 = (__int64)v33;
                  if ( v53 || v55 )
                    v6 = 1;
                  *v54 = v6;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
