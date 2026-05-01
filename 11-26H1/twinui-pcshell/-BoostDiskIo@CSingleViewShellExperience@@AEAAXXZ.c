/*
 * XREFs of ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180066BE0
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800207AC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x180066C24 (-BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x18001E888 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 */

void __fastcall CSingleViewShellExperience::BoostDiskIo(CSingleViewShellExperience *this)
{
  int v1; // edx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 40);
  if ( (v1 & 2) != 0 )
  {
    v2 = CSingleViewShellExperience::SetImportanceValues((__int64)this, v1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4EB,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v2);
  }
}
