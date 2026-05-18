/*
 * XREFs of sub_1800384E0 @ 0x1800384E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001FA2C @ 0x18001FA2C (sub_18001FA2C.c)
 *     sub_180038300 @ 0x180038300 (sub_180038300.c)
 */

__int64 __fastcall sub_1800384E0(__int64 a1, __int16 a2)
{
  unsigned __int64 v4; // rsi
  bool v5; // bp

  v4 = std::wstreambuf::gptr(a1);
  if ( !v4 )
    return 0xFFFFLL;
  if ( v4 <= std::wstreambuf::eback(a1) )
    return 0xFFFFLL;
  v5 = sub_18001FA2C(0xFFFF, a2);
  if ( !v5 && !sub_18001FA2C(a2, *(_WORD *)(v4 - 2)) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 0xFFFFLL;
  std::wstreambuf::gbump(a1, 0xFFFFFFFFLL);
  if ( !v5 )
    *(_WORD *)std::wstreambuf::gptr(a1) = a2;
  return sub_180038300(a2);
}
