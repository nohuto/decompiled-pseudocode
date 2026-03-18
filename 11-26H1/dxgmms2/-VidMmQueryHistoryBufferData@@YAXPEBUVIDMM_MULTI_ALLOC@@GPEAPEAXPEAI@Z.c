/*
 * XREFs of ?VidMmQueryHistoryBufferData@@YAXPEBUVIDMM_MULTI_ALLOC@@GPEAPEAXPEAI@Z @ 0x1400B81F0
 * Callers:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x140037824 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VidMmQueryHistoryBufferData(
        const struct VIDMM_MULTI_ALLOC *a1,
        __int16 a2,
        void **a3,
        unsigned int *a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  PVOID v8; // rax
  __int64 v9; // rcx

  v6 = **(_QWORD ***)a1;
  *a3 = 0LL;
  *a4 = 0;
  if ( ((*(_DWORD *)(*v6 + 52LL) >> 2) & 0x3F) == a2 )
  {
    v7 = v6[7];
    if ( v7 )
    {
      if ( (*(_BYTE *)(v7 + 10) & 5) != 0 )
        v8 = *(PVOID *)(v7 + 24);
      else
        v8 = MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0x40000010u);
      *a3 = v8;
      *a4 = *(_DWORD *)(*v6 + 16LL);
    }
    else
    {
      WdLogSingleEntry1(1LL, v6);
      WdLogGlobalForLineNumber = 62;
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
    }
  }
}
