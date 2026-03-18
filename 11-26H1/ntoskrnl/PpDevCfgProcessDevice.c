/*
 * XREFs of PpDevCfgProcessDevice @ 0x140B4491C
 * Callers:
 *     PiConfigureDevice @ 0x1407A4F30 (PiConfigureDevice.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 * Callees:
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 */

__int64 __fastcall PpDevCfgProcessDevice(__int64 a1, char *a2, char a3)
{
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice(a1, a2, a3);
  else
    return 3221225659LL;
}
