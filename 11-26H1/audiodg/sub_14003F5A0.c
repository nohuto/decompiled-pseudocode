/*
 * XREFs of sub_14003F5A0 @ 0x14003F5A0
 * Callers:
 *     sub_140038DD8 @ 0x140038DD8 (sub_140038DD8.c)
 *     sub_140046234 @ 0x140046234 (sub_140046234.c)
 *     sub_1400462E8 @ 0x1400462E8 (sub_1400462E8.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14003F5A0(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    result = sub_1400B6010(v4);
  if ( a2 )
    return sub_1400B6010(a1);
  return result;
}
