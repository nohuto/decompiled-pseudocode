/*
 * XREFs of IoIsDeviceEjectable @ 0x1404C8944
 * Callers:
 *     MiCreateImageMapFinish @ 0x140A624DC (MiCreateImageMapFinish.c)
 *     MiConstructLoaderEntry @ 0x140AA535C (MiConstructLoaderEntry.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 4) != 0 || InitWinPEModeType < 0;
}
