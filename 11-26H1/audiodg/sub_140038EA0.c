/*
 * XREFs of sub_140038EA0 @ 0x140038EA0
 * Callers:
 *     sub_140038E2C @ 0x140038E2C (sub_140038E2C.c)
 *     sub_1400461D0 @ 0x1400461D0 (sub_1400461D0.c)
 *     sub_140046284 @ 0x140046284 (sub_140046284.c)
 *     sub_140046338 @ 0x140046338 (sub_140046338.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140038EA0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return sub_1400B6010(a1);
  return result;
}
