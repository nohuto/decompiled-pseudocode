/*
 * XREFs of ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1400E4034
 * Callers:
 *     ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1400E3F9C (-SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002551C (McTemplateK0pq_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::SetOneAllocationPriority(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 *v10; // [rsp+20h] [rbp-78h]
  _QWORD v11[12]; // [rsp+30h] [rbp-68h] BYREF

  v6 = a3;
  if ( a3 >= 0xC8000000 && !SeSinglePrivilegeCheck((LUID)33LL, 1) )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 5749;
    v6 = -939524097;
  }
  memset(v11, 0, 0x58uLL);
  v7 = *(_QWORD *)a2;
  LODWORD(v11[0]) = 212;
  v11[2] = a2;
  LODWORD(v11[4]) = v6;
  VIDMM_GLOBAL::QueueDeferredCommand(
    this,
    *(struct VIDMM_PAGING_QUEUE **)(32LL * ((*(_DWORD *)(**(_QWORD **)v7 + 52LL) >> 2) & 0x3F)
                                  + *(_QWORD *)(*((_QWORD *)a2 + 1) + 72LL)),
    (struct _VIDMM_DEFERRED_COMMAND *)v11,
    0,
    0LL);
  if ( (byte_14008A201 & 1) != 0 )
  {
    LODWORD(v10) = a3;
    McTemplateK0pq_EtwWriteTransfer(v8, (const EVENT_DESCRIPTOR *)".", v9, a2, v10);
  }
}
