/*
 * XREFs of ?IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@IIIII@Z @ 0x1800AC804
 * Callers:
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AD514 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800AC860 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 */

bool __fastcall ForegroundManager::IsDelegationSourceInForeground(
        ForegroundManager *this,
        struct ViewHierarchyWithWindowManager *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  char v7; // r10
  bool result; // al

  if ( a4 )
  {
    v7 = 1;
    result = a4 == a6;
    if ( a4 == a6 )
      return result;
  }
  else
  {
    v7 = 0;
    if ( a3 == a5 )
      return 1;
    result = 0;
  }
  if ( (a7 & 0x20) != 0 )
  {
    if ( v7 )
      return ForegroundManager::AreViewIdsInSameCompositeApp(this, a2, a6, a4);
    else
      return ForegroundManager::IsProcessIDInSameCompositeAppAsView(this, a2, a6, a3);
  }
  return result;
}
