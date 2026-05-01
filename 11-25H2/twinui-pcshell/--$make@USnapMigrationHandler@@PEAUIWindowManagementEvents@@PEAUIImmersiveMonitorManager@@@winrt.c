/*
 * XREFs of ??$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@winrt@@YA?A_P$$QEAPEAUIWindowManagementEvents@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x180578EA8
 * Callers:
 *     ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180270A00 (-SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z @ 0x180592BF0 (--0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<SnapMigrationHandler,IWindowManagementEvents *,IImmersiveMonitorManager *>(
        _QWORD *a1,
        struct IWindowManagementEvents **a2,
        struct IImmersiveMonitorManager **a3)
{
  SnapMigrationHandler *v7; // [rsp+40h] [rbp+8h]

  v7 = (SnapMigrationHandler *)operator new(0x30uLL);
  SnapMigrationHandler::SnapMigrationHandler(v7, *a2, *a3);
  *(_QWORD *)v7 = &SnapMigrationHandler::`vftable';
  *a1 = (char *)v7 + 16;
  return a1;
}
