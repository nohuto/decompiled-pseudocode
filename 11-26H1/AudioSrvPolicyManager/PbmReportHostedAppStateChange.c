/*
 * XREFs of PbmReportHostedAppStateChange @ 0x18001B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000C800 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001BA30 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 */

__int64 __fastcall PbmReportHostedAppStateChange(void *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10[5]; // [rsp+34h] [rbp-14h] BYREF

  v10[0] = 0;
  v9 = 0;
  if ( !a5 )
    return 2147942487LL;
  result = RpcClientProcessSessionId(a1, v10, &v9);
  if ( !(_DWORD)result )
    return PickerHostContextManager::OnHostedAppStateChanged(a2, a3, v9, a4, a5);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
