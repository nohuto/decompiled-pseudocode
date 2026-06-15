/*
 * XREFs of sub_140025F80 @ 0x140025F80
 * Callers:
 *     sub_140025F70 @ 0x140025F70 (sub_140025F70.c)
 * Callees:
 *     sub_140026018 @ 0x140026018 (sub_140026018.c)
 *     sub_1400260A0 @ 0x1400260A0 (sub_1400260A0.c)
 *     sub_140026194 @ 0x140026194 (sub_140026194.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140025F80(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _BYTE v4[88]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+80h] [rbp+8h] BYREF

  memset(v4, 0, 0x48uLL);
  result = sub_140026194(v4, *a1);
  if ( (int)result >= 0 )
  {
    v5 = 0LL;
    sub_140026018(a1[2], v3, &v5);
    if ( v5 )
      sub_1400B6010(v5);
    result = sub_1400260A0(v4);
    if ( v5 )
      return sub_1400B6010(v5);
  }
  return result;
}
