/*
 * XREFs of sub_18006D2C0 @ 0x18006D2C0
 * Callers:
 *     sub_18006E99C @ 0x18006E99C (sub_18006E99C.c)
 * Callees:
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_1800469BC @ 0x1800469BC (sub_1800469BC.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 */

__int64 **__fastcall sub_18006D2C0(__int64 **a1, _QWORD *a2, _QWORD *a3, __int64 *a4, __int64 *a5)
{
  _QWORD *i; // r14
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    v9 = _RTtypeid(*i);
    if ( sub_1800469BC(*a5, v9) )
    {
      v10 = (_QWORD *)a4[1];
      if ( v10 == (_QWORD *)a4[2] )
      {
        sub_18006C90C(a4, a4[1], i);
      }
      else
      {
        sub_180013084(v10, i);
        a4[1] += 16LL;
      }
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
