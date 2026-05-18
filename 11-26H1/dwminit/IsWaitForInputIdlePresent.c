/*
 * XREFs of IsWaitForInputIdlePresent @ 0x180003478
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800082A0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180003DD9 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWaitForInputIdlePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18001AA78 == 1 )
    return 1;
  if ( dword_18001AA78 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L":<", &v1) < 0 )
    return 0;
  result = v1;
  dword_18001AA78 = 2 - (v1 != 0);
  return result;
}
