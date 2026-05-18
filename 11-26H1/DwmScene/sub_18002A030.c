/*
 * XREFs of sub_18002A030 @ 0x18002A030
 * Callers:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_180029734 @ 0x180029734 (sub_180029734.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 * Callees:
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 */

char __fastcall sub_18002A030(__int64 a1, __int64 a2)
{
  char v3; // bl

  LOBYTE(a2) = 1;
  v3 = 0;
  if ( (unsigned __int8)sub_18002A070(a1, a2) || (unsigned __int8)sub_18002A070(a1, 0LL) )
    return 1;
  return v3;
}
