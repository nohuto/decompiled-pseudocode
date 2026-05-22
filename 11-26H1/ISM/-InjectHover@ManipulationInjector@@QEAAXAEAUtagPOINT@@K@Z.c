/*
 * XREFs of ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180114CA0
 * Callers:
 *     ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD6A4 (-DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x1800B1F9C (-IsInContact@ManipulationInjector@@QEAA_NXZ.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1801143C8 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1801154D4 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1801158A4 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 */

void __fastcall ManipulationInjector::InjectHover(ManipulationInjector *this, struct tagPOINT *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9

  if ( *((_BYTE *)this + 14) )
  {
    if ( *((_BYTE *)this + 13) )
      DbgPrint("Hover pt: %d,%d\n", a2->x, a2->y);
    if ( ManipulationInjector::IsInContact(this) )
    {
      if ( *((_DWORD *)this + 22) != 128 )
        return;
    }
    else if ( *((_DWORD *)this + 22) != 128 )
    {
      ManipulationInjector::StartManipulation(this, 128LL, *a2, a3);
      return;
    }
    if ( *((_DWORD *)this + 178) == a3 )
    {
      ManipulationInjector::UpdateContact(this, *a2, 1, a3);
      ManipulationInjector::InjectAndScrub(this, v6, v7, v8);
    }
  }
}
