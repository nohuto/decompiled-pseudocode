/*
 * XREFs of UserResetPointer @ 0x1401237C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetCursorPointerInternal@@YAXXZ @ 0x140123804 (-ResetCursorPointerInternal@@YAXXZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void UserResetPointer()
{
  __int64 v0; // rcx

  if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
  {
    ResetCursorPointerInternal();
  }
  else
  {
    EnterSharedCrit(0LL, 1LL);
    ResetCursorPointerInternal();
    UserSessionSwitchLeaveCrit(v0);
  }
}
