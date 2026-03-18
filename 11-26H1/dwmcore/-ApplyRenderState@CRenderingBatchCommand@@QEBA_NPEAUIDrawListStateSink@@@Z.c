/*
 * XREFs of ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x1801D71F4
 * Callers:
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180071750 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800720B0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRenderingBatchCommand::ApplyRenderState(CRenderingBatchCommand *this, struct IDrawListStateSink *a2)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(struct IDrawListStateSink *, __int64); // rax
  __int64 v5; // rdx

  v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  v4 = *(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 8LL);
  if ( *((_BYTE *)this + 92) )
  {
    v4(a2, 24LL);
    LOBYTE(v5) = 2;
  }
  else
  {
    v4(a2, *((unsigned int *)this + 21));
    LOBYTE(v5) = *(_BYTE *)(v3 + 80);
  }
  (*(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v5);
  return 1;
}
