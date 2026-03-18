/*
 * XREFs of ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180071750
 * Callers:
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180071544 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18025F064 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x1801D71F4 (-ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CBatchCommand::ApplyRenderState(CBatchCommand *this, struct IDrawListStateSink *a2)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(struct IDrawListStateSink *, __int64); // rax
  __int64 v6; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *(_DWORD *)this )
  {
    case 1:
LABEL_2:
      v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      v5 = *(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 8LL);
      if ( *((_BYTE *)this + 92) )
      {
        v5(a2, 24LL);
        LOBYTE(v6) = 2;
      }
      else
      {
        v5(a2, *((unsigned int *)this + 21));
        v6 = *(unsigned __int8 *)(v4 + 80);
      }
      (*(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v6);
      return 1;
    case 2:
      (**(void (__fastcall ***)(struct IDrawListStateSink *, _QWORD))a2)(a2, *((_QWORD *)this + 1));
      return 0;
    case 3:
      if ( *((_DWORD *)this + 4) != 24 )
        (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 8LL))(a2);
      if ( *((_BYTE *)this + 20) != 2 )
        (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 24LL))(a2);
      (*(void (__fastcall **)(struct IDrawListStateSink *, CBatchCommand *))(*(_QWORD *)a2 + 16LL))(a2, this);
      return 1;
    case 4:
      if ( **((_DWORD **)this + 12) )
        goto LABEL_2;
      return 0;
    case 5:
      return CRenderingBatchCommand::ApplyRenderState(this, a2);
    default:
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
}
