/*
 * XREFs of ??$_Traits_rfind@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1800AED28
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800AEBAC (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x1800456B0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::_Traits_rfind<std::char_traits<unsigned short>>(
        _WORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v9; // rdx
  __int64 v10; // rax
  _WORD *i; // rcx

  v5 = a5;
  v6 = -1LL;
  if ( a5 )
  {
    if ( a5 > a2 )
    {
      return v6;
    }
    else
    {
      v9 = a2 - a5;
      v10 = -1LL;
      if ( v9 != -1 )
        v10 = v9;
      for ( i = &a1[v10]; *i != 58 || (unsigned int)std::_WChar_traits<unsigned short>::compare((__int64)i, L":", v5); --i )
      {
        if ( i == a1 )
          return v6;
      }
      return i - a1;
    }
  }
  else
  {
    if ( a2 == -1LL )
      return -1LL;
    return a2;
  }
}
