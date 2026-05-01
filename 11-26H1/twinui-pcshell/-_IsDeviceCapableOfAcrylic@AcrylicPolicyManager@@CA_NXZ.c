/*
 * XREFs of ?_IsDeviceCapableOfAcrylic@AcrylicPolicyManager@@CA_NXZ @ 0x18010A650
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180108AB0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ @ 0x1802DAE80 (-OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

char AcrylicPolicyManager::_IsDeviceCapableOfAcrylic(void)
{
  char v0; // bl
  _DWORD v2[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v3; // [rsp+28h] [rbp-48h]
  int v4; // [rsp+30h] [rbp-40h]
  _OWORD v5[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v6; // [rsp+58h] [rbp-18h]

  v3 = 1LL;
  v6 = 0LL;
  v2[0] = 37120;
  v2[1] = 37120;
  v0 = 0;
  v4 = 0;
  memset(v5, 0, sizeof(v5));
  if ( (int)NtDCompositionGetFrameStatistics(v5, v2) >= 0 && HIDWORD(v3) )
    return (_DWORD)v3 == 0;
  return v0;
}
