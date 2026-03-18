/*
 * XREFs of FlushTemporaryResources_0 @ 0x140114508
 * Callers:
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAX_N0@Z @ 0x1401144F0 (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAX_N0@Z.c)
 * Callees:
 *     ?VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400B37E4 (-VidMmReleaseTemporaryResourcesForLegacyAllocation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@PEAUVI.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400E4CD8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall FlushTemporaryResources_0(VIDMM_GLOBAL **a1, unsigned __int8 a2, char a3)
{
  VIDMM_GLOBAL *v6; // rsi
  struct VIDMM_PHYSICAL_ADAPTER_LEGACY *v7; // r14
  struct VIDMM_PHYSICAL_ADAPTER_LEGACY *v8; // rbx
  struct VIDMM_PHYSICAL_ALLOC_LEGACY *v9; // r13
  struct VIDMM_GLOBAL_ALLOC *v10; // r12
  __int64 v11; // rcx
  struct VIDMM_PHYSICAL_ADAPTER_LEGACY *v12; // rax
  struct VIDMM_PHYSICAL_ADAPTER_LEGACY **v13; // rcx

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
    WdLogGlobalForLineNumber = 3325;
  }
  v6 = a1[7];
  if ( a3 || (dword_14008A65C & 1) == 0 && (*((_DWORD *)v6 + 1746) & 0x100000) == 0 )
  {
    if ( a2 )
      VIDMM_GLOBAL::FlushPagingBufferInternal(v6, *((unsigned __int16 *)a1 + 36), 0, 0LL, 0LL, 0, 0);
    v7 = a1[226];
    while ( 1 )
    {
      v8 = v7;
      if ( v7 == (struct VIDMM_PHYSICAL_ADAPTER_LEGACY *)(a1 + 226) )
        break;
      v9 = (struct VIDMM_PHYSICAL_ADAPTER_LEGACY *)((char *)v7 - 152);
      v10 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v7 - 19);
      v7 = *(struct VIDMM_PHYSICAL_ADAPTER_LEGACY **)v7;
      if ( VIDMM_GLOBAL::IsPagingOperationPending(v6, v10, 0) )
      {
        if ( !a2 )
          return;
        VIDMM_GLOBAL::WaitForAllPagingEngines(v6, v10);
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v10;
        WdLogGlobalForLineNumber = 3398;
      }
      v12 = *(struct VIDMM_PHYSICAL_ADAPTER_LEGACY **)v8;
      if ( *(struct VIDMM_PHYSICAL_ADAPTER_LEGACY **)(*(_QWORD *)v8 + 8LL) != v8
        || (v13 = (struct VIDMM_PHYSICAL_ADAPTER_LEGACY **)*((_QWORD *)v8 + 1), *v13 != v8) )
      {
        __fastfail(3u);
      }
      *v13 = v12;
      *((_QWORD *)v12 + 1) = v13;
      *(_QWORD *)v8 = 0LL;
      *((_QWORD *)v8 + 1) = 0LL;
      VidMmReleaseTemporaryResourcesForLegacyAllocation(
        (struct VIDMM_PHYSICAL_ADAPTER_LEGACY *)a1,
        v9,
        *((_BYTE *)v9 + 56) & 1);
    }
  }
}
