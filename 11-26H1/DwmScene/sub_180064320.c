/*
 * XREFs of sub_180064320 @ 0x180064320
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_180065618 @ 0x180065618 (sub_180065618.c)
 *     sub_180066AA4 @ 0x180066AA4 (sub_180066AA4.c)
 *     sub_1800675A0 @ 0x1800675A0 (sub_1800675A0.c)
 *     sub_180067CF0 @ 0x180067CF0 (sub_180067CF0.c)
 *     sub_180069C74 @ 0x180069C74 (sub_180069C74.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180064320(__int64 a1, __int64 a2)
{
  sub_180066AA4();
  if ( sub_180041DBC(a1 + 1464) )
  {
    sub_1800675A0(a1, a2);
    sub_180069C74(a1, a2);
  }
  sub_180012AC4(a1 + 1552);
  sub_180065618(a1, a2, a1 + 1488);
  Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( sub_180041DBC(a1 + 1465) )
    sub_180067CF0(a1, a2, 0LL);
  return sub_180067318(a1, a2, a1 + 200);
}
