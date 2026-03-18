/*
 * XREFs of PopIsHiberbootSupported @ 0x140776D5C
 * Callers:
 *     PopVerifySystemPowerPolicy @ 0x1409442F4 (PopVerifySystemPowerPolicy.c)
 *     PopVerifySystemPowerState @ 0x140B24424 (PopVerifySystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHiberbootSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 6) )
    return *(_BYTE *)(a1 + 8) != 0;
  return v1;
}
