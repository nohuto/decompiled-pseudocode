/*
 * XREFs of ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1PEAU2@@Z @ 0x140103CF0
 * Callers:
 *     AcquireResidentSystemAddressInCpuHostAperture @ 0x1400B10FC (AcquireResidentSystemAddressInCpuHostAperture.c)
 *     ?AddReservedRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAPEAXPEAPEAU_MDL@@_K3@Z @ 0x1400BC208 (-AddReservedRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAPEAXPEA.c)
 *     MapInCpuHostAperture @ 0x140103194 (MapInCpuHostAperture.c)
 *     ?GetAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAPEAX_KI@Z @ 0x1401036CC (-GetAddressForPageTableInCpuHostAperture@VIDMM_MEMORY_SEGMENT@@QEAAPEAX_KI@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012AEC0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
PMDL __fastcall VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
        VIDMM_CPU_HOST_APERTURE *this,
        const struct VIDMM_CPU_HOST_APERTURE_RANGE *a2,
        unsigned __int16 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  unsigned int v5; // ebx
  PMDL Mdl; // r11
  unsigned __int64 v9; // r9
  int v11; // r12d
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  struct _MDL *v14; // r8
  __int64 v15; // r9
  int v16; // r14d
  unsigned int v17; // ebp
  int v18; // edx
  unsigned int v19; // r15d
  unsigned int v20; // r14d
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r10
  CSHORT *p_Size; // r8
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // r10
  unsigned int v33; // r15d
  __int64 v34; // rbp

  v5 = 0;
  Mdl = a5;
  v9 = a4 >> 12;
  v11 = *(_DWORD *)(*((_QWORD *)this + 6) + 124LL);
  v12 = (unsigned int)v9;
  v13 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 8));
  if ( a5 || (Mdl = IoAllocateMdl(0LL, (_DWORD)v9 << 12, 0, 0, 0LL)) != 0LL )
  {
    v14 = Mdl + 1;
    Mdl->MdlFlags |= 0x802u;
    v15 = *((unsigned int *)a2 + 7);
    v16 = *((_DWORD *)a2 + 8);
    if ( v11 == 4096 )
    {
      if ( v12 > v13 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 43LL, this, v12, v13);
        WdLogGlobalForLineNumber = 213;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 556LL) & 2) != 0 )
      {
        v26 = *((_QWORD *)this + 4);
        if ( v12 )
        {
          do
          {
            ++v5;
            v14->Next = *(struct _MDL **)(v26 + 8LL * (unsigned int)v15 + 48);
            v14 = (struct _MDL *)((char *)v14 + 8);
            LODWORD(v15) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v15);
          }
          while ( v5 < v12 );
        }
      }
      else
      {
        v27 = v15;
        v28 = *((_QWORD *)this + 4) >> 12;
        v14->Next = (struct _MDL *)(v15 + v28);
        p_Size = &v14->Size;
        if ( (_DWORD)v15 != v16 )
        {
          do
          {
            v30 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v27);
            v27 = v30;
            *(_QWORD *)p_Size = v30 + v28;
            p_Size += 4;
          }
          while ( (_DWORD)v30 != v16 );
        }
      }
    }
    else
    {
      v17 = a3 >> 12;
      v18 = 16 - v17;
      v19 = 16 * v15;
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 556LL) & 2) != 0 )
      {
        v31 = *((_QWORD *)this + 4);
        v32 = v19 + v17;
        v33 = 0;
        if ( v12 )
        {
          v34 = 0LL;
          do
          {
            if ( !v18 )
            {
              v18 = 16;
              LODWORD(v15) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v15);
              v32 = (unsigned int)(16 * v15);
            }
            ++v33;
            *((_QWORD *)&v14->Next + v34) = *(_QWORD *)(v31 + 8 * v32 + 48);
            v32 = (unsigned int)(v32 + 1);
            v34 = v33;
            --v18;
          }
          while ( v33 < v12 );
        }
      }
      else
      {
        v20 = 0;
        v21 = *((_QWORD *)this + 4) >> 12;
        v22 = v21 + v19 + v17;
        if ( v12 )
        {
          v23 = 0LL;
          do
          {
            if ( !v18 )
            {
              LODWORD(v15) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v15);
              v18 = 16;
              v22 = v21 + (unsigned int)(16 * v15);
            }
            ++v20;
            *((_QWORD *)&v14->Next + v23) = v22++;
            v23 = v20;
            --v18;
          }
          while ( v20 < v12 );
        }
      }
    }
    return Mdl;
  }
  else
  {
    _InterlockedIncrement(dword_14008A7DC);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 232;
    DxgkLogInternalTriageEvent(v25, 262145LL);
    return 0LL;
  }
}
