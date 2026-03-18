/*
 * XREFs of IoIsDeviceEjectable @ 0x1404CEF14
 * Callers:
 *     MiCreateImageMapFinish @ 0x140A54F3C (MiCreateImageMapFinish.c)
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 4) != 0 || InitWinPEModeType < 0;
}
