/*
 * XREFs of _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x18020E7EC
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001BCBC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x18020E7CC (wil--details--ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___--_ScopeExitFn__lambda_a7f1.c)
 * Callees:
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x18002F338 (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_a7f15287e5878abd1220aaf01e051b7a_::operator()(
        CSingleViewShellExperience **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  CSingleViewShellExperience *v5; // rbx
  __int64 v7; // rcx
  int v8; // eax
  HSTRING v9; // rcx
  const WCHAR *StringRawBuffer; // rax
  HSTRING v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF
  const WCHAR *v18; // [rsp+60h] [rbp+18h] BYREF
  PCWSTR v19; // [rsp+68h] [rbp+20h] BYREF

  v5 = *a1;
  v17 = 1;
  if ( *((_BYTE *)v5 + 140) )
  {
    v7 = *((_QWORD *)v5 + 11);
    *((_BYTE *)v5 + 140) = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, CSingleViewShellExperience *))(*(_QWORD *)v7 + 128LL))(v7, v5);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4DB,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = (HSTRING)*((_QWORD *)v5 + 2);
  v16 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v9, 0LL);
  v11 = (HSTRING)*((_QWORD *)v5 + 1);
  v18 = StringRawBuffer;
  v19 = WindowsGetStringRawBuffer(v11, 0LL);
  SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
    &v19,
    &v18,
    &v17,
    (char *)v5 + 141,
    &v16,
    (char *)v5 + 140);
  CSingleViewShellExperience::UnboostDiskIo(*a1, v12, v13, v14, a5);
}
