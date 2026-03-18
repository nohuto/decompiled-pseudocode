/*
 * XREFs of ?GetApplyReasonString@AdvancedWindowPos@@YAPEBGW4ApplyReason@1@@Z @ 0x1402D4418
 * Callers:
 *     ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D4AD8 (-LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall AdvancedWindowPos::GetApplyReasonString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  if ( a1 <= 7 )
  {
    if ( a1 == 7 )
      return L"StartupInfo";
    if ( !a1 )
      return L"Api";
    v1 = a1 - 1;
    if ( !v1 )
      return L"ApiOld";
    v2 = v1 - 1;
    if ( !v2 )
      return L"AsyncOld";
    v3 = v2 - 1;
    if ( !v3 )
      return L"Async";
    v4 = v3 - 1;
    if ( !v4 )
      return L"MigrateHotkey";
    v5 = v4 - 1;
    if ( !v5 )
      return L"VerticalMaximize";
    if ( v5 == 1 )
      return L"ShowWinCallout";
    return L"Unknown";
  }
  v7 = a1 - 8;
  if ( !v7 )
    return L"MoveSize";
  v8 = v7 - 1;
  if ( !v8 )
    return L"CommitMoveSize";
  v9 = v8 - 1;
  if ( !v9 )
    return L"MoveSizeHardExit";
  v10 = v9 - 1;
  if ( !v10 )
    return L"ShellSetWindowPos";
  v11 = v10 - 1;
  if ( !v11 )
    return L"ShellMigrate";
  v12 = v11 - 1;
  if ( !v12 )
    return L"ShellMigrateOwned";
  if ( v12 != 1 )
    return L"Unknown";
  return L"DesktopRecalc";
}
