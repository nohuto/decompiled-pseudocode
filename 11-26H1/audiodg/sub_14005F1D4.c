/*
 * XREFs of sub_14005F1D4 @ 0x14005F1D4
 * Callers:
 *     sub_14005DFD0 @ 0x14005DFD0 (sub_14005DFD0.c)
 * Callees:
 *     sub_14002A5F8 @ 0x14002A5F8 (sub_14002A5F8.c)
 *     sub_14005DAD0 @ 0x14005DAD0 (sub_14005DAD0.c)
 */

_QWORD *__fastcall sub_14005F1D4(_QWORD *a1)
{
  _QWORD **v2; // rdx
  _QWORD *result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[2] )
  {
    v2 = (_QWORD **)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      sub_14005DAD0((__int64)a1, (__int64)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v4 = (unsigned __int64 *)a1[4];
      v5 = (unsigned __int64 *)a1[3];
      v6 = a1[1];
      return (_QWORD *)sub_14002A5F8(v5, v4, &v6);
    }
    else
    {
      return sub_14005F080(a1, *v2, (_QWORD *)a1[1]);
    }
  }
  return result;
}
