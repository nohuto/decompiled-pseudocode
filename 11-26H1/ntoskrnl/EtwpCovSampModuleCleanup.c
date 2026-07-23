/*
 * XREFs of EtwpCovSampModuleCleanup @ 0x140A32AA4
 * Callers:
 *     EtwpCovSampContextPruneModules @ 0x140A30B58 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x140A329F4 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampContextGetModule @ 0x140A34168 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140A32AF4 (EtwpCovSampModuleNameInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
