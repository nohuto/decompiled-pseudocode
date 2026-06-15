/*
 * XREFs of sub_14000E590 @ 0x14000E590
 * Callers:
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 *     sub_14003A5EC @ 0x14003A5EC (sub_14003A5EC.c)
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000E590(_QWORD *a1, __int64 a2)
{
  if ( !*a1 )
    sub_14004639C(2147500037LL, a2);
  return *a1 + 16LL;
}
