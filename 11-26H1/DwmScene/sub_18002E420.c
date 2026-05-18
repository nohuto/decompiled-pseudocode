/*
 * XREFs of sub_18002E420 @ 0x18002E420
 * Callers:
 *     sub_18002E420 @ 0x18002E420 (sub_18002E420.c)
 *     sub_1800314EC @ 0x1800314EC (sub_1800314EC.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18002E420 @ 0x18002E420 (sub_18002E420.c)
 */

__int64 __fastcall sub_18002E420(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rcx
  void *v7; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18002E420(a1, a2, v3[2]);
      v6 = v3;
      v7 = v3;
      v3 = (_QWORD *)*v3;
      sub_180014244((__int64)(v6 + 8));
      result = sub_18000E26C(v7, 0x60uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
