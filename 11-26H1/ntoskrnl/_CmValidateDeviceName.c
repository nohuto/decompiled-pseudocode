/*
 * XREFs of _CmValidateDeviceName @ 0x14094D660
 * Callers:
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B3B38 (PiCMGenerateDeviceInstance.c)
 *     _CmEnumSubkeyCallback @ 0x14089F170 (_CmEnumSubkeyCallback.c)
 *     PiCMGetDeviceDepth @ 0x14094D0A0 (PiCMGetDeviceDepth.c)
 *     PiCMRegisterDeviceInterface @ 0x14094D1B4 (PiCMRegisterDeviceInterface.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     _PnpDispatchDevice @ 0x140956100 (_PnpDispatchDevice.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     PiCMSetDeviceProblem @ 0x140B6FE50 (PiCMSetDeviceProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, _WORD *a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx
  _WORD *i; // rax
  __int16 v6; // cx

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
