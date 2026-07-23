/*
 * XREFs of PnpGetLogString @ 0x1404F2AE8
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AE9900 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140BE88B4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140BE88B4;
  return result;
}
