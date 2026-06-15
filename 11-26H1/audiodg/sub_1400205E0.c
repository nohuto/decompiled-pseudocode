/*
 * XREFs of sub_1400205E0 @ 0x1400205E0
 * Callers:
 *     sub_14002067C @ 0x14002067C (sub_14002067C.c)
 * Callees:
 *     sub_140020C34 @ 0x140020C34 (sub_140020C34.c)
 *     sub_140021998 @ 0x140021998 (sub_140021998.c)
 *     sub_14005F2B0 @ 0x14005F2B0 (sub_14005F2B0.c)
 *     memmove @ 0x1400ADF04 (memmove.c)
 */

__int64 __fastcall sub_1400205E0(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  const void *v8; // rdx
  __int64 v9; // r8
  char **v10; // r10
  char *v11; // rsi
  __int64 v12; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v7 = sub_140021998(a2);
  if ( v7 > (unsigned __int64)v10[3] )
  {
    try
    {
      sub_14005F2B0(v10, v7, v9, v8);
    }
    catch ( ... )
    {
      return (unsigned int)sub_14004EEE4(
                             retaddr,
                             31LL,
                             "avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp");
    }
  }
  else
  {
    v11 = (char *)v10;
    if ( (unsigned __int64)v10[3] > 7 )
      v11 = *v10;
    v10[2] = (char *)v7;
    v12 = 2 * v7;
    memmove(v11, v8, 2 * v7);
    *(_WORD *)&v11[v12] = 0;
  }
  *(_OWORD *)(a1 + 40) = *a3;
  sub_140020C34(a1 + 88, a4);
  return 0LL;
}
