/*
 * XREFs of ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF9E0
 * Callers:
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF140 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400FF530 (-PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PurgeAllocation(VIDMM_GLOBAL *a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r15
  char v5; // bl
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  char v12; // [rsp+20h] [rbp-38h]

  v4 = a4;
  v5 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
    WdLogGlobalForLineNumber = 18124;
  }
  v8 = *(_QWORD *)a2;
  result = *((_QWORD *)a1 + 5040);
  v10 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
  v11 = *(_QWORD *)(result + 8 * v10);
  if ( !a2[19] )
  {
    result = *(unsigned int *)(v8 + 56);
    if ( (result & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v10);
        WdLogGlobalForLineNumber = 18140;
      }
      if ( (v5 & 2) != 0 || (v5 & 4) != 0 || (v5 & 0x20) != 0 )
        LOBYTE(a4) = 1;
      else
        a4 = 0LL;
      LOBYTE(a3) = v5 & 1;
      v12 = 0;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, char, _QWORD))(*(_QWORD *)v11 + 240LL))(
        v11,
        v8,
        a3,
        a4,
        v12,
        0LL);
      *v4 += *(_QWORD *)(v8 + 16);
      VIDMM_GLOBAL::FlushPagingBufferInternal(a1, (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F, 0, 0LL, 0LL, 0, 0);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 216LL))(v11, v8);
    }
  }
  return result;
}
