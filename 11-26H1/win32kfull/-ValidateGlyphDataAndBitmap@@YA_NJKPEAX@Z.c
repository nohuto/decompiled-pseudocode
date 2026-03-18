/*
 * XREFs of ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1400FC27C
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1400FB968 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400FC8C8 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall ValidateGlyphDataAndBitmap(int a1, int a2, _DWORD *a3)
{
  int v3; // eax
  int v5; // ecx
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == -1 )
    return 0;
  v3 = 0;
  if ( a1 < 0 )
    return 0;
  if ( a3 && a2 == 1 )
  {
    if ( (unsigned int)a1 < 0x10 )
      return 0;
    v5 = a3[2];
    if ( v5 < 0 || (int)a3[3] < 0 )
    {
      v6[2] = 0;
      v6[0] = 49925596;
      LOBYTE(v3) = v5 >= 0;
      v6[1] = v3 + 7;
      RtlLogUnexpectedCodepath(v6);
      return 0;
    }
  }
  return 1;
}
