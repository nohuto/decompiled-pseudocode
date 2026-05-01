/*
 * XREFs of ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180014114
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180019CBC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18001D600 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 * Callees:
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180014320 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::ShowView(__int64 a1, char a2)
{
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v9; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = a1;
  v4 = a2 & 2;
  if ( (a2 & 2) == 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v5 < 0 )
      goto LABEL_17;
  }
  *(_DWORD *)(a1 + 40) = 2;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 344LL))(*(_QWORD *)(a1 + 24), 4LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A,
        (unsigned int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v6,
        v10);
    }
    else
    {
      *(_DWORD *)(a1 + 76) = 4;
      v7 = 0;
    }
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x80,
        (unsigned int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v7,
        v10);
      goto LABEL_8;
    }
  }
  v7 = 0;
LABEL_8:
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x393,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7,
      v10);
  if ( (a2 & 1) == 0
    && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80)) < 0
    && (a2 & 4) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x399,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9,
        v10);
    goto LABEL_15;
  }
  if ( v4 )
  {
LABEL_14:
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), a1);
LABEL_15:
    CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1);
    return 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88), a1);
    goto LABEL_14;
  }
LABEL_17:
  CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1);
  return (unsigned int)v5;
}
