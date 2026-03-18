/*
 * XREFs of NotifyAllocationReclaimed @ 0x14012430C
 * Callers:
 *     ?NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400B26B0 (-NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     NotifyAllocationReclaimedCb @ 0x1400B26D0 (NotifyAllocationReclaimedCb.c)
 * Callees:
 *     ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1401243EC (-NotifyAllocationReclaimed@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z.c)
 */

_QWORD *__fastcall NotifyAllocationReclaimed(__int64 a1, __int64 *a2, bool a3)
{
  __int64 v6; // rbx
  _QWORD *result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = *a2;
    WdLogGlobalForLineNumber = 39;
  }
  v6 = *a2;
  VIDMM_SEGMENT::NotifyAllocationReclaimed((VIDMM_SEGMENT *)a2[8], (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)a2, a3);
  *(_WORD *)(*(_QWORD *)(v6 + 368) + 10LL) = 0;
  *(_QWORD *)(*(_QWORD *)(v6 + 368) + 40LL) = 0LL;
  a2[17] = 0LL;
  *(_DWORD *)(v6 + 72) = 0;
  result = a2 + 10;
  if ( *(_DWORD *)(a2[8] + 108) == 1 )
    v8 = a1 + 1760;
  else
    v8 = a1 + 1776;
  v9 = *(_QWORD **)(v8 + 8);
  if ( *v9 != v8 )
    __fastfail(3u);
  *result = v8;
  a2[11] = (__int64)v9;
  *v9 = result;
  *(_QWORD *)(v8 + 8) = result;
  return result;
}
