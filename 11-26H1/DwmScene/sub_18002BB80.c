/*
 * XREFs of sub_18002BB80 @ 0x18002BB80
 * Callers:
 *     sub_18002C790 @ 0x18002C790 (sub_18002C790.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18002A5E0 @ 0x18002A5E0 (sub_18002A5E0.c)
 *     sub_18002A740 @ 0x18002A740 (sub_18002A740.c)
 *     sub_18002A8A0 @ 0x18002A8A0 (sub_18002A8A0.c)
 *     sub_18002AB54 @ 0x18002AB54 (sub_18002AB54.c)
 *     sub_18002AB68 @ 0x18002AB68 (sub_18002AB68.c)
 *     sub_18002B27C @ 0x18002B27C (sub_18002B27C.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_18009891C @ 0x18009891C (sub_18009891C.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18002BB80(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE v12[136]; // [rsp+38h] [rbp-D0h] BYREF
  void *v13[3]; // [rsp+C0h] [rbp-48h] BYREF
  void *v14[20]; // [rsp+D8h] [rbp-30h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  while ( a1[51] < a1[60] )
  {
    sub_18002B27C((__int64)v12);
    if ( !(unsigned __int8)sub_180041DBC(a1[55] + 184LL) || v4 > *(_QWORD *)(v5 + 192) )
      goto LABEL_13;
    v6 = sub_18009891C(v5, v4, v12);
    if ( !v6 )
    {
      v7 = a2[1];
      if ( v7 == a2[2] )
      {
        sub_18002A5E0(a2, v7, (__int64)v12);
      }
      else
      {
        sub_18002AB54(v6, v7, (__int64)v12);
        a2[1] += 152LL;
      }
      goto LABEL_17;
    }
    if ( ((v6 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( ((v6 - 1) & 0xFFFFFFFD) == 0 )
      {
        sub_18002A8A0(v13, (__int64)v13);
        return a2;
      }
    }
    else
    {
LABEL_13:
      memset(v14, 0, 0x98uLL);
      v9 = sub_18002B27C((__int64)v14);
      v11 = a2[1];
      if ( v11 == a2[2] )
      {
        sub_18002A740(a2, v11, v9);
      }
      else
      {
        sub_18002AB68(v10, v11, v9);
        a2[1] += 152LL;
      }
      sub_18002A8A0(&v14[17], (__int64)&v14[17]);
    }
LABEL_17:
    ++a1[51];
    sub_18002A8A0(v13, (__int64)v13);
  }
  return a2;
}
