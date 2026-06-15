/*
 * XREFs of sub_140088570 @ 0x140088570
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140087A88 @ 0x140087A88 (sub_140087A88.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140088570(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( (unsigned int)sub_140088ED0(a2, &stru_1400C6598, a3, a1) )
  {
    *v4 = v5;
    sub_1400B6010(v5);
    v9 = 0;
  }
  else
  {
    if ( (unsigned int)sub_140088ED0(v3, &unk_1400C9030, v4, v5) )
    {
      *v6 = v7;
      v9 = 0;
    }
    else
    {
      v9 = sub_140087A88(v7 + 8, v8, (__int64)v6, v7);
      if ( v9 < 0 )
        goto LABEL_7;
    }
    sub_1400B6010(*v6);
  }
LABEL_7:
  if ( v9 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    134,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v9);
  return (unsigned int)v9;
}
