/*
 * XREFs of sub_18002E4EC @ 0x18002E4EC
 * Callers:
 *     sub_18002E4EC @ 0x18002E4EC (sub_18002E4EC.c)
 *     sub_18003154C @ 0x18003154C (sub_18003154C.c)
 *     sub_18006C0C0 @ 0x18006C0C0 (sub_18006C0C0.c)
 *     sub_1800C18B8 @ 0x1800C18B8 (sub_1800C18B8.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002E4EC @ 0x18002E4EC (sub_18002E4EC.c)
 */

__int64 __fastcall sub_18002E4EC(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18002E4EC(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_18000E26C(v6, 0x30uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
