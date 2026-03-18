/*
 * XREFs of InitializeGpuVaState @ 0x1400B3BBC
 * Callers:
 *     ?VidMmInitializePhysicalAdapter@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400B48B0 (-VidMmInitializePhysicalAdapter@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1400470E0 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004E2F0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004E570 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?VidMmIsDedicatedCpuHostApertureSegmentIndex@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@I@Z @ 0x14004F768 (-VidMmIsDedicatedCpuHostApertureSegmentIndex@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@I@Z.c)
 *     ?VidMmIsDedicatedMemoryCpuVisibleSegmentIndex@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@I@Z @ 0x14004F77C (-VidMmIsDedicatedMemoryCpuVisibleSegmentIndex@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x14005B03C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     IsPageTableSegmentAperture @ 0x1400B443C (IsPageTableSegmentAperture.c)
 *     ValidateGpuMmuCaps @ 0x1400B4474 (ValidateGpuMmuCaps.c)
 */

__int64 __fastcall InitializeGpuVaState(struct VIDMM_PHYSICAL_ADAPTER *a1)
{
  _DWORD *v1; // r15
  __int64 v3; // r14
  int v4; // eax
  char v6; // cl
  char v7; // dl
  char v8; // dl
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r11d
  int v12; // r8d
  int v13; // r9d
  int v14; // r10d
  int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  int v19; // r8d
  int v20; // r9d
  int v21; // r10d
  int v22; // r11d
  __int16 v23; // r11
  __int16 v24; // r9
  __int16 v25; // r8
  __int16 v26; // r10
  int v27; // ecx
  unsigned __int8 v28; // cf
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // r12
  int v32; // ecx
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // r13d
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // r11d
  __int64 v40; // rdi
  __int64 v41; // r10
  __int64 v42; // rdx
  unsigned int v43; // r8d
  __int64 v44; // rax
  unsigned int v45; // eax
  const struct VIDMM_PHYSICAL_ADAPTER *v46; // rcx
  const struct VIDMM_PHYSICAL_ADAPTER *v47; // rcx
  const struct VIDMM_PHYSICAL_ADAPTER *v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // eax
  ULONG RootPageTableSize; // ebx
  ULONG *v52; // r15
  __int64 v53; // rcx
  ULONG v54; // eax
  ADAPTER_RENDER *v55; // rcx
  unsigned int v56; // r14d
  __int16 v57; // dx
  char v58; // r11
  int v59; // edi
  const struct VIDMM_PHYSICAL_ADAPTER *v60; // rcx
  unsigned __int16 *v61; // r10
  const struct VIDMM_PHYSICAL_ADAPTER *v62; // rcx
  PVOID MappingAddress; // rax
  __int64 v64; // rcx
  PMDL Mdl; // rax
  struct _DXGKARG_GETROOTPAGETABLESIZE v66; // [rsp+80h] [rbp+8h] BYREF

  *((_BYTE *)a1 + 557) |= 4u;
  v1 = (_DWORD *)*((_QWORD *)a1 + 70);
  v3 = *((_QWORD *)a1 + 7);
  v4 = v1[2];
  if ( v4 )
    *(_DWORD *)(v3 + 41056) = v4;
  if ( (*((_BYTE *)a1 + 556) & 4) != 0 )
  {
    if ( !(unsigned __int8)ValidateGpuMmuCaps(a1, v1) )
    {
      WdLogSingleEntry1(3LL, *((unsigned __int16 *)a1 + 36));
      WdLogGlobalForLineNumber = 345;
      return 3221225485LL;
    }
    v6 = *((_BYTE *)a1 + 558) & 0xDF | (v1[3] != 0 ? 0x20 : 0);
    v7 = ~(4 * *((_BYTE *)a1 + 44));
    *((_BYTE *)a1 + 558) = v6;
    v8 = v6 & 0xF7 | ~((8 * ((*v1 & 0x2000) == 0)) & v7) & 8;
    *((_BYTE *)a1 + 558) = v8;
    if ( (v8 & 8) != 0 && *(char *)v1 < 0 )
    {
      WdLogSingleEntry0(1LL);
      v10 = 355;
LABEL_9:
      WdLogGlobalForLineNumber = v10;
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
      return 3221225485LL;
    }
    if ( (v8 & 8) != 0 )
    {
      if ( v1[3] )
      {
        WdLogSingleEntry0(1LL);
        v10 = 362;
        goto LABEL_9;
      }
      *((_BYTE *)a1 + 558) = v8 | 0x20;
    }
    *((_BYTE *)a1 + 556) = *((_BYTE *)a1 + 556) & 0x7F | (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL)
                                                                               + 3032LL)
                                                                   + 352LL * *((unsigned __int16 *)a1 + 36)
                                                                   + 48) << 7);
    *((_DWORD *)a1 + 37) = (v1[9] + 4095) & 0xFFFFF000;
    v11 = v1[7];
    *((_DWORD *)a1 + 38) = v11;
    v12 = v1[12];
    *((_DWORD *)a1 + 42) = v12;
    v13 = v1[8];
    *((_DWORD *)a1 + 40) = v13;
    v14 = v1[13];
    *((_DWORD *)a1 + 44) = v14;
    v15 = v1[6];
    *((_DWORD *)a1 + 48) = v15;
    *((_DWORD *)a1 + 51) = (unsigned int)(1 << v15) >> 4;
    *((_DWORD *)a1 + 50) = 1 << v15;
    *((_DWORD *)a1 + 49) = (1 << v15) - 1;
    *((_DWORD *)a1 + 136) = v1[1];
    *((_DWORD *)a1 + 39) = v11;
    *((_DWORD *)a1 + 43) = v12;
    *((_DWORD *)a1 + 41) = v13;
    *((_DWORD *)a1 + 45) = v14;
    if ( (unsigned __int8)IsPageTableSegmentAperture(a1, v11) )
      *((_DWORD *)a1 + 39) = 0;
    if ( (unsigned __int8)IsPageTableSegmentAperture(a1, v16) )
      *((_DWORD *)a1 + 43) = 0;
    if ( (unsigned __int8)IsPageTableSegmentAperture(a1, v17) )
      *((_DWORD *)a1 + 41) = 0;
    if ( (unsigned __int8)IsPageTableSegmentAperture(a1, v18) )
    {
      *((_DWORD *)a1 + 45) = 0;
      v21 = 0;
    }
    if ( v22 )
      v23 = v22 - 1;
    else
      v23 = *((_WORD *)a1 + 72);
    *((_WORD *)a1 + 92) = v23;
    if ( v20 )
      v24 = v20 - 1;
    else
      v24 = *((_WORD *)a1 + 72);
    *((_WORD *)a1 + 93) = v24;
    if ( v19 )
      v25 = v19 - 1;
    else
      v25 = *((_WORD *)a1 + 72);
    *((_WORD *)a1 + 94) = v25;
    if ( v21 )
      v26 = v21 - 1;
    else
      v26 = *((_WORD *)a1 + 72);
    v27 = *((_DWORD *)a1 + 21);
    v28 = _bittest(&v27, (unsigned __int8)v23);
    *((_WORD *)a1 + 95) = v26;
    if ( (v28
       || _bittest(&v27, (unsigned __int8)v25)
       || _bittest(&v27, *((_DWORD *)a1 + 41))
       || _bittest(&v27, *((_DWORD *)a1 + 45)))
      && !*((_DWORD *)a1 + 136) )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(v3 + 24) + 444LL);
      if ( (v29 & 0x200) != 0 || (v29 & 8) != 0 || byte_14008A660 )
      {
        *((_BYTE *)a1 + 559) |= 1u;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 454;
        v66.PhysicalAdapterIndex = 0;
        v66.NumberOfPte = Feature_EnableNonCriticalAsserts__private_featureState;
        if ( (Feature_EnableNonCriticalAsserts__private_featureState & 0x10) == 0 )
        {
          v66.NumberOfPte = Feature_EnableNonCriticalAsserts__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor,
            *(_QWORD *)&v66,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v66.NumberOfPte,
            3,
            (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor);
        }
        if ( !*((_DWORD *)a1 + 136) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
    }
    v30 = v1[4] - 1;
    *((_DWORD *)a1 + 137) = v30;
    *((_QWORD *)a1 + 29) = 0LL;
    v31 = *((unsigned int *)a1 + 48);
    *((_DWORD *)a1 + 53) = v31;
    v32 = *((_DWORD *)a1 + 50);
    *((_QWORD *)a1 + 30) = 0LL;
    *((_DWORD *)a1 + 52) = v32;
    *((_QWORD *)a1 + 31) = 1LL;
    v33 = (unsigned int)(v32 - 1);
    *((_QWORD *)a1 + 28) = v33;
    *((_DWORD *)a1 + 54) = *((_DWORD *)a1 + 37);
    if ( v30 == 1 )
    {
      v34 = *(_DWORD *)(v3 + 41056) - v31;
      *((_QWORD *)a1 + 36) = v33;
      *((_DWORD *)a1 + 65) = v34;
      *((_QWORD *)a1 + 35) = v31;
      *((_QWORD *)a1 + 37) = 1LL << v31;
      *((_QWORD *)a1 + 34) = ~v33;
      *((_DWORD *)a1 + 64) = 0;
      *((_DWORD *)a1 + 66) = 0;
    }
    else
    {
      v35 = 1;
      if ( v30 )
      {
        do
        {
          v36 = v35;
          v37 = v35 - 1 + 5LL;
          v38 = 48LL * (v35++ - 1);
          v39 = v1[5 * v36 + 6];
          v40 = 6 * v36;
          LODWORD(v31) = v39 + v31;
          *((_DWORD *)a1 + 2 * v40 + 53) = v39;
          v41 = *(_QWORD *)((char *)a1 + v38 + 232) + *(unsigned int *)((char *)a1 + v38 + 212);
          *((_QWORD *)a1 + v40 + 29) = v41;
          v42 = *(_QWORD *)((char *)a1 + v38 + 224) | *((_QWORD *)a1 + 6 * v37);
          *((_QWORD *)a1 + 6 * v36 + 30) = v42;
          *((_QWORD *)a1 + v40 + 28) = ~v42 & ((1LL << v31) - 1);
          *((_DWORD *)a1 + 2 * v40 + 52) = 1LL << v39;
          LODWORD(v42) = v1[5 * v36 + 9];
          *((_QWORD *)a1 + v40 + 31) = 1LL << v41;
          *((_DWORD *)a1 + 2 * v40 + 54) = (v42 + 4095) & 0xFFFFF000;
        }
        while ( v35 <= *((_DWORD *)a1 + 137) );
      }
    }
    v43 = 0;
    do
    {
      v44 = v43++;
      *((_DWORD *)a1 + 12 * v44 + 55) = v1[5 * v44 + 10];
    }
    while ( v43 <= *((_DWORD *)a1 + 137) );
    if ( (**((_DWORD **)a1 + 70) & 0x40) != 0 )
      *(_BYTE *)(v3 + 41064) |= 1u;
  }
  v45 = *((_DWORD *)a1 + 48);
  if ( v45 > *(_DWORD *)(v3 + 41060) )
    *(_DWORD *)(v3 + 41060) = v45;
  if ( *((_DWORD *)a1 + 137) == 1 )
  {
    *(_BYTE *)(v3 + 41064) |= 0x80u;
    if ( !*((_DWORD *)a1 + 136)
      && (VidMmIsDedicatedCpuHostApertureSegmentIndex(a1, *((unsigned __int16 *)a1 + 93))
       || VidMmIsDedicatedCpuHostApertureSegmentIndex(v46, *((unsigned __int16 *)a1 + 95))
       || VidMmIsDedicatedCpuHostApertureSegmentIndex(v47, *((unsigned __int16 *)a1 + 92))
       || VidMmIsDedicatedCpuHostApertureSegmentIndex(v48, *((unsigned __int16 *)a1 + 94))) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 557;
      DxgkLogInternalTriageEvent(v49, 0x40000LL);
      return 3221225659LL;
    }
  }
  v50 = v1[4];
  if ( v50 )
  {
    RootPageTableSize = v1[9];
    if ( v50 <= 2 )
    {
      v55 = *(ADAPTER_RENDER **)(v3 + 16);
      v66.NumberOfPte = 1 << *((_DWORD *)a1 + 65);
      v66.PhysicalAdapterIndex = *((unsigned __int16 *)a1 + 36);
      if ( RootPageTableSize <= (unsigned int)ADAPTER_RENDER::DdiGetRootPageTableSize(v55, &v66) )
        RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v3 + 16), &v66);
    }
    else
    {
      v52 = v1 + 14;
      v53 = v50 - 1;
      do
      {
        v54 = *v52;
        v52 += 5;
        if ( RootPageTableSize > v54 )
          v54 = RootPageTableSize;
        RootPageTableSize = v54;
        --v53;
      }
      while ( v53 );
    }
    v56 = *((unsigned __int16 *)a1 + 93);
    v57 = *((_WORD *)a1 + 93);
    *((_DWORD *)a1 + 430) = RootPageTableSize;
    if ( VidMmIsDedicatedMemoryCpuVisibleSegmentIndex(a1, v57)
      || VidMmIsDedicatedMemoryCpuVisibleSegmentIndex(a1, *((_WORD *)a1 + 95)) )
    {
      v58 = 1;
    }
    v59 = *((_DWORD *)a1 + 136);
    if ( !v59
      && (VidMmIsDedicatedMemoryCpuVisibleSegmentIndex(a1, *((_WORD *)a1 + 92))
       || VidMmIsDedicatedMemoryCpuVisibleSegmentIndex(a1, *((_WORD *)a1 + 94))) )
    {
      v58 = 1;
    }
    if ( (*((_BYTE *)a1 + 556) & 2) != 0 )
    {
      if ( VidMmIsDedicatedCpuHostApertureSegmentIndex(a1, v56)
        || VidMmIsDedicatedCpuHostApertureSegmentIndex(v60, *v61) )
      {
        v58 = 1;
      }
      if ( !v59
        && (VidMmIsDedicatedCpuHostApertureSegmentIndex(a1, *((unsigned __int16 *)a1 + 92))
         || VidMmIsDedicatedCpuHostApertureSegmentIndex(v62, *((unsigned __int16 *)a1 + 94))) )
      {
        goto LABEL_88;
      }
    }
    if ( v58 )
    {
LABEL_88:
      MappingAddress = MmAllocateMappingAddress(RootPageTableSize, 0x6D4D6956u);
      *((_QWORD *)a1 + 213) = MappingAddress;
      if ( !MappingAddress )
      {
        WdLogSingleEntry2(1LL, a1, RootPageTableSize);
        WdLogGlobalForLineNumber = 636;
LABEL_90:
        DxgkLogInternalTriageEvent(v64, 0x40000LL);
        return 3221225495LL;
      }
      Mdl = IoAllocateMdl(0LL, RootPageTableSize, 0, 0, 0LL);
      *((_QWORD *)a1 + 214) = Mdl;
      if ( !Mdl )
      {
        WdLogSingleEntry2(1LL, a1, RootPageTableSize);
        WdLogGlobalForLineNumber = 643;
        goto LABEL_90;
      }
      Mdl->MdlFlags |= 0x802u;
    }
  }
  return 0LL;
}
