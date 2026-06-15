/*
 * XREFs of sub_1400518C0 @ 0x1400518C0
 * Callers:
 *     sub_140051808 @ 0x140051808 (sub_140051808.c)
 *     sub_140053AF0 @ 0x140053AF0 (sub_140053AF0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1400518C0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // edx
  __int64 v6; // [rsp+40h] [rbp-41h] BYREF
  __int64 v7; // [rsp+48h] [rbp-39h] BYREF
  __int64 v8; // [rsp+50h] [rbp-31h] BYREF
  __int64 v9; // [rsp+58h] [rbp-29h] BYREF
  __int64 v10[2]; // [rsp+68h] [rbp-19h] BYREF
  int v11; // [rsp+78h] [rbp-9h]
  _BYTE v12[28]; // [rsp+7Ch] [rbp-5h]
  _OWORD v13[2]; // [rsp+98h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh]

  v10[0] = 0LL;
  v1 = sub_1400B6010(a1);
  v2 = v1;
  if ( v1 >= 0 )
  {
    *(_OWORD *)v12 = 0LL;
    v11 = 64;
    *(_OWORD *)&v12[12] = xmmword_1400C6A30;
    v13[0] = xmmword_1400C6E60;
    v13[1] = xmmword_1400C6A40;
    v6 = 0LL;
    v3 = sub_1400B6010(v10[0]);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v3 = sub_1400B6010(v6);
      v2 = v3;
      if ( v3 >= 0 )
      {
        v9 = 0LL;
        v8 = 0LL;
        v7 = 0LL;
        sub_140003238(&v7);
        sub_140003238(&v8);
        sub_140003238(&v9);
        sub_140003238(&v6);
        sub_140003238(v10);
        return 2147500033LL;
      }
      v4 = 25;
    }
    else
    {
      v4 = 22;
    }
    sub_14000C2A8(
      (int)retaddr,
      v4,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      v3);
    sub_140003238(&v6);
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      13,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      v1);
  }
  sub_140003238(v10);
  return v2;
}
