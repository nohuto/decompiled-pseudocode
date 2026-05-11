/*
 * XREFs of IsAudioStreamValid @ 0x14000DCDC
 * Callers:
 *     USBParseConvertInterfaceToDataRange @ 0x140036C4C (USBParseConvertInterfaceToDataRange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsAudioStreamValid(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        __int16 a4,
        unsigned __int64 a5)
{
  unsigned __int8 v5; // al
  int v6; // eax

  if ( a2 < a3 || a1 + (unsigned __int64)a2 > a5 )
    return 0LL;
  if ( a4 )
  {
    if ( a4 == 4096 )
    {
      v5 = *(_BYTE *)(a1 + 8);
      goto LABEL_8;
    }
    if ( a4 != 0x2000 )
      return 0LL;
  }
  v5 = *(_BYTE *)(a1 + 7);
LABEL_8:
  if ( v5 )
    v6 = 3 * v5;
  else
    v6 = 6;
  return a1 + (unsigned __int64)(unsigned int)(a3 + v6) <= a5;
}
