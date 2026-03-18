/*
 * XREFs of ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x14023D910
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCInputManager@@QEAAPEAXI@Z @ 0x14023D8DC (--_GCInputManager@@QEAAPEAXI@Z.c)
 */

void CInputManager::DestroySessionGlobal(void)
{
  char **UserInputMgrSessionState; // rbx

  UserInputMgrSessionState = (char **)W32GetUserInputMgrSessionState();
  if ( *UserInputMgrSessionState )
  {
    CInputManager::`scalar deleting destructor'(*UserInputMgrSessionState);
    *UserInputMgrSessionState = 0LL;
  }
}
