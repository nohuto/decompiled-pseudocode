/*
 * XREFs of FlushTemporaryResources @ 0x1400AF4C4
 * Callers:
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAX_N0@Z @ 0x14011B020 (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAX_N0@Z.c)
 * Callees:
 *     ReleaseTemporaryResourcesForAllocation @ 0x1400AFF9C (ReleaseTemporaryResourcesForAllocation.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400E4CD8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall FlushTemporaryResources(__int64 a1, unsigned __int8 a2, char a3)
{
  VIDMM_GLOBAL *v6; // rsi
  _QWORD **v7; // r14
  _QWORD *v8; // rbx
  struct VIDMM_GLOBAL_ALLOC **v9; // r12
  struct VIDMM_GLOBAL_ALLOC *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rcx

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
    WdLogGlobalForLineNumber = 1817;
  }
  v6 = *(VIDMM_GLOBAL **)(a1 + 56);
  if ( a3 || (dword_14008A65C & 1) == 0 && (*((_DWORD *)v6 + 1746) & 0x100000) == 0 )
  {
    if ( a2 )
      VIDMM_GLOBAL::FlushPagingBufferInternal(v6, *(unsigned __int16 *)(a1 + 72), 0, 0LL, 0LL, 0, 0);
    v7 = (_QWORD **)(a1 + 1808);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      v9 = (struct VIDMM_GLOBAL_ALLOC **)v8[8];
      v10 = *v9;
      if ( VIDMM_GLOBAL::IsPagingOperationPending(v6, *v9, 0) )
      {
        if ( !a2 )
          return;
        VIDMM_GLOBAL::WaitForAllPagingEngines(v6, v10);
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v10;
        WdLogGlobalForLineNumber = 1888;
      }
      v12 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v13 = (_QWORD *)v8[1], (_QWORD *)*v13 != v8) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *v8 = 0LL;
      v8[1] = 0LL;
      ReleaseTemporaryResourcesForAllocation(a1, v9, v8);
    }
  }
}
