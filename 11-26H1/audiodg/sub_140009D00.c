/*
 * XREFs of sub_140009D00 @ 0x140009D00
 * Callers:
 *     sub_140009AD0 @ 0x140009AD0 (sub_140009AD0.c)
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_140005E68 @ 0x140005E68 (sub_140005E68.c)
 *     sub_140005E9C @ 0x140005E9C (sub_140005E9C.c)
 *     sub_14000A0F4 @ 0x14000A0F4 (sub_14000A0F4.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_140028694 @ 0x140028694 (sub_140028694.c)
 *     sub_14002B420 @ 0x14002B420 (sub_14002B420.c)
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_140009D00(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int128 v6; // xmm6
  __int64 v7; // rdx
  __int128 v8; // xmm7
  __int64 v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // r14d
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 *v17; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 *v22; // rcx
  __int64 **v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 **v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // rcx
  __int64 **v29; // rax
  __int64 *v30; // rax
  _BYTE v31[16]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v32; // [rsp+30h] [rbp-50h]
  char v33; // [rsp+40h] [rbp-40h]
  __int128 v34; // [rsp+48h] [rbp-38h]
  char v35; // [rsp+58h] [rbp-28h]
  void *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v37; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v38; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+48h] BYREF

  v37 = 0LL;
  v4 = sub_1400B6010(*(_QWORD *)(a1 + 152));
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_14000C2A8(retaddr, 2948LL, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v4);
  }
  else
  {
    v6 = *(_OWORD *)sub_140052748(v31, a1, &v37);
    v32 = v6;
    v33 = 1;
    v8 = *(_OWORD *)sub_140052748(v31, v7, &v37);
    v34 = v8;
    v35 = 1;
    v9 = *(_QWORD *)(a1 + 72);
    while ( v9 )
    {
      v10 = *(_QWORD **)(v9 + 16);
      v9 = *(_QWORD *)(v9 + 8);
      v11 = (_QWORD *)*v10;
      while ( v11 )
      {
        v12 = v11[2];
        v11 = (_QWORD *)*v11;
        v13 = sub_14000A0F4(v12, *(_QWORD *)(a1 + 152), v37);
        v14 = v13;
        if ( v13 < 0 )
        {
          sub_14000C2A8(retaddr, 2963LL, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v13);
          v39 = *(_QWORD *)(v8 + 72);
          while ( v39 )
          {
            v16 = (__int64 **)sub_140028694(v15, &v39);
            v15 = *v16;
            v38 = **v16;
            while ( v38 )
            {
              v17 = (__int64 *)sub_1400265D8(v15, &v38);
              sub_140005E68(*v17);
            }
          }
          sub_1400B6010(*(_QWORD *)(v6 + 152));
          return v14;
        }
      }
    }
    v19 = sub_14002B420(a1, a2);
    v5 = v19;
    if ( v19 < 0 )
    {
      sub_14000C2A8(retaddr, 2968LL, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v19);
      v39 = *(_QWORD *)(v8 + 72);
      while ( v39 )
      {
        v23 = (__int64 **)sub_140028694(v22, &v39);
        v22 = *v23;
        v38 = **v23;
        while ( v38 )
        {
          v24 = (__int64 *)sub_1400265D8(v22, &v38);
          sub_140005E68(*v24);
        }
      }
    }
    else
    {
      v20 = sub_140005E9C(a1, v37);
      v5 = v20;
      if ( v20 < 0 )
      {
        sub_14000C2A8(retaddr, 2971LL, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v20);
        v39 = *(_QWORD *)(v8 + 72);
        while ( v39 )
        {
          v26 = (__int64 **)sub_140028694(v25, &v39);
          v25 = *v26;
          v38 = **v26;
          while ( v38 )
          {
            v27 = (__int64 *)sub_1400265D8(v25, &v38);
            sub_140005E68(*v27);
          }
        }
      }
      else
      {
        v21 = sub_1400B6010(*(_QWORD *)(a1 + 152));
        v5 = v21;
        if ( v21 >= 0 )
        {
          *(_DWORD *)(a1 + 116) = 1;
          return 0LL;
        }
        sub_14000C2A8(retaddr, 2973LL, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v21);
        v39 = *(_QWORD *)(v8 + 72);
        while ( v39 )
        {
          v29 = (__int64 **)sub_140028694(v28, &v39);
          v28 = *v29;
          v38 = **v29;
          while ( v38 )
          {
            v30 = (__int64 *)sub_1400265D8(v28, &v38);
            sub_140005E68(*v30);
          }
        }
      }
    }
    sub_1400B6010(*(_QWORD *)(v6 + 152));
  }
  return v5;
}
