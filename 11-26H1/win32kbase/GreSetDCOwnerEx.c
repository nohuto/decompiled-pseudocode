/*
 * XREFs of GreSetDCOwnerEx @ 0x140081F10
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x140081BD0 (CreateCacheDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1401948E0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 * Callees:
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 */

__int64 __fastcall GreSetDCOwnerEx(struct HOBJ__ *a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return GrepSetDCOwnerEx(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), a1, a2, a3, a4);
}
