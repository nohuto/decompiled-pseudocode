/*
 * XREFs of CloseProtectedHandle @ 0x1401B60FC
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x140114C00 (xxxSetCsrssThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x14019D3D0 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1401D6EE8 (_OpenDesktop.c)
 *     _OpenThreadDesktop @ 0x14020B984 (_OpenThreadDesktop.c)
 *     xxxResolveDesktop @ 0x140244080 (xxxResolveDesktop.c)
 *     _CloseDesktop @ 0x140288754 (_CloseDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x140289210 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle, KPROCESSOR_MODE a2)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL, 0LL);
  return ObCloseHandle(Handle, a2);
}
