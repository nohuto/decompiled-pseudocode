/*
 * XREFs of ?NumPadScanCodeToHex@@YAHII@Z @ 0x140156144
 * Callers:
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NumPadScanCodeToHex(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v5; // eax

  if ( (unsigned int)(a1 - 71) <= 0xB )
  {
    v5 = aVkNumpad[a1 - 71];
    if ( v5 == 255 )
      return 0xFFFFFFFFLL;
    return (unsigned int)(v5 - 96);
  }
  else
  {
    if ( (*(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 14696) & 2) == 0 )
      return 0xFFFFFFFFLL;
    if ( (unsigned int)(a2 - 65) > 5 )
    {
      result = 0xFFFFFFFFLL;
      if ( (unsigned int)(a2 - 48) <= 9 )
        return (unsigned int)(a2 - 48);
    }
    else
    {
      return (unsigned int)(a2 - 55);
    }
  }
  return result;
}
