/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E4500
 * Callers:
 *     VidMmRestoreFromPurge @ 0x140042A40 (VidMmRestoreFromPurge.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E4450 (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400E49FC (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGIN.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this)
{
  bool v1; // zf
  __int64 i; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int inited; // eax
  _DWORD v9[24]; // [rsp+50h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 10022) == 0;
  *((_BYTE *)this + 7040) = 0;
  if ( v1 )
  {
    VIDMM_GLOBAL::MapAllPagingBuffers((struct VIDMM_DMA_POOL **)this);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1738); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * i);
      if ( (*(_BYTE *)(v4 + 557) & 4) != 0 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0);
        if ( inited < 0 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          v6 = WdLogSingleEntry5(0LL, 270LL, 23LL, inited, this, (unsigned int)i);
          WdLogGlobalForLineNumber = 213;
          goto LABEL_12;
        }
        *(_BYTE *)(v4 + 557) &= ~4u;
      }
    }
    memset(&v9[2], 0, 0x50uLL);
    v5 = *((_QWORD *)this + 5065);
    v9[1] = -1;
    v9[0] = 101;
    v6 = VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
           this,
           (struct _VIDMM_SYSTEM_COMMAND *)v9,
           **(struct VIDMM_PAGING_QUEUE ***)(v5 + 72),
           *(struct _VIDSCH_SYNC_OBJECT **)(32LL * ((*(_DWORD *)(**(_QWORD **)(v5 + 72) + 112LL) >> 5) & 0x1F)
                                          + *(_QWORD *)(v5 + 72)
                                          + 8),
           1);
    if ( v6 < 0 )
    {
LABEL_12:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 23LL, v6, this, 0LL);
      WdLogGlobalForLineNumber = 213;
      JUMPOUT(0x1400E46BBLL);
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9370;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
  }
}
