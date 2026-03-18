/*
 * XREFs of IsImmDisableIMEPresent @ 0x140005EBC
 * Callers:
 *     wWinMain @ 0x140001FA0 (wWinMain.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140005F9B (ApiSetQueryApiSetPresence_0.c)
 */

char IsImmDisableIMEPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_140018918 == 1 )
    return 1;
  if ( dword_140018918 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"*,", &v1) < 0 )
    return 0;
  result = v1;
  dword_140018918 = 2 - (v1 != 0);
  return result;
}
