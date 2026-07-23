/*
 * XREFs of HalpCreateMcaProcessorErrorRecord @ 0x14044A8B4
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x14044A750 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     WheaInitializeRecordHeader @ 0x140449D50 (WheaInitializeRecordHeader.c)
 *     HalpAddMcaToProcessorSpecificSection @ 0x14044ACCC (HalpAddMcaToProcessorSpecificSection.c)
 *     HalpAddMcaToProcessorGenericSection @ 0x14044C430 (HalpAddMcaToProcessorGenericSection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpCreateMcaProcessorErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r15d
  int v10; // eax
  __int64 v11; // r12
  unsigned int v12; // r15d
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // r15d
  __int64 v16; // r12
  unsigned int v17; // r15d
  unsigned int v18; // ecx
  unsigned int v20; // [rsp+60h] [rbp+8h]
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v21 = 0;
  memset_0((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_WORD *)(a3 + 10) = 5;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  v10 = *(_DWORD *)(a3 + 104);
  *(_DWORD *)(a3 + 20) = a4;
  v20 = v9;
  v11 = a3 + v9;
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v12 = v9 + 192;
  v13 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v13;
  *(_DWORD *)(a3 + 104) = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)(a2 + 12) >> 1)) & 4;
  if ( v12 > a4 )
    return (unsigned int)-1073741789;
  guard_dispatch_icall_no_overrides(a3 + 128, v11);
  HalpAddMcaToProcessorGenericSection(a2 + 80, v11);
  *(_DWORD *)(a3 + 140) |= 1u;
  *(_DWORD *)(a3 + 128) = v20;
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(a2 + 20);
  if ( v12 + 65 > a4 )
    return (unsigned int)-1073741789;
  HalpAddMcaToProcessorSpecificSection(a2 + 80, a3 + v12, &v21);
  v14 = v21;
  *(_DWORD *)(a3 + 200) = v12;
  v15 = v14 + v12;
  *(_DWORD *)(a3 + 204) = v14;
  *(_WORD *)(a3 + 208) = 768;
  *(GUID *)(a3 + 216) = XPF_PROCESSOR_ERROR_SECTION_GUID;
  v16 = v15 + 2088;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  if ( (unsigned int)v16 > a4 )
    return (unsigned int)-1073741789;
  memmove((void *)(a3 + v15), (const void *)(a2 + 80), 0x828uLL);
  *(_DWORD *)(a3 + 276) = 2088;
  *(_DWORD *)(a3 + 272) = v15;
  v17 = v15 + 2127;
  *(_WORD *)(a3 + 280) = 768;
  *(GUID *)(a3 + 288) = XPF_MCA_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( (int)v16 + 39 > a4 )
    return (unsigned int)-1073741789;
  *(_OWORD *)(v16 + a3) = 0LL;
  *(_OWORD *)(v16 + a3 + 16) = 0LL;
  *(_DWORD *)(v16 + a3 + 32) = 0;
  *(_WORD *)(v16 + a3 + 36) = 0;
  *(_BYTE *)(v16 + a3 + 38) = 0;
  *(_QWORD *)(v16 + a3 + 1) |= 1uLL;
  *(_BYTE *)(v16 + a3 + 13) = -1;
  *(_DWORD *)(a3 + 344) = v16;
  *(_DWORD *)(a3 + 348) = 39;
  *(_WORD *)(a3 + 352) = 768;
  *(_DWORD *)(a3 + 392) = 3;
  *(_OWORD *)(a3 + 360) = RECOVERY_INFO_SECTION_GUID;
  v18 = *(_DWORD *)(a2 + 8);
  if ( v18 + v17 > a4 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memmove((void *)(a3 + v17), (const void *)a2, v18);
    *(_DWORD *)(a3 + 416) = v17;
    *(_DWORD *)(a3 + 420) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(a3 + 424) = 768;
    *(GUID *)(a3 + 432) = WHEA_ERROR_PACKET_SECTION_GUID;
    *(_DWORD *)(a3 + 464) = *(_DWORD *)(a2 + 20);
  }
  return v8;
}
