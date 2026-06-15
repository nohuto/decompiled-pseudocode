/*
 * XREFs of sub_14004A0B8 @ 0x14004A0B8
 * Callers:
 *     sub_140049120 @ 0x140049120 (sub_140049120.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

WORD sub_14004A0B8()
{
  WORD result; // ax
  _STARTUPINFOW StartupInfo; // [rsp+20h] [rbp-78h] BYREF

  memset(&StartupInfo, 0, sizeof(StartupInfo));
  GetStartupInfoW(&StartupInfo);
  result = 10;
  if ( (StartupInfo.dwFlags & 1) != 0 )
    return StartupInfo.wShowWindow;
  return result;
}
