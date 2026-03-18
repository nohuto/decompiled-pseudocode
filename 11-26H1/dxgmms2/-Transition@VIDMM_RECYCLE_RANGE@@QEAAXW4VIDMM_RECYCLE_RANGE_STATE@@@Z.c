/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400F439C
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAEK@Z @ 0x1400AD068 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAEK@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400F3100 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F3E34 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400F4BF0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400F68A8 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

int __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+28h] [rbp-10h]

  LODWORD(v4) = WdLogSingleEntry3(4LL, a1, *(int *)(a1 + 64), a2);
  WdLogGlobalForLineNumber = 2257;
  if ( (byte_14008A202 & 0x40) != 0 )
  {
    v14 = a2;
    v13 = *(_DWORD *)(a1 + 64);
    LODWORD(v4) = McTemplateK0pqq_EtwWriteTransfer(v5, &EventRecycleRangeTransition, v6, a1, v13, v14);
  }
  v7 = *(_QWORD *)(a1 + 72);
  v8 = *(__int64 **)(v7 + 152);
  if ( v8 )
  {
    v9 = *v8;
    v10 = 144 * v8[1];
    *(_DWORD *)(v10 + v9) = 2;
    *(_QWORD *)(v10 + v9 + 8) = a1;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v10 + v9 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v7 + 152) + 8LL);
    v11 = *(_QWORD *)(v7 + 152);
    v4 = *(_QWORD *)(v11 + 48);
    if ( *(_QWORD *)(v11 + 8) == v4 )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      v4 = *(_QWORD *)(v7 + 152);
      *(_BYTE *)(v4 + 16) = 1;
    }
  }
  *(_DWORD *)(a1 + 64) = a2;
  return v4;
}
