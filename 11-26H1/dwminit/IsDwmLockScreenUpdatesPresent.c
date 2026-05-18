/*
 * XREFs of IsDwmLockScreenUpdatesPresent @ 0x180003638
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800082A0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180003DD9 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDwmLockScreenUpdatesPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18001AAA4 == 1 )
    return 1;
  if ( dword_18001AAA4 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18001AAA4 = 2 - (v1 != 0);
  return result;
}
