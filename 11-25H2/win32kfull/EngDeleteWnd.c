/*
 * XREFs of EngDeleteWnd @ 0x140302820
 * Callers:
 *     <none>
 * Callees:
 *     UserAssociateHwnd @ 0x140287DC0 (UserAssociateHwnd.c)
 *     GreDeleteWnd @ 0x140302960 (GreDeleteWnd.c)
 */

void __stdcall EngDeleteWnd(WNDOBJ *pwo)
{
  __int64 v2; // rcx

  if ( (unsigned int)UserIsUserCritSecIn(pwo) )
  {
    v2 = *(_QWORD *)&pwo[3].coClient.rclBounds.top;
    if ( v2 )
      UserAssociateHwnd(v2, 0LL);
    GreDeleteWnd((struct EWNDOBJ *)pwo);
  }
}
