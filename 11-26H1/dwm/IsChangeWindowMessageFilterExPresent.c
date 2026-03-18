/*
 * XREFs of IsChangeWindowMessageFilterExPresent @ 0x1400059FC
 * Callers:
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x14000396C (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140005F9B (ApiSetQueryApiSetPresence_0.c)
 */

char IsChangeWindowMessageFilterExPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1400188B4 == 1 )
    return 1;
  if ( dword_1400188B4 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"8:", &v1) < 0 )
    return 0;
  result = v1;
  dword_1400188B4 = 2 - (v1 != 0);
  return result;
}
