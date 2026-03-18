/*
 * XREFs of _CmValidateDeviceName @ 0x14095AE80
 * Callers:
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x140725150 (PiCMGenerateDeviceInstance.c)
 *     _CmEnumSubkeyCallback @ 0x14080B630 (_CmEnumSubkeyCallback.c)
 *     _PnpDispatchDevice @ 0x1408CB4B0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceInterfaceName @ 0x14095A988 (_CmGetDeviceInterfaceName.c)
 *     PiCMRegisterDeviceInterface @ 0x14095DC04 (PiCMRegisterDeviceInterface.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140A7C4B4 (PiCMGetDeviceDepth.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 *     PiCMSetDeviceProblem @ 0x140ABD29C (PiCMSetDeviceProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, _WORD *a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx
  _WORD *i; // rax
  __int16 v6; // ax

  v2 = 0;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = 200LL;
  for ( i = a2; *i; ++i )
  {
    if ( !--v4 )
      return 3221225523LL;
  }
  while ( 1 )
  {
    v6 = *a2;
    if ( !*a2 )
      break;
    if ( (unsigned __int16)(v6 - 33) > 0x5Eu || v6 == 44 )
      return 3221225523LL;
    if ( v6 == 92 )
    {
      if ( !v2 )
        return 3221225523LL;
      v2 = 0;
      ++v3;
      ++a2;
    }
    else
    {
      ++v2;
      ++a2;
    }
  }
  if ( !v2 || v3 != 3 )
    return 3221225523LL;
  return 0LL;
}
