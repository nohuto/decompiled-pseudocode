/*
 * XREFs of IsOleInitializePresent @ 0x1802D78C4
 * Callers:
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18018C660 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802DAB39 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOleInitializePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180899220 == 1 )
    return 1;
  if ( dword_180899220 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"68", &v1) < 0 )
    return 0;
  result = v1;
  dword_180899220 = 2 - (v1 != 0);
  return result;
}
