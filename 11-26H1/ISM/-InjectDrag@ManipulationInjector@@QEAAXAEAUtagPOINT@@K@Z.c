/*
 * XREFs of ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180114C00
 * Callers:
 *     ?DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD624 (-DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD734 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD810 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x1800B1F9C (-IsInContact@ManipulationInjector@@QEAA_NXZ.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x18011367C (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1801143C8 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180115314 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1801154D4 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1801158A4 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 */

void __fastcall ManipulationInjector::InjectDrag(ManipulationInjector *this, struct tagPOINT *a2, unsigned int a3)
{
  ManipulationInjector *v6; // rcx
  bool v7; // al
  struct tagPOINT v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9

  if ( *((_BYTE *)this + 13) )
    DbgPrint("Drag pt: %d,%d   DeviceId = %d\n", a2->x, a2->y, a3);
  if ( ManipulationInjector::IsInContact(this) )
  {
    if ( *((_DWORD *)this + 22) == 64 )
    {
      v7 = ManipulationInjector::IsInContactForDeviceId(v6, a3);
      v8 = *a2;
      if ( v7 )
        ManipulationInjector::UpdateContact(this, v8, 0, a3);
      else
        ManipulationInjector::AddContact((struct tagPOINT *)this, v8, 0, (const char *)a3);
      ManipulationInjector::InjectAndScrub(this, v9, v10, v11);
    }
  }
  else
  {
    ManipulationInjector::StartManipulation(v6, 64LL, *a2, a3);
  }
}
