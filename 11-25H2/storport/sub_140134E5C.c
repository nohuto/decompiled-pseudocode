/*
 * XREFs of sub_140134E5C @ 0x140134E5C
 * Callers:
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     sub_14008DFD0 @ 0x14008DFD0 (sub_14008DFD0.c)
 * Callees:
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 *     sub_140138EF0 @ 0x140138EF0 (sub_140138EF0.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140134E5C(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  if ( a3 )
  {
    result = sub_140138EF0(a1, &v7);
    if ( (int)result >= 0 )
    {
      if ( (v7 & 7) == 7 )
      {
        memset_0(a2, 0, 0x1860uLL);
        *(_QWORD *)a2 = a1;
        a2[6] = -60928;
        return sub_140138A04(a2, a3);
      }
      else
      {
        return 3221225659LL;
      }
    }
  }
  else
  {
    memset_0(a2, 0, 0x1860uLL);
    result = 0LL;
    *(_QWORD *)a2 = a1;
    a2[6] = -60928;
  }
  return result;
}
