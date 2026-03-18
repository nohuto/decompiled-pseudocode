/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400F98E0
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400F9790 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMEN.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0qpxxtqqq_EtwWriteTransfer @ 0x14003C534 (McTemplateK0qpxxtqqq_EtwWriteTransfer.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400F9384 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1400F9FF0 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 *     ?IncrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400FA0D0 (-IncrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400FA154 (-IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400FA25C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400FB3E4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned __int8 v7; // r12
  __int64 v8; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  int v15; // ebp
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  unsigned int v24; // r10d
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned int v27; // r13d
  unsigned __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+28h] [rbp-90h]
  int v33; // [rsp+30h] [rbp-88h]
  int v34; // [rsp+40h] [rbp-78h]
  unsigned __int64 v35; // [rsp+60h] [rbp-58h]
  unsigned __int64 v36; // [rsp+68h] [rbp-50h]
  unsigned __int64 v37; // [rsp+70h] [rbp-48h]
  unsigned int v38; // [rsp+C0h] [rbp+8h]
  unsigned int v39; // [rsp+C8h] [rbp+10h]

  v7 = a3;
  v8 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1);
    WdLogGlobalForLineNumber = 994;
    v13 = WdLogNewEntry5_WdTrace(v12);
    *(_QWORD *)(v13 + 24) = a1;
    *(_QWORD *)(v13 + 32) = a2;
    WdLogGlobalForLineNumber = 997;
  }
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0qpxxtqqq_EtwWriteTransfer(
      a1,
      a2,
      a3,
      (unsigned __int16)(*(_WORD *)(a1 + 70) + 1),
      v8,
      v32,
      v33,
      a4,
      v34,
      a6);
  v14 = *(_QWORD *)(((*(_DWORD *)(a1 + 64) & 0x20 | 0x40uLL) >> 2) + a2);
  v35 = v14;
  v38 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a1 + 420) == 1 && (a6 == 5 || (*(_DWORD *)(v8 + 24) & 0x20) != 0) )
  {
    v15 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)a2, a4, a5);
LABEL_11:
    if ( v15 >= 0 )
    {
LABEL_12:
      VIDMM_SEGMENT::IncrementBytesResident(
        (VIDMM_SEGMENT *)a1,
        **(struct VIDMM_PARTITION ***)(v8 + 328),
        *(_QWORD *)(a2 + 16),
        (*(_DWORD *)(v8 + 24) & 8) != 0);
      VIDMM_SEGMENT::IncrementBytesCommitted(
        (VIDMM_SEGMENT *)a1,
        **(struct VIDMM_PARTITION ***)(v8 + 328),
        *(_QWORD *)(a2 + 16));
      if ( (byte_14008A201 & 1) != 0 )
      {
        LODWORD(v31) = (unsigned __int16)(*(_WORD *)(a1 + 70) + 1);
        McTemplateK0pqx_EtwWriteTransfer(
          (unsigned __int16)(*(_WORD *)(a1 + 70) + 1),
          &TotalBytesResidentInSegment,
          v16,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v31,
          *(_QWORD *)(a1 + 96));
      }
      ++*(_DWORD *)(a1 + 352);
      ++*(_DWORD *)(a1 + 356);
      if ( *(_DWORD *)(a1 + 108) == 1 )
        goto LABEL_19;
      v18 = *(_QWORD *)(v8 + 336);
      if ( v18 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v18 + 44)) == 1 )
          _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v8 + 328) + 56LL), *(_QWORD *)(a2 + 16));
        if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 336) + 40LL)) != 1 )
          goto LABEL_18;
      }
      else
      {
        _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v8 + 328) + 56LL), *(_QWORD *)(a2 + 16));
      }
      _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v8 + 328) + 64LL), *(_QWORD *)(a2 + 16));
LABEL_18:
      v17 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v17 + 40304) += *(_QWORD *)(a2 + 16);
LABEL_19:
      *(_QWORD *)(a2 + 128) = a1;
      if ( g_IsInternalReleaseOrDbg )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v17);
        v19[3] = *(_QWORD *)(a2 + 112);
        v19[4] = *(int *)(a2 + 124);
        v17 = *(unsigned int *)(a2 + 120);
        v19[5] = v17;
        WdLogGlobalForLineNumber = 1350;
      }
LABEL_21:
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (const EVENT_DESCRIPTOR *)"D", v16, v15);
      return (unsigned int)v15;
    }
LABEL_24:
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v17) + 24) = v15;
      WdLogGlobalForLineNumber = 1355;
    }
    goto LABEL_21;
  }
  v15 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v8 + 328), v14);
  if ( v15 < 0 )
  {
    v15 = VIDMM_SEGMENT::TrimOfferLists(a1, 2u, v14, *(unsigned int *)(a2 + 32));
    if ( v15 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v17);
        WdLogGlobalForLineNumber = 1054;
      }
      goto LABEL_24;
    }
  }
  v17 = 5LL;
  if ( (*(_DWORD *)(v8 + 24) & 0x20) == 0 )
    v17 = a6;
  v39 = v17;
  if ( (*(_DWORD *)(a1 + 64) & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 120) = 0LL;
    *(_QWORD *)(a2 + 112) = 1LL;
    goto LABEL_11;
  }
  v21 = *(_QWORD *)(a1 + 40);
  v22 = 0LL;
  switch ( (_DWORD)v17 )
  {
    case 3:
      v7 = 1;
      goto LABEL_39;
    case 4:
      v29 = dword_14008A338;
      if ( *(_DWORD *)(a1 + 108) != 1 )
        v29 = dword_14008A33C;
      if ( (*(_DWORD *)(v8 + 28) & 2) == 0 )
      {
        v24 = v38;
        v30 = v21 / 0x64;
        if ( *(_BYTE *)(a1 + 457) )
        {
          v7 = 1;
          v21 = (v30 * v29 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_75;
        }
        v22 = (v30 * (100 - v29) + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_74:
        v7 = 0;
LABEL_75:
        v17 = v39;
        goto LABEL_40;
      }
      if ( a7 != -1LL )
        v21 = a7 + v14;
      v7 = 0;
      if ( a7 != -1LL )
        v22 = a7;
LABEL_39:
      v24 = v38;
LABEL_40:
      v26 = v22;
      v37 = v21;
      v36 = v22;
      v16 = v21;
      v15 = -1073741823;
      v27 = 0;
      while ( 1 )
      {
        if ( v15 >= 0 )
          goto LABEL_12;
        if ( (_DWORD)v17 == 7 && *(_DWORD *)(a1 + 420) == 1 )
        {
          v28 = *(_QWORD *)(a1 + 48);
          if ( v27 )
          {
            v21 = *(_QWORD *)(a1 + 48);
            v22 = v26;
            if ( v16 < v28 )
              v21 = v16;
          }
          else
          {
            v22 = v28 + *(_QWORD *)(a1 + 56);
            if ( v26 > v22 )
              v22 = v26;
          }
        }
        else
        {
          if ( (**(_DWORD **)(v8 + 368) & 0x20000) != 0 || *(_DWORD *)(a1 + 420) != 1 || !*(_QWORD *)(a1 + 440) )
          {
            if ( v27 )
              goto LABEL_24;
LABEL_47:
            v15 = VIDMM_LINEAR_POOL::Allocate(
                    *(VIDMM_LINEAR_POOL **)(a1 + 256),
                    v35,
                    v24,
                    v7,
                    v22,
                    v21,
                    a4,
                    a5,
                    (struct VIDMM_PHYSICAL_ALLOC *)a2,
                    (union _LARGE_INTEGER *)(a2 + 120),
                    (void **)(a2 + 112));
            if ( v15 < 0 )
            {
              v15 = VIDMM_SEGMENT::TrimOfferLists(a1, 1u, v35, *(unsigned int *)(a2 + 32));
              if ( v15 >= 0 )
                v15 = VIDMM_LINEAR_POOL::Allocate(
                        *(VIDMM_LINEAR_POOL **)(a1 + 256),
                        v35,
                        v38,
                        v7,
                        v22,
                        v21,
                        a4,
                        a5,
                        (struct VIDMM_PHYSICAL_ALLOC *)a2,
                        (union _LARGE_INTEGER *)(a2 + 120),
                        (void **)(a2 + 112));
            }
            v26 = v36;
            v16 = v37;
            goto LABEL_49;
          }
          if ( v7 )
          {
            if ( v27 )
            {
              v21 = v16;
              if ( v22 <= *(_QWORD *)(a1 + 432) )
                v22 = *(_QWORD *)(a1 + 432);
            }
            else if ( *(_QWORD *)(a1 + 424) < v21 )
            {
              v21 = *(_QWORD *)(a1 + 424);
            }
          }
          else if ( v27 )
          {
            v22 = v26;
            if ( *(_QWORD *)(a1 + 424) < v21 )
              v21 = *(_QWORD *)(a1 + 424);
          }
          else if ( v22 <= *(_QWORD *)(a1 + 432) )
          {
            v22 = *(_QWORD *)(a1 + 432);
          }
        }
        if ( v22 < v21 )
          goto LABEL_47;
LABEL_49:
        v17 = v39;
        ++v27;
        v24 = v38;
        if ( v27 >= 2 )
          goto LABEL_11;
      }
    case 7:
LABEL_38:
      v7 = 0;
      goto LABEL_39;
    case 5:
      v22 = *(_QWORD *)(a1 + 48);
      v21 = v22 + *(_QWORD *)(a1 + 56);
      goto LABEL_38;
  }
  if ( (_DWORD)v17 != 6 )
    goto LABEL_39;
  v23 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 420) != 1 )
  {
    v22 = *(_QWORD *)(a1 + 48);
    v21 = v23 + *(_QWORD *)(a1 + 56);
    goto LABEL_39;
  }
  v24 = v38;
  v25 = *(_QWORD *)(a1 + 424) - v23;
  v22 = (*(_QWORD *)(a1 + 424) - v14) & ~(*(_QWORD *)(a1 + 408) | (v38 - 1LL));
  if ( v25 >= v14 )
  {
    v21 = *(_QWORD *)(a1 + 432);
    goto LABEL_74;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v25);
    WdLogGlobalForLineNumber = 1157;
  }
  return 3221225473LL;
}
