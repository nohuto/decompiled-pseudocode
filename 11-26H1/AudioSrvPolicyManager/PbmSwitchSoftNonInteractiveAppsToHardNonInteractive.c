/*
 * XREFs of PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x1800420D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000C800 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18002A5B8 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 */

__int64 __fastcall PbmSwitchSoftNonInteractiveAppsToHardNonInteractive(void *a1)
{
  __int64 result; // rax
  CApplicationManager *v2; // rcx
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  result = 2147549183LL;
  v4 = 0;
  v3 = 0;
  if ( g_ApplicationManager )
  {
    result = RpcClientProcessSessionId(a1, &v4, &v3);
    if ( (_DWORD)result )
    {
      if ( (int)result > 0 )
        return (unsigned __int16)result | 0x80070000;
    }
    else
    {
      return CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(v2, v3);
    }
  }
  return result;
}
