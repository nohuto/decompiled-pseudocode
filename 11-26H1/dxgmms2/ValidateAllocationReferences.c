/*
 * XREFs of ValidateAllocationReferences @ 0x1400E5810
 * Callers:
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ValidateAllocationReferences(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 688);
  v3 = *(int *)(a1 + 692);
  if ( !v1 && (_DWORD)v3 && !*(_BYTE *)(**(_QWORD **)a1 + 41LL) )
  {
    WdLogSingleEntry1(1LL, v3);
    WdLogGlobalForLineNumber = 109;
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    VidSchMarkDeviceAsError(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), 15);
  }
}
