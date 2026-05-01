/*
 * XREFs of IsOleInitializePresent @ 0x1802D003C
 * Callers:
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1801846E0 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802D32A9 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOleInitializePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1808D98A8 == 1 )
    return 1;
  if ( dword_1808D98A8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"68", &v1) < 0 )
    return 0;
  result = v1;
  dword_1808D98A8 = 2 - (v1 != 0);
  return result;
}
