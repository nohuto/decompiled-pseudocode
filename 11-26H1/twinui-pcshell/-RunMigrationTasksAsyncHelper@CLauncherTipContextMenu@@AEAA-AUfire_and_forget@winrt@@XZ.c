/*
 * XREFs of ?RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1800AB284
 * Callers:
 *     ?RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ @ 0x1800AB250 (-RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ.c)
 * Callees:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x18027B660 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper(__int64 a1, _BYTE *a2)
{
  _QWORD *v5; // [rsp+40h] [rbp+8h]

  v5 = operator new(0x20uLL);
  v5[3] = a1;
  *v5 = CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 16) = 0;
  CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1(v5);
  return a2;
}
