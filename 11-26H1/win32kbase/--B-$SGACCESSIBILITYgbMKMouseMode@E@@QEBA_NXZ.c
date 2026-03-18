/*
 * XREFs of ??B?$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ @ 0x140149998
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x140213140 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGACCESSIBILITYgbMKMouseMode<unsigned char>::operator bool(int a1, int a2, int a3)
{
  return *(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 20919) != 0;
}
