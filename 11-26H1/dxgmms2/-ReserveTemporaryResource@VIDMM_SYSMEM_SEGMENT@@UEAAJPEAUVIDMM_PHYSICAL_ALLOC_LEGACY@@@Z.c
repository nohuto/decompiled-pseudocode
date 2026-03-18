/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14011C220
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14011C2B8 (-FlushPendingCPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::ReserveTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    WdLogGlobalForLineNumber = 695;
    v5 = WdLogNewEntry5_WdTrace(v4);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = a2;
    WdLogGlobalForLineNumber = 698;
  }
  VIDMM_SEGMENT::FlushPendingCPUAccess(this, a2);
  *((_QWORD *)a2 + 25) = -1LL;
  result = 0LL;
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 27) = this;
  return result;
}
