/*
 * XREFs of sub_14000908C @ 0x14000908C
 * Callers:
 *     sub_140004140 @ 0x140004140 (sub_140004140.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000927C @ 0x14000927C (sub_14000927C.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_140060BB8 @ 0x140060BB8 (sub_140060BB8.c)
 *     sub_140060D30 @ 0x140060D30 (sub_140060D30.c)
 *     sub_14006621C @ 0x14006621C (sub_14006621C.c)
 *     sub_14006945C @ 0x14006945C (sub_14006945C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14000908C(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // si
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  void *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v20; // [rsp+50h] [rbp+30h] BYREF

  v3 = 0LL;
  v20 = 0LL;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 12) )
    v5 = *(_QWORD **)(a1 + 72);
  else
    v5 = *(_QWORD **)(a1 + 64);
LABEL_3:
  v6 = v5;
  if ( v5 )
  {
    if ( *(_DWORD *)(a1 + 12) )
      v5 = (_QWORD *)v5[1];
    else
      v5 = (_QWORD *)*v5;
    v7 = *(_QWORD *)v6[2];
    if ( !v7 )
      sub_14004639C(2147500037LL, a2);
    v9 = *(_QWORD **)v7;
    v10 = *(_QWORD *)(v7 + 16);
    if ( v5 )
      v11 = *(_QWORD *)sub_140009AA8(v5[2]);
    else
      v11 = 0LL;
    if ( (unsigned int)sub_14000927C(v10, v11) )
    {
      if ( (unsigned __int8)sub_14006945C(&v20) )
      {
        v15 = v20;
        v20 = 0LL;
        if ( v15 )
          sub_1400B6010(v15);
        v16 = sub_140060D30(v10, &v20);
        v13 = v16;
        if ( v16 < 0 )
        {
          sub_14000C2A8(retaddr, 2870LL, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v16);
          if ( v20 )
            sub_1400B6010(v20);
          return v13;
        }
        v4 = 1;
      }
    }
    else if ( (unsigned __int8)sub_14006621C(&v20) )
    {
      v4 = 0;
    }
    v12 = sub_140060BB8(v10, v20);
    v13 = v12;
    if ( v12 < 0 )
    {
      v18 = 2885LL;
    }
    else
    {
      if ( !v4 )
      {
        v14 = v20;
        v20 = 0LL;
        if ( v14 )
          sub_1400B6010(v14);
      }
      do
      {
        if ( !v9 )
        {
          v3 = v20;
          goto LABEL_3;
        }
        v17 = v9[2];
        v9 = (_QWORD *)*v9;
        v12 = sub_140060BB8(v17, 0LL);
        v13 = v12;
      }
      while ( v12 >= 0 );
      v18 = 2897LL;
    }
    sub_14000C2A8(retaddr, v18, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v12);
    sub_140003238(&v20);
    return v13;
  }
  if ( v3 )
    sub_1400B6010(v3);
  return 0LL;
}
