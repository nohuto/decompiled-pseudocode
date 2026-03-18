/*
 * XREFs of PnpGetLogString @ 0x1404F94D8
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140AD1378 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AD25CC (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140BE1A04;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140BE1A04;
  return result;
}
