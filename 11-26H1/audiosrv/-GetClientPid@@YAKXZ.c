/*
 * XREFs of ?GetClientPid@@YAKXZ @ 0x18011D428
 * Callers:
 *     ?GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x18011D254 (-GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Intern.c)
 *     ?HasMicrophoneAccess@@YAJPEA_N@Z @ 0x18011DA44 (-HasMicrophoneAccess@@YAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

DWORD GetClientPid(void)
{
  _DWORD RpcCallAttributes[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v2[56]; // [rsp+28h] [rbp-90h] BYREF
  int v3; // [rsp+60h] [rbp-58h]

  memset_0(v2, 0, 0x70uLL);
  RpcCallAttributes[1] = 16;
  RpcCallAttributes[0] = 3;
  if ( RpcServerInqCallAttributesW(0LL, RpcCallAttributes) )
    return GetCurrentProcessId();
  else
    return v3;
}
