/*
 * XREFs of CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x18027B660
 * Callers:
 *     ?RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1800AB284 (-RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18021E3FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@d.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802BF8E0 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x180601530 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 */

void __fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rsi
  __int64 v5; // rcx
  void *v6; // r8
  CLauncherTipContextMenu *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_10;
    case 2:
      v4 = (_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 12) = 0;
      if ( SHRegGetDWORD(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"WinXMigrationLevel",
             (unsigned int *)(a1 + 12)) )
      {
        *v4 = 0;
      }
      if ( *v4 )
        goto LABEL_10;
      try
      {
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v5, (void (*)(void *, void *))a1, v6);
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
      }
      return;
    case 4:
      if ( !*(_DWORD *)(a1 + 12) )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::GetImpl'::`2'::impl,
          1u,
          a3);
        SHRegSetDWORD(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
          L"WinXMigrationLevel",
          1u);
        v8 = CLauncherTipContextMenu::CleanupObsoleteLinks(v7);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1CE,
            (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
            (const char *)(unsigned int)v8);
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
