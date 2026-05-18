/*
 * XREFs of sub_180020D80 @ 0x180020D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001E888 @ 0x18001E888 (sub_18001E888.c)
 *     sub_18001E898 @ 0x18001E898 (sub_18001E898.c)
 *     sub_18001E920 @ 0x18001E920 (sub_18001E920.c)
 *     sub_18001E9F0 @ 0x18001E9F0 (sub_18001E9F0.c)
 */

__int64 __fastcall sub_180020D80(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rsi
  bool v5; // bp
  char v6; // al
  char *v7; // rbx

  v4 = std::streambuf::gptr(a1);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  if ( v4 <= std::streambuf::eback(a1) )
    return 0xFFFFFFFFLL;
  v5 = sub_18001E898(-1, a2);
  if ( !v5 )
  {
    v6 = sub_18001E9F0(a2);
    if ( !sub_18001E888(v6, *(_BYTE *)(v4 - 1)) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
      return 0xFFFFFFFFLL;
  }
  std::streambuf::gbump(a1, 0xFFFFFFFFLL);
  if ( !v5 )
  {
    v7 = (char *)std::streambuf::gptr(a1);
    *v7 = sub_18001E9F0(a2);
  }
  return sub_18001E920(a2);
}
