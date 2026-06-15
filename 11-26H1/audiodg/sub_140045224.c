/*
 * XREFs of sub_140045224 @ 0x140045224
 * Callers:
 *     sub_140015C88 @ 0x140015C88 (sub_140015C88.c)
 *     sub_140054C80 @ 0x140054C80 (sub_140054C80.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140044BB0 @ 0x140044BB0 (sub_140044BB0.c)
 *     sub_140045294 @ 0x140045294 (sub_140045294.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140045224(_QWORD *a1, int a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  v3 = sub_140044BB0(&v9, (__int64)&v8);
  sub_140045294(v4, *v3);
  v5 = qword_1400E8748;
  if ( qword_1400E8748 )
  {
    *a1 = qword_1400E8748;
    sub_1400B6010(v5);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 21, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", -2147024882);
    return 2147942414LL;
  }
}
