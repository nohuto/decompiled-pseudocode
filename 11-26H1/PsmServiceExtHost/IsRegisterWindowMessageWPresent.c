/*
 * XREFs of IsRegisterWindowMessageWPresent @ 0x180070A9C
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x180097D70 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180070134 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterWindowMessageWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E21F8 == 1 )
    return 1;
  if ( dword_1800E21F8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"@B", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800E21F8 = 2 - (v1 != 0);
  return result;
}
