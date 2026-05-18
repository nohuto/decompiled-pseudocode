/*
 * XREFs of sub_180027744 @ 0x180027744
 * Callers:
 *     sub_180027744 @ 0x180027744 (sub_180027744.c)
 *     sub_180027B20 @ 0x180027B20 (sub_180027B20.c)
 *     sub_1800293DC @ 0x1800293DC (sub_1800293DC.c)
 *     sub_18007F4E4 @ 0x18007F4E4 (sub_18007F4E4.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180027744 @ 0x180027744 (sub_180027744.c)
 */

__int64 __fastcall sub_180027744(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_180027744(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_18000E26C(v6, 0x28uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
