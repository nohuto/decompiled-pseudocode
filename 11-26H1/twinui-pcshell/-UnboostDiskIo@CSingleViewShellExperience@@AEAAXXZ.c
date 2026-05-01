/*
 * XREFs of ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1800230FC
 * Callers:
 *     _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x18001FB18 (_lambda_a7f15287e5878abd1220aaf01e051b7a_--operator().c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180022EF0 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___ @ 0x18002316C (wil--details--ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___--_ScopeExitFn__lambda_9ae7.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x180065D70 (-UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x18001E888 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 */

void __fastcall CSingleViewShellExperience::UnboostDiskIo(
        CSingleViewShellExperience *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // edx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)this + 40);
  if ( (v5 & 2) != 0 )
  {
    v6 = CSingleViewShellExperience::SetImportanceValues((__int64)this, v5 & 0xFD);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4F4,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6,
        a5);
  }
}
