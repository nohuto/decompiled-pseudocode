/*
 * XREFs of HalpCreateMcaMemoryErrorRecord @ 0x14044C5C8
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x14044A750 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     WheaInitializeRecordHeader @ 0x140449D50 (WheaInitializeRecordHeader.c)
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x14044C430 (HalpAddMcaToProcessorGenericSection.c)
 *     HalpAddMcaExtendedLogToMemoryErrorSection @ 0x14057CDC8 (HalpAddMcaExtendedLogToMemoryErrorSection.c)
 *     HalpAddMcaToMemoryErrorSection @ 0x14057CE44 (HalpAddMcaToMemoryErrorSection.c)
 *     HalpAddPrmAddressTranslationToMemoryExtAmdSection @ 0x140580660 (HalpAddPrmAddressTranslationToMemoryExtAmdSection.c)
 *     HalpAddPrmAddressTranslationToMemoryExtIntelSection @ 0x1405807D8 (HalpAddPrmAddressTranslationToMemoryExtIntelSection.c)
 *     HalpGetMcaVendorSpecificSections @ 0x140580C34 (HalpGetMcaVendorSpecificSections.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpCreateMcaMemoryErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // r13
  unsigned int v16; // r14d
  __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned int v19; // r14d
  __int64 v20; // rbx
  unsigned __int8 CpuVendor; // al
  int v22; // edx
  __int128 v23; // xmm6
  unsigned int v24; // r12d
  __int64 v25; // r8
  unsigned __int8 v26; // al
  __int64 v27; // r8
  unsigned int v28; // ecx
  unsigned int v30; // [rsp+70h] [rbp+8h]
  void *v31; // [rsp+70h] [rbp+8h]
  unsigned int v32; // [rsp+88h] [rbp+20h]

  v8 = 0;
  memset_0((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  v32 = v9;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_WORD *)(a3 + 10) = HalpGetMcaVendorSpecificSections() + 5;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  v10 = *(_DWORD *)(a3 + 104);
  *(_DWORD *)(a3 + 20) = a4;
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v11;
  v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(*(_DWORD *)(a2 + 12) >> 1)) & 4;
  *(_DWORD *)(a3 + 104) = v12;
  v13 = v12 | 0x20;
  v14 = v12 & 0xFFFFFFDF;
  if ( (*(_BYTE *)(a2 + 12) & 0xC0) != 0x40 )
    v14 = v13;
  v15 = a3 + v9;
  v16 = v9 + 80;
  *(_DWORD *)(a3 + 104) = v14;
  if ( v16 > a4 )
    return (unsigned int)-1073741789;
  v17 = a2 + 80;
  if ( HalpMcaExtendedLoggingSupported )
    HalpAddMcaExtendedLogToMemoryErrorSection(v17, a3 + 128, v15);
  else
    HalpAddMcaToMemoryErrorSection(v17, v15);
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v32;
  *(_DWORD *)(a3 + 132) = 80;
  *(_WORD *)(a3 + 136) = 768;
  *(GUID *)(a3 + 144) = MEMORY_ERROR_SECTION_GUID;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v16 + 192 > a4 )
    return (unsigned int)-1073741789;
  guard_dispatch_icall_no_overrides(a3 + 200, a3 + v16);
  HalpAddMcaToProcessorGenericSection(a2 + 80, (__int64 *)(a3 + v16));
  *(_DWORD *)(a3 + 200) = v16;
  v18 = *(_DWORD *)(a3 + 204) + v16;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  v30 = v18 + 2088;
  if ( v18 + 2088 > a4 )
    return (unsigned int)-1073741789;
  memmove((void *)(a3 + v18), (const void *)(a2 + 80), 0x828uLL);
  *(_DWORD *)(a3 + 276) = 2088;
  *(_DWORD *)(a3 + 272) = v18;
  *(_WORD *)(a3 + 280) = 768;
  v19 = v18 + 2127;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v30 + 39 > a4 )
    return (unsigned int)-1073741789;
  *(_OWORD *)(v30 + a3) = 0LL;
  *(_OWORD *)(v30 + a3 + 16) = 0LL;
  *(_DWORD *)(v30 + a3 + 32) = 0;
  *(_WORD *)(v30 + a3 + 36) = 0;
  *(_BYTE *)(v30 + a3 + 38) = 0;
  *(_QWORD *)(v30 + a3 + 1) |= 1uLL;
  *(_BYTE *)(v30 + a3 + 13) = -1;
  *(_DWORD *)(a3 + 344) = v30;
  *(_DWORD *)(a3 + 348) = 39;
  *(_WORD *)(a3 + 352) = 768;
  *(_DWORD *)(a3 + 392) = 3;
  *(_OWORD *)(a3 + 360) = RECOVERY_INFO_SECTION_GUID;
  v20 = a3 + 416;
  CpuVendor = HalpGetCpuVendor();
  if ( CpuVendor == 2 )
  {
    v23 = MEMORY_ERROR_EXT_SECTION_INTEL_GUID;
    v24 = 166;
  }
  else
  {
    if ( CpuVendor != 1 )
      goto LABEL_28;
    v23 = MEMORY_ERROR_EXT_SECTION_AMD_GUID;
    v24 = 133;
  }
  if ( v19 + v24 > a4 )
    return (unsigned int)-1073741789;
  v31 = (void *)(a3 + v19);
  memset_0(v31, v22, v24);
  if ( !HalpDisablePrmAddressTranslation )
  {
    if ( (*(_BYTE *)v15 & 2) != 0 )
    {
      v25 = *(_QWORD *)(v15 + 16);
      goto LABEL_22;
    }
    if ( _bittest64((const signed __int64 *)(a2 + 120), 0x3Au) )
    {
      v25 = *(_QWORD *)(a2 + 128);
LABEL_22:
      if ( v25 != -1 )
      {
        v26 = HalpGetCpuVendor();
        if ( v26 == 2 )
        {
          HalpAddPrmAddressTranslationToMemoryExtIntelSection(v27, v31);
        }
        else if ( v26 == 1 )
        {
          HalpAddPrmAddressTranslationToMemoryExtAmdSection(v27, v31);
        }
      }
    }
  }
  *(_DWORD *)(a3 + 420) = v24;
  *(_DWORD *)v20 = v19;
  v19 += v24;
  *(_WORD *)(a3 + 424) = 768;
  *(_OWORD *)(a3 + 432) = v23;
  *(_DWORD *)(a3 + 464) = *(_DWORD *)(a2 + 20);
  v20 = a3 + 488;
LABEL_28:
  v28 = *(_DWORD *)(a2 + 8);
  if ( v28 + v19 <= a4 )
  {
    memmove((void *)(a3 + v19), (const void *)a2, v28);
    *(_DWORD *)v20 = v19;
    *(_DWORD *)(v20 + 4) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(v20 + 8) = 768;
    *(GUID *)(v20 + 16) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(v20 + 48) = *(_DWORD *)(a2 + 20);
    return v8;
  }
  return (unsigned int)-1073741789;
}
