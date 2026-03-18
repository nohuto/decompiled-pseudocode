/*
 * XREFs of DestroyPhysicalAllocation @ 0x140116108
 * Callers:
 *     ?DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401160F0 (-DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall DestroyPhysicalAllocation(_QWORD *a1)
{
  __int64 v2; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v2 = WdLogNewEntry5_WdTrace(a1);
    *(_QWORD *)(v2 + 24) = a1;
    *(_QWORD *)(v2 + 32) = *a1;
    WdLogGlobalForLineNumber = 975;
  }
  if ( a1 )
    operator delete(a1);
}
