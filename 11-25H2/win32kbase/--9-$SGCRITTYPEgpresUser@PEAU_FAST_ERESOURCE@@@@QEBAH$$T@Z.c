/*
 * XREFs of ??9?$SGCRITTYPEgpresUser@PEAU_FAST_ERESOURCE@@@@QEBAH$$T@Z @ 0x14019DB10
 * Callers:
 *     DrvNotifySessionStateChange @ 0x14006DAB0 (DrvNotifySessionStateChange.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140169E70 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SGCRITTYPEgpresUser<_FAST_ERESOURCE *>::operator!=(__int64 a1, __int64 a2)
{
  return *(_QWORD *)W32GetUserSessionState(a1, a2) != 0LL;
}
