/*
 * XREFs of EtwpCovSampModuleCleanup @ 0x14093F994
 * Callers:
 *     EtwpCovSampContextPruneModules @ 0x14093DA40 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x14093F8E4 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampContextGetModule @ 0x140941058 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     EtwpCovSampModuleNameInfoCleanup @ 0x14093F9E4 (EtwpCovSampModuleNameInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampModuleCleanup(__int64 a1)
{
  void *v2; // rcx

  if ( *(_QWORD *)(a1 + 104) )
  {
    EtwpCovSampModuleNameInfoCleanup();
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_WORD *)(a1 + 120) = 0;
  }
  v2 = *(void **)(a1 + 48);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
  }
}
