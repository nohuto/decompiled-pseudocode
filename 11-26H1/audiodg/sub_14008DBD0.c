/*
 * XREFs of sub_14008DBD0 @ 0x14008DBD0
 * Callers:
 *     sub_14008DEA0 @ 0x14008DEA0 (sub_14008DEA0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001189C @ 0x14001189C (sub_14001189C.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14002C450 @ 0x14002C450 (sub_14002C450.c)
 *     sub_140033344 @ 0x140033344 (sub_140033344.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_140075A98 @ 0x140075A98 (sub_140075A98.c)
 *     sub_14008E070 @ 0x14008E070 (sub_14008E070.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_14008DBD0(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // r9d
  int v14; // edx
  int v15; // eax
  __int64 v17; // [rsp+48h] [rbp-11h] BYREF
  __int64 v18; // [rsp+50h] [rbp-9h] BYREF
  __int64 v19; // [rsp+58h] [rbp-1h] BYREF
  __int64 v20; // [rsp+60h] [rbp+7h] BYREF
  void *v21; // [rsp+68h] [rbp+Fh] BYREF
  void *v22; // [rsp+70h] [rbp+17h] BYREF
  void **v23; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+80h] [rbp+27h] BYREF
  char v25; // [rsp+88h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h]

  v22 = 0LL;
  v23 = &v22;
  v24 = 0LL;
  v25 = 1;
  v7 = sub_14002C450(a2, &v24);
  sub_140033344((__int64)&v23);
  if ( v7 >= 0 )
  {
    v19 = 0LL;
    v8 = sub_1400B6010(a1);
    v7 = v8;
    if ( v8 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        125,
        (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
        v8);
LABEL_5:
      sub_140003238(&v19);
      goto LABEL_24;
    }
    v18 = 0LL;
    v9 = sub_1400B6010(v19);
    v7 = v9;
    if ( v9 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        129,
        (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
        v9);
LABEL_8:
      sub_140003238(&v18);
      goto LABEL_5;
    }
    v17 = 0LL;
    v10 = sub_1400B6010(v18);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v10 = sub_1400B6010(v17);
      v7 = v10;
      if ( v10 >= 0 )
      {
        *(_WORD *)(a5 + 2) = 0;
        v20 = 0LL;
        sub_140075A98(&v20);
        v12 = sub_1400B6010(v17);
        v7 = v12;
        if ( v12 >= 0 )
        {
          v21 = 0LL;
          v23 = &v21;
          v24 = 0LL;
          v25 = 1;
          v7 = sub_1400B6010(v20);
          sub_14001189C((__int64)&v23);
          if ( v7 >= 0 )
          {
            v15 = sub_14008E070(v21, a4);
            v7 = v15;
            if ( v15 >= 0 )
            {
              sub_14001D96C(&v21);
              sub_140056130(&v20);
              sub_140003238(&v17);
              sub_140003238(&v18);
              sub_140003238(&v19);
              v7 = 0;
              goto LABEL_24;
            }
            v13 = v15;
            v14 = 150;
          }
          else
          {
            v13 = v7;
            v14 = 147;
          }
          sub_14000C2A8(
            (int)retaddr,
            v14,
            (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
            v13);
          sub_14001D96C(&v21);
        }
        else
        {
          sub_14000C2A8(
            (int)retaddr,
            143,
            (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
            v12);
        }
        sub_140056130(&v20);
        goto LABEL_12;
      }
      v11 = 136;
    }
    else
    {
      v11 = 133;
    }
    sub_14000C2A8(
      (int)retaddr,
      v11,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      v10);
LABEL_12:
    sub_140003238(&v17);
    goto LABEL_8;
  }
  sub_14000C2A8(
    (int)retaddr,
    122,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
    v7);
LABEL_24:
  sub_140008C08(&v22, 0LL);
  return (unsigned int)v7;
}
