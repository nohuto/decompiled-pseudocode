/*
 * XREFs of PopIsHiberbootSupported @ 0x140779C04
 * Callers:
 *     PopVerifySystemPowerPolicy @ 0x1409BFC64 (PopVerifySystemPowerPolicy.c)
 *     PopVerifySystemPowerState @ 0x140B268C4 (PopVerifySystemPowerState.c)
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
