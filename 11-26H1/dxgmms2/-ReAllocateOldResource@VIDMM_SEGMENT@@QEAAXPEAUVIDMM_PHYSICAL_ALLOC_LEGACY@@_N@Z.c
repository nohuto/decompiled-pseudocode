/*
 * XREFs of ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400F8CD0
 * Callers:
 *     CancelAllReclaimedAllocationsInList @ 0x1400F8C34 (CancelAllReclaimedAllocationsInList.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z @ 0x14009B2A0 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400F8F4C (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?IncrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400FA0D0 (-IncrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400FA154 (-IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::ReAllocateOldResource(VIDMM_SEGMENT *this, union _LARGE_INTEGER *a2)
{
  LONGLONG QuadPart; // rsi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  union _LARGE_INTEGER v9; // rdx
  VIDMM_LINEAR_POOL *v10; // rcx
  int v11; // ebp
  VIDMM_SEGMENT *v12; // rax
  VIDMM_SEGMENT *v13; // rcx
  VIDMM_SEGMENT **v14; // rdx
  VIDMM_SEGMENT **v15; // rdx
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  QuadPart = a2->QuadPart;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = QuadPart;
    WdLogGlobalForLineNumber = 2195;
  }
  VIDMM_SEGMENT::IncrementBytesResident(
    this,
    **(struct VIDMM_PARTITION ***)(QuadPart + 328),
    a2[2].QuadPart,
    (*(_DWORD *)(QuadPart + 24) & 8) != 0);
  VIDMM_SEGMENT::IncrementBytesCommitted(this, **(struct VIDMM_PARTITION ***)(QuadPart + 328), a2[2].QuadPart);
  ++*((_DWORD *)this + 88);
  ++*((_DWORD *)this + 89);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0pqx_EtwWriteTransfer(
      (unsigned __int16)(*((_WORD *)this + 35) + 1),
      &TotalBytesResidentInSegment,
      v6,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      (unsigned __int16)(*((_WORD *)this + 35) + 1),
      *((_QWORD *)this + 12));
  if ( *((_DWORD *)this + 27) != 1 )
  {
    v7 = *(_QWORD *)(QuadPart + 336);
    if ( v7 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 44)) == 1 )
        _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(QuadPart + 328) + 56LL), a2[2].QuadPart);
      if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(QuadPart + 336) + 40LL)) != 1 )
        goto LABEL_13;
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(QuadPart + 328) + 56LL), a2[2].QuadPart);
    }
    _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(QuadPart + 328) + 64LL), a2[2].QuadPart);
LABEL_13:
    *(_QWORD *)(*((_QWORD *)this + 1) + 40304LL) += a2[2].QuadPart;
  }
  v8 = *(LONGLONG *)((char *)&a2->QuadPart + ((*((_DWORD *)this + 16) & 0x20 | 0x40uLL) >> 2));
  if ( (*((_DWORD *)this + 16) & 0x1000) != 0 )
  {
    v11 = 0;
    a2[17].QuadPart = 1LL;
  }
  else
  {
    v9 = a2[9];
    v10 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 32);
    v16 = 0LL;
    v11 = VIDMM_LINEAR_POOL::AllocateAt(v10, v9, v8, (struct VIDMM_PHYSICAL_ALLOC *)a2, &v16);
    a2[17].QuadPart = (LONGLONG)v16;
  }
  v12 = (VIDMM_SEGMENT *)(QuadPart + 240);
  v13 = *(VIDMM_SEGMENT **)(QuadPart + 240);
  if ( *((_QWORD *)v13 + 1) != QuadPart + 240
    || (v14 = *(VIDMM_SEGMENT ***)(QuadPart + 248), *v14 != v12)
    || (*v14 = v13,
        *((_QWORD *)v13 + 1) = v14,
        v15 = (VIDMM_SEGMENT **)*((_QWORD *)this + 18),
        *v15 != (VIDMM_SEGMENT *)((char *)this + 136)) )
  {
LABEL_22:
    __fastfail(3u);
  }
  *(_QWORD *)v12 = (char *)this + 136;
  *(_QWORD *)(QuadPart + 248) = v15;
  *v15 = v12;
  *((_QWORD *)this + 18) = v12;
  VIDMM_SEGMENT::MarkResourcesForEviction(this, (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)a2);
  if ( v11 < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 6LL, QuadPart, v11, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_22;
  }
}
