/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1401243EC
 * Callers:
 *     NotifyAllocationReclaimed @ 0x14012430C (NotifyAllocationReclaimed.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400FBA98 (-DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 */

void __fastcall VIDMM_SEGMENT::NotifyAllocationReclaimed(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        char a3)
{
  __int64 v3; // rsi
  _QWORD *v6; // r15
  __int64 v7; // r8
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v12; // rdx
  char **v13; // rcx
  char *v14; // rbx
  char **v15; // rcx
  int v16; // [rsp+20h] [rbp-48h]

  v3 = *(_QWORD *)a2;
  if ( a3 )
  {
    v6 = (_QWORD *)((char *)a2 + 16);
    VIDMM_SEGMENT::DecrementBytesResident(
      this,
      **(struct VIDMM_PARTITION ***)(v3 + 328),
      *((_QWORD *)a2 + 2),
      (*(_DWORD *)(v3 + 24) & 8) != 0);
    if ( (byte_14008A201 & 1) != 0 )
    {
      v16 = (unsigned __int16)(*((_WORD *)this + 35) + 1);
      McTemplateK0pqx_EtwWriteTransfer(
        (unsigned __int16)(*((_WORD *)this + 35) + 1),
        &TotalBytesResidentInSegment,
        v7,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v16,
        *((_QWORD *)this + 12));
      v8 = (_QWORD *)((char *)a2 + 16);
    }
    else
    {
      v8 = v6;
    }
    if ( *((_DWORD *)this + 27) != 1 )
    {
      v9 = *(_QWORD *)(v3 + 336);
      if ( (!v9 || _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 40), 0xFFFFFFFF) == 1)
        && (unsigned __int64)_InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(**(_QWORD **)(v3 + 328) + 64LL),
                               -*v6) < *v6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1964;
        DxgkLogInternalTriageEvent(v10, 0x40000LL);
      }
      *(_QWORD *)(*((_QWORD *)this + 1) + 40304LL) -= *v8;
    }
    --*((_DWORD *)this + 89);
  }
  v11 = (char *)(v3 + 240);
  v12 = *(_QWORD *)(v3 + 240);
  if ( *(_QWORD *)(v12 + 8) != v3 + 240
    || (v13 = *(char ***)(v3 + 248), *v13 != v11)
    || (*v13 = (char *)v12,
        v14 = (char *)this + 280,
        *(_QWORD *)(v12 + 8) = v13,
        v15 = (char **)*((_QWORD *)v14 + 1),
        *v15 != v14) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v11 = v14;
  *(_QWORD *)(v3 + 248) = v15;
  *v15 = v11;
  *((_QWORD *)v14 + 1) = v11;
}
