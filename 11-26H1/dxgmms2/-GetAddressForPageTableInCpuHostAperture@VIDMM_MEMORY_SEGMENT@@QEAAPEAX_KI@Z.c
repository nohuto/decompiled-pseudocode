/*
 * XREFs of ?GetAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAPEAX_KI@Z @ 0x1401036CC
 * Callers:
 *     AcquireResidentSystemAddress_0 @ 0x1401034F8 (AcquireResidentSystemAddress_0.c)
 * Callees:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_ALLOC@@_K2_N@Z @ 0x14010384C (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_AL.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1PEAU2@@Z @ 0x140103CF0 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1.c)
 */

// write access to const memory has been detected, the output may be wrong!
PVOID __fastcall VIDMM_MEMORY_SEGMENT::GetAddressForPageTableInCpuHostAperture(
        VIDMM_MEMORY_SEGMENT *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rbp
  VIDMM_CPU_HOST_APERTURE *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID result; // rax
  __int64 v10; // rcx

  v3 = a3;
  v5 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 64);
  v7 = *((_QWORD *)this + 66);
  if ( *(_DWORD *)(*((_QWORD *)v5 + 6) + 124LL) * *(_DWORD *)(*((_QWORD *)v5 + 5) + 4LL * *(unsigned int *)(v7 + 32)) < a3 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 85LL, a3, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x140103846LL);
  }
  if ( (int)VIDMM_CPU_HOST_APERTURE::MapRange(v5, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v7, 0LL, a2, a3, 1) < 0 )
    return 0LL;
  v8 = *((_QWORD *)this + 2);
  if ( (*(_BYTE *)(v8 + 556) & 2) == 0 )
    return (PVOID)(*((_QWORD *)this + 67) + ((unsigned int)a2 & (*((_DWORD *)this + 33) - 1)));
  v10 = *(_QWORD *)(v8 + 1712);
  *(_WORD *)(v10 + 8) = 8 * (((v3 + 4095) >> 12) + 6);
  *(_QWORD *)v10 = 0LL;
  *(_WORD *)(v10 + 10) = 0;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_DWORD *)(v10 + 44) = 0;
  *(_DWORD *)(v10 + 40) = v3;
  *(_WORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1712LL) + 10LL) |= 0x802u;
  VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
    *((VIDMM_CPU_HOST_APERTURE **)this + 64),
    *((const struct VIDMM_CPU_HOST_APERTURE_RANGE **)this + 66),
    a2,
    v3,
    *(struct _MDL **)(*((_QWORD *)this + 2) + 1712LL));
  result = MmMapLockedPagesWithReservedMapping(
             *(PVOID *)(*((_QWORD *)this + 2) + 1704LL),
             0x6D4D6956u,
             *(PMDL *)(*((_QWORD *)this + 2) + 1712LL),
             MmWriteCombined);
  *((_QWORD *)this + 67) = result;
  return result;
}
