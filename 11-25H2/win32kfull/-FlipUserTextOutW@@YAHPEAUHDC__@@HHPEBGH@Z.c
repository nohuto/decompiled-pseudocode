/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x140056184
 * Callers:
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x140056E58 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1400573AC (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 * Callees:
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     GreGetLayout @ 0x140054CD8 (GreGetLayout.c)
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 *     GreSetGraphicsMode @ 0x140231C10 (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, __int64 a2, __int64 a3, const unsigned __int16 *a4)
{
  unsigned int v6; // ebx
  int TextAlign; // eax
  int v9; // ebp

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v6 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      TextAlign = GreGetTextAlign(a1);
      v9 = TextAlign;
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
      v6 = GreExtTextOutW(a1, 0LL, (__int64)a4, 1);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1, v9);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutW(a1, 0LL, (__int64)a4, 1);
  }
  return v6;
}
