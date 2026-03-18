/*
 * XREFs of ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x140248090
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCInputManager@@QEAAPEAXI@Z @ 0x1401C4CF8 (--_GCInputManager@@QEAAPEAXI@Z.c)
 */

void CInputManager::DestroySessionGlobal(void)
{
  __int64 v0; // rdx
  char **UserInputMgrSessionState; // rbx
  __int64 v2; // r8
  __int64 v3; // r9

  UserInputMgrSessionState = (char **)W32GetUserInputMgrSessionState();
  if ( *UserInputMgrSessionState )
  {
    CInputManager::`scalar deleting destructor'(*UserInputMgrSessionState, v0, v2, v3);
    *UserInputMgrSessionState = 0LL;
  }
}
