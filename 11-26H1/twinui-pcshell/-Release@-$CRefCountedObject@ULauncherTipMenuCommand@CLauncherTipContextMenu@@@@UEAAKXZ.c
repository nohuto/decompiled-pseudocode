/*
 * XREFs of ?Release@?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@UEAAKXZ @ 0x1801F07C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1LauncherTipMenuCommand@CLauncherTipContextMenu@@QEAA@XZ @ 0x1801F080C (--1LauncherTipMenuCommand@CLauncherTipContextMenu@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 30);
  if ( !v2 && a1 )
  {
    CLauncherTipContextMenu::LauncherTipMenuCommand::~LauncherTipMenuCommand((CLauncherTipContextMenu::LauncherTipMenuCommand *)(a1 + 2));
    operator delete((void *)a1, (const struct std::nothrow_t *)0x80);
  }
  return v2;
}
