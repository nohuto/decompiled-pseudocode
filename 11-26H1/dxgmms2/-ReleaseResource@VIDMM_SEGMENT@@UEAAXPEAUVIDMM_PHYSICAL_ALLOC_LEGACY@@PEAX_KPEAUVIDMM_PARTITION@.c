/*
 * XREFs of ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400FB790
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400F90C8 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400FBA98 (-DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400FBCD4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReleaseResource(
        VIDMM_SEGMENT *this,
        __int64 **a2,
        void *a3,
        unsigned __int64 a4,
        struct VIDMM_PARTITION *a5)
{
  VIDMM_SEGMENT *v8; // rdi
  _QWORD *v9; // rax
  __int64 *v10; // rbx
  BOOL v11; // r9d
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-48h]

  v8 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
    WdLogGlobalForLineNumber = 1835;
  }
  v10 = 0LL;
  if ( a2 )
  {
    v10 = *a2;
    if ( *a2 )
    {
      if ( *((_DWORD *)v10 + 18) != 1 )
      {
        v14 = *v10;
        VIDMM_SEGMENT::DecrementBytesCommitted(v8, *(struct VIDMM_PARTITION **)v10[41], *(_QWORD *)(*v10 + 16));
        --*((_DWORD *)v8 + 88);
        if ( *((_DWORD *)v8 + 27) != 1 )
        {
          this = (VIDMM_SEGMENT *)v10[42];
          if ( !this || _InterlockedExchangeAdd((volatile signed __int32 *)this + 11, 0xFFFFFFFF) == 1 )
          {
            this = *(VIDMM_SEGMENT **)v10[41];
            if ( (unsigned __int64)_InterlockedExchangeAdd64(
                                     (volatile signed __int64 *)this + 7,
                                     -*(_QWORD *)(v14 + 16)) < *(_QWORD *)(v14 + 16) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1861;
              HIDWORD(v19) = 0;
              DxgkLogInternalTriageEvent(v15, 0x40000LL);
            }
          }
        }
      }
    }
  }
  if ( a3 )
  {
    if ( (*((_DWORD *)v8 + 16) & 0x1000) == 0 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v8 + 32), a3);
    --*((_DWORD *)v8 + 89);
    if ( v10 && (*((_DWORD *)v10 + 7) & 1) == 0 )
      goto LABEL_10;
    if ( g_IsInternalReleaseOrDbg )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
      v17 = (_QWORD *)((char *)v8 + 448);
      v16[3] = a4;
      v16[4] = *((_QWORD *)v8 + 56);
      v16[5] = v10;
      WdLogGlobalForLineNumber = 1897;
    }
    else
    {
      v17 = (_QWORD *)((char *)v8 + 448);
    }
    *v17 -= a4;
    if ( v10 )
      *((_DWORD *)v10 + 7) &= ~1u;
    *((_BYTE *)v8 + 456) = 0;
    if ( v10 )
LABEL_10:
      v11 = (*((_DWORD *)v10 + 6) >> 3) & 1;
    else
      LOBYTE(v11) = 0;
    VIDMM_SEGMENT::DecrementBytesResident(v8, a5, a4, v11);
    if ( (byte_14008A201 & 1) != 0 )
    {
      LODWORD(v19) = (unsigned __int16)(*((_WORD *)v8 + 35) + 1);
      McTemplateK0pqx_EtwWriteTransfer(
        (unsigned __int16)(*((_WORD *)v8 + 35) + 1),
        &TotalBytesResidentInSegment,
        v12,
        *(_QWORD *)(*((_QWORD *)v8 + 1) + 24LL),
        v19,
        *((_QWORD *)v8 + 12));
    }
    if ( *((_DWORD *)v8 + 27) != 1 )
    {
      v13 = v10[42];
      if ( (!v13 || _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 40), 0xFFFFFFFF) == 1)
        && _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v10[41] + 64LL), -(__int64)a4) < a4 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1930;
        DxgkLogInternalTriageEvent(v18, 0x40000LL);
      }
      *(_QWORD *)(*((_QWORD *)v8 + 1) + 40304LL) -= a4;
    }
  }
  else
  {
    *((_DWORD *)v10 + 7) &= ~1u;
  }
}
