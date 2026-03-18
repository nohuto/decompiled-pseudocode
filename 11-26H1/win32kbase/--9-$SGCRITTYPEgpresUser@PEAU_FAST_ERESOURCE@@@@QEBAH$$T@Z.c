/*
 * XREFs of ??9?$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z @ 0x140180588
 * Callers:
 *     DrvNotifySessionStateChange @ 0x1401804C0 (DrvNotifySessionStateChange.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SGCRITTYPEgpresUser<_FAST_ERESOURCE *>::operator!=(int a1, int a2, int a3)
{
  return *(_QWORD *)W32GetUserSessionState(a1, a2, a3) != 0LL;
}
