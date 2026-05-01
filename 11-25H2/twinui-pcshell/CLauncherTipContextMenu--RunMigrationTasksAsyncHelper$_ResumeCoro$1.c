/*
 * XREFs of CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x180283FD0
 * Callers:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_InitCoro$2 @ 0x180283F78 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_InitCoro$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18022D56C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@d.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C8390 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DC994 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v5; // rsi
  __int64 v6; // rcx
  void *v7; // r8
  CLauncherTipContextMenu *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_10;
    case 2:
      v5 = (_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 12) = 0;
      if ( SHRegGetDWORD(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"WinXMigrationLevel",
             (unsigned int *)(a1 + 12)) )
      {
        *v5 = 0;
      }
      if ( *v5 )
        goto LABEL_10;
      *(_WORD *)(a1 + 8) = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(v6, (void (*)(void *, void *))a1, v7);
      break;
    case 4:
      if ( !*(_DWORD *)(a1 + 12) )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::GetImpl'::`2'::impl,
          1u,
          a3,
          a4);
        SHRegSetDWORD(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
          L"WinXMigrationLevel",
          1u);
        v9 = CLauncherTipContextMenu::CleanupObsoleteLinks(v8);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1CE,
            (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
            (const char *)(unsigned int)v9);
      }
      SHRegSetDWORD(
        HKEY_CURRENT_USER,
        L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
        L"WinXMigrationLevel",
        1u);
LABEL_10:
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
      break;
    default:
      __debugbreak();
      break;
  }
}
