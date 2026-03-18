/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x140007630
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     UsbhSetHubRemoteWake @ 0x140006EC8 (UsbhSetHubRemoteWake.c)
 *     UsbhDisarmHubForWakeDetect @ 0x140007684 (UsbhDisarmHubForWakeDetect.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhDisarmHubWakeOnConnect(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  v5 = FdoExt(a1, a2, a3, a4);
  result = UsbhDisarmHubForWakeDetect(a1);
  if ( (*(_DWORD *)(v5 + 2560) & 0x80000) != 0 )
  {
    result = UsbhSetHubRemoteWake(a1, 0LL, v7, v8);
    if ( (int)result >= 0 )
      *(_DWORD *)(v5 + 2560) &= ~0x80000u;
  }
  return result;
}
