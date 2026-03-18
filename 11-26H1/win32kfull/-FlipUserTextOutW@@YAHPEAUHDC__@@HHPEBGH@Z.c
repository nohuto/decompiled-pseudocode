/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x140125814
 * Callers:
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1401256F0 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x140126D24 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 * Callees:
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     GreSetGraphicsMode @ 0x1401274B8 (GreSetGraphicsMode.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, __int64 a2, __int64 a3, const unsigned __int16 *a4)
{
  unsigned int v6; // ebx
  char v8; // [rsp+38h] [rbp-30h]

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v6 = 0;
    if ( (unsigned int)GreSetGraphicsMode(a1) )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
      v6 = GreExtTextOutW(a1, 0LL, (__int64)a4, 1, v8);
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutW(a1, 0LL, (__int64)a4, 1, v8);
  }
  return v6;
}
