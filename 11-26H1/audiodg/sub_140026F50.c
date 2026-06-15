/*
 * XREFs of sub_140026F50 @ 0x140026F50
 * Callers:
 *     sub_140026DE0 @ 0x140026DE0 (sub_140026DE0.c)
 *     sub_140026E90 @ 0x140026E90 (sub_140026E90.c)
 *     sub_14004D070 @ 0x14004D070 (sub_14004D070.c)
 *     sub_1400508F0 @ 0x1400508F0 (sub_1400508F0.c)
 *     sub_140051390 @ 0x140051390 (sub_140051390.c)
 *     sub_14005DC30 @ 0x14005DC30 (sub_14005DC30.c)
 *     sub_140065A28 @ 0x140065A28 (sub_140065A28.c)
 *     sub_1400866C4 @ 0x1400866C4 (sub_1400866C4.c)
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 *     sub_1400939D0 @ 0x1400939D0 (sub_1400939D0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140026F50(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // ebx

  *a3 = 0LL;
  v3 = sub_1400B6010(a1);
  if ( v3 < 0 )
    return (unsigned int)v3;
  else
    return 2147943568LL;
}
