/*
 * XREFs of ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x1802C7ED4
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800BF0C0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x1802E1AB0 (-OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     <none>
 */

bool AcrylicPolicyManager::_IsHighContrast(void)
{
  BOOL v0; // eax
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+24h] [rbp-14h]
  int v4; // [rsp+2Ch] [rbp-Ch]

  pvParam = 16;
  v3 = 0LL;
  v4 = 0;
  v0 = SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0);
  if ( v0 )
    LOBYTE(v0) = v3 & 1;
  return v0;
}
