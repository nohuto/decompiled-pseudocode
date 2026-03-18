/*
 * XREFs of ?NumPadScanCodeToHex@@YAHII@Z @ 0x1400A0238
 * Callers:
 *     xxxInternalToUnicode @ 0x1400A04D0 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NumPadScanCodeToHex(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  int v4; // eax

  v2 = a2;
  if ( (unsigned int)(a1 - 71) <= 0xB )
  {
    v4 = aVkNumpad[(unsigned int)(a1 - 71)];
    if ( v4 == 255 )
      return 0xFFFFFFFFLL;
    return (unsigned int)(v4 - 96);
  }
  else
  {
    if ( (*(_BYTE *)(W32GetUserSessionState(a1, a2) + 14704) & 2) == 0 )
      return 0xFFFFFFFFLL;
    if ( (unsigned int)(v2 - 65) > 5 )
    {
      result = 0xFFFFFFFFLL;
      if ( (unsigned int)(v2 - 48) <= 9 )
        return (unsigned int)(v2 - 48);
    }
    else
    {
      return (unsigned int)(v2 - 55);
    }
  }
  return result;
}
