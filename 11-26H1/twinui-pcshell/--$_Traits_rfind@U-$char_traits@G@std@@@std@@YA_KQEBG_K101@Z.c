/*
 * XREFs of ??$_Traits_rfind@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x18021FB2C
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18002C7D4 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 * Callees:
 *     __std_find_end_2 @ 0x1802CD0E0 (__std_find_end_2.c)
 */

__int64 __fastcall std::_Traits_rfind<std::char_traits<unsigned short>>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 end_2; // rax

  if ( a5 )
  {
    if ( a5 > a2 )
      return -1LL;
    v7 = a2 - a5;
    v8 = -1LL;
    if ( v7 != -1 )
      v8 = v7;
    v9 = a1 + 2 * (a5 + v8);
    end_2 = _std_find_end_2(a1, v9, L":");
    if ( end_2 == v9 )
      return -1LL;
    else
      return (end_2 - a1) >> 1;
  }
  else
  {
    if ( a2 == -1LL )
      return -1LL;
    return a2;
  }
}
