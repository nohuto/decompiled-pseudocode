/*
 * XREFs of ??B?$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ @ 0x1401F8C1C
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A2E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F9930 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGACCESSIBILITYgbMKMouseMode<unsigned char>::operator bool(__int64 a1, __int64 a2)
{
  return *(_BYTE *)(W32GetUserSessionState(a1, a2) + 20887) != 0;
}
