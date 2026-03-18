/*
 * XREFs of AcquireResidentSystemAddress_0 @ 0x1401034F8
 * Callers:
 *     ?AcquireResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAPEAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1401034E0 (-AcquireResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAPEAXPEAUVIDMM_PHYSICAL_ALLOC@@P.c)
 * Callees:
 *     AcquireResidentSystemAddressInCpuHostAperture @ 0x1400B10FC (AcquireResidentSystemAddressInCpuHostAperture.c)
 *     ?GetAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAPEAX_KI@Z @ 0x1401036CC (-GetAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAPEAX_KI@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
PVOID __fastcall AcquireResidentSystemAddress_0(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // r11
  int v6; // eax
  unsigned __int64 v8; // rdx
  VIDMM_CPU_HOST_APERTURE *v9; // rax
  __int64 v10; // r9
  unsigned int v11; // r11d
  unsigned __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a2 + 8);
  v6 = *(_DWORD *)(v3 + 64);
  if ( (v6 & 0x1000) != 0 )
    return *(PVOID *)(*(_QWORD *)a2 + 208LL);
  if ( (v6 & 0x2000) != 0 )
  {
    v8 = *((_QWORD *)a2 + 9);
    v9 = *(VIDMM_CPU_HOST_APERTURE **)(v3 + 512);
    v17 = 0LL;
    if ( *(_BYTE *)(a3 + 16) )
    {
      return VIDMM_MEMORY_SEGMENT::GetAddressForPageTableInCpuHostAperture((VIDMM_MEMORY_SEGMENT *)v3, v8, a2[4]);
    }
    else if ( (int)AcquireResidentSystemAddressInCpuHostAperture(
                     (struct VIDMM_PHYSICAL_ALLOC *)a2,
                     v8,
                     v9,
                     (struct VIDMM_CPU_HOST_APERTURE_RANGE **)(a3 + 8),
                     (struct _MDL **)a3,
                     &v17) >= 0 )
    {
      return (PVOID)v17;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    if ( (v6 & 4) == 0 )
    {
      v16 = *(_QWORD *)a2;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 73LL, a1, v16, v3);
      WdLogGlobalForLineNumber = 213;
      JUMPOUT(0x1401036C4LL);
    }
    v10 = *(_QWORD *)(v3 + 32) + *((_QWORD *)a2 + 9);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL) + 444LL) & 8) != 0 )
    {
      return (PVOID)(*(_QWORD *)(v3 + 32) + *((_QWORD *)a2 + 9));
    }
    else if ( *(_BYTE *)(a3 + 16) )
    {
      v11 = 0;
      v12 = *((_QWORD *)a2 + 2);
      v13 = (_QWORD *)(*(_QWORD *)(a1 + 1712) + 48LL);
      v14 = v10 >> 12;
      if ( (v12 & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        do
        {
          ++v11;
          *v13 = v14++;
          v12 = *((_QWORD *)a2 + 2);
          ++v13;
        }
        while ( v11 < v12 >> 12 );
      }
      v15 = *(_QWORD *)(a1 + 1712);
      *(_WORD *)(v15 + 8) = 8 * (((v12 + 4095) >> 12) + 6);
      *(_QWORD *)v15 = 0LL;
      *(_WORD *)(v15 + 10) = 0;
      *(_QWORD *)(v15 + 32) = 0LL;
      *(_DWORD *)(v15 + 44) = 0;
      *(_DWORD *)(v15 + 40) = v12;
      *(_WORD *)(*(_QWORD *)(a1 + 1712) + 10LL) |= 0x802u;
      return MmMapLockedPagesWithReservedMapping(
               *(PVOID *)(a1 + 1704),
               0x6D4D6956u,
               *(PMDL *)(a1 + 1712),
               MmWriteCombined);
    }
    else
    {
      return (PVOID)MmMapIoSpaceEx(v10, *((_QWORD *)a2 + 2), 1028LL);
    }
  }
}
