/*
 * XREFs of AcquireGpuResources @ 0x1400D2F84
 * Callers:
 *     PageInAllocation_0 @ 0x1400D2924 (PageInAllocation_0.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?VidMmiIsDemotedSegmentForThisAllocation@@YA_NPEBUVIDMM_SEGMENT_BASE@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E220 (-VidMmiIsDemotedSegmentForThisAllocation@@YA_NPEBUVIDMM_SEGMENT_BASE@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ValidateSegmentForAcquisitionOfResource @ 0x1400D32C8 (ValidateSegmentForAcquisitionOfResource.c)
 *     AcquireGPUResourcesFromPreferredSegmentSet @ 0x140114670 (AcquireGPUResourcesFromPreferredSegmentSet.c)
 */

__int64 __fastcall AcquireGpuResources(__int64 a1, __int64 a2, int a3, char a4, int a5, __int64 a6)
{
  const struct VIDMM_GLOBAL_ALLOC *v6; // r15
  int v7; // eax
  int v11; // ebp
  const struct VIDMM_GLOBAL_ALLOC *v12; // r12
  __int64 v13; // r14
  int v14; // ecx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rdx
  _DWORD *v20; // r10
  char v21; // al
  int v22; // eax
  bool v23; // cl
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // r10
  unsigned __int64 v28; // r11
  __int16 v29; // ax
  _QWORD *v30; // rax
  __int64 v31; // [rsp+20h] [rbp-48h]
  const struct VIDMM_GLOBAL_ALLOC *v32; // [rsp+78h] [rbp+10h]

  v6 = *(const struct VIDMM_GLOBAL_ALLOC **)a2;
  v7 = *(_DWORD *)(a2 + 44);
  v32 = *(const struct VIDMM_GLOBAL_ALLOC **)a2;
  if ( !v7 )
    goto LABEL_51;
  if ( a4 && (v7 & 0x7DF) != 0 )
  {
    v11 = AcquireGPUResourcesFromPreferredSegmentSet(a1, a2, a3, a4, 1);
    goto LABEL_11;
  }
  v11 = AcquireGPUResourcesFromPreferredSegmentSet(a1, a2, a3, a4, 4);
  if ( v11 < 0 )
  {
LABEL_51:
    v11 = -1071775488;
    v12 = *(const struct VIDMM_GLOBAL_ALLOC **)a2;
    LOWORD(v13) = 0;
    if ( *(_DWORD *)(a1 + 136) )
    {
      v14 = 0;
      v15 = a6;
      while ( 1 )
      {
        if ( v15 == -1 || (a5 ? (v29 = a5 - 1) : (v29 = *(_WORD *)(a1 + 144)), (_WORD)v13 == v29) )
        {
          v11 = ValidateSegmentForAcquisitionOfResource(a1, a2, v14, a3, 0);
          if ( v11 >= 0 )
            break;
        }
LABEL_9:
        LOWORD(v13) = v13 + 1;
        v14 = (unsigned __int16)v13;
        if ( (unsigned int)(unsigned __int16)v13 >= *(_DWORD *)(a1 + 136) )
          goto LABEL_10;
      }
      v19 = *(_QWORD *)(a1 + 1752);
      v20 = *(_DWORD **)(v19 + 8LL * (unsigned __int16)v13);
      v21 = *(_BYTE *)(a1 + 556);
      if ( ((v21 & 0x40) != 0 || (v21 & 8) != 0)
        && (v20[16] & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 6984LL) & 0x400000) == 0
        && (**((_DWORD **)v12 + 46) & 0x8000) == 0 )
      {
        v13 = *(unsigned __int16 *)(a1 + 144);
        v20 = *(_DWORD **)(v19 + 8 * v13);
      }
      else if ( (_WORD)v13 == *(_WORD *)(a1 + 144) && (**((_DWORD **)v12 + 46) & 0x8000) != 0 )
      {
        v11 = -1071775488;
LABEL_27:
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = (unsigned __int16)v13;
          v15 = a6;
          WdLogGlobalForLineNumber = 2595;
        }
        goto LABEL_9;
      }
      v23 = ((a3 - 3) & 0xFFFFFFFA) == 0
         && a3 != 8
         && ((v22 = **((_DWORD **)v12 + 46), (v22 & 0x20000000) == 0) || v22 >= 0)
         && (v22 & 0x80000) == 0;
      LOBYTE(v17) = 1;
      LOBYTE(v31) = v23;
      v11 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, _QWORD, _DWORD, int, __int64))(*(_QWORD *)v20 + 16LL))(
              v20,
              a2,
              v17,
              0LL,
              v31,
              a3,
              v15);
      if ( v11 >= 0 )
      {
LABEL_10:
        v6 = v32;
        goto LABEL_11;
      }
      goto LABEL_27;
    }
  }
LABEL_11:
  if ( (*((_DWORD *)v6 + 6) & 0x200000) != 0 && v11 >= 0 )
  {
    if ( VidMmiIsDemotedSegmentForThisAllocation(
           (const struct VIDMM_SEGMENT_BASE *)((*(_QWORD *)(a2 + 128) + 8LL) & -(__int64)(*(_QWORD *)(a2 + 128) != 0LL)),
           v6) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v26 + 7680), 1u);
      _InterlockedAdd64((volatile signed __int64 *)(v26 + 7688), v28);
    }
    else
    {
      v27 = 1;
      _InterlockedAdd((volatile signed __int32 *)(v26 + 7664), 1u);
      _InterlockedAdd64((volatile signed __int64 *)(v26 + 7672), v28);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 56) + 45148LL);
    }
    if ( (byte_14008A201 & 1) != 0 )
    {
      LODWORD(v31) = v27 == 0 ? 0xC0000001 : 0;
      McTemplateK0pq_EtwWriteTransfer(v24, &EventCompleteAllocationMigration, v25, v6, v31);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v24);
      v30[3] = a2;
      v30[4] = *(_QWORD *)(a2 + 64);
      v30[5] = *(_QWORD *)(a2 + 128);
      WdLogGlobalForLineNumber = 2702;
    }
    *((_DWORD *)v6 + 6) &= 0xFFCFFFFF;
  }
  return (unsigned int)v11;
}
