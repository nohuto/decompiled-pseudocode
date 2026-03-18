/*
 * XREFs of CheckGrantedAccess @ 0x1401768E8
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     NtUserGetCaretBlinkTime @ 0x140176700 (NtUserGetCaretBlinkTime.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x140176804 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     EditionAreAllAccessGranted @ 0x1401768D0 (EditionAreAllAccessGranted.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x140203DD0 (-_SwapMouseButton@@YAHH@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x1402759AC (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5);
  return 0LL;
}
