/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x14002A284
 * Callers:
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhSetHubRemoteWake @ 0x140029E28 (UsbhSetHubRemoteWake.c)
 *     UsbhDisarmHubForWakeDetect @ 0x14002A2D8 (UsbhDisarmHubForWakeDetect.c)
 */

__int64 __fastcall UsbhDisarmHubWakeOnConnect(__int64 a1)
{
  _DWORD *v2; // rbx
  __int64 result; // rax

  v2 = FdoExt(a1);
  result = UsbhDisarmHubForWakeDetect(a1);
  if ( (v2[640] & 0x80000) != 0 )
  {
    result = UsbhSetHubRemoteWake(a1, 0);
    if ( (int)result >= 0 )
      v2[640] &= ~0x80000u;
  }
  return result;
}
