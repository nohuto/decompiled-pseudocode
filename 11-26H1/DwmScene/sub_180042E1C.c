/*
 * XREFs of sub_180042E1C @ 0x180042E1C
 * Callers:
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180039010 @ 0x180039010 (sub_180039010.c)
 *     sub_180043168 @ 0x180043168 (sub_180043168.c)
 *     sub_1800432C8 @ 0x1800432C8 (sub_1800432C8.c)
 *     sub_18005DAB4 @ 0x18005DAB4 (sub_18005DAB4.c)
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 *     sub_18008022C @ 0x18008022C (sub_18008022C.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 *     sub_180080B64 @ 0x180080B64 (sub_180080B64.c)
 *     sub_1800817A0 @ 0x1800817A0 (sub_1800817A0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180042E1C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // r13
  unsigned int i; // edi
  __int64 v11; // r12
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  _QWORD v17[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+50h]

  v19 = a2;
  v7 = *a4;
  v20 = *(_DWORD *)(v7 + 88);
  v8 = 0;
  sub_18005DAB4(
    *(_QWORD *)(a1 + 136),
    v17,
    a3 | *(_QWORD *)(a1 + 152) | *(_QWORD *)(*(_QWORD *)(a1 + 136) + 72LL),
    *(unsigned int *)(v7 + 104));
  v9 = v17[0];
  if ( v17[0] )
  {
    sub_180012A94(*a4 + 72, &v15);
    sub_180080354(v9, &v15);
    if ( !(unsigned __int8)sub_1800432C8(v9 + 128) )
    {
      sub_180012A94(*a4 + 72, &v15);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 192LL))(v15, &v19);
      if ( v16 )
        sub_180010EC8(v16);
      for ( i = 0; i < 6; ++i )
      {
        if ( ((1 << i) & (unsigned int)v19) != 0 )
        {
          v11 = *(_QWORD *)sub_180080B64(v9, &v15, i);
          if ( v16 )
            sub_180010EC8(v16);
          if ( v11 )
            v8 |= 1 << i;
        }
      }
      v12 = *(unsigned __int16 *)(a1 + 112);
      LOWORD(v12) = ~(_WORD)v12;
      sub_18008022C(v9, (_DWORD)a4, (v12 >> 6) & 1, v8, a5);
      sub_18007DD3C(*(_QWORD *)(a1 + 120), a4, v8);
      v13 = *(_QWORD *)(a1 + 168);
      if ( v13 )
      {
        if ( !(unsigned __int8)sub_180043168(v13, v20) )
        {
          sub_180012A94(*a4 + 72, &v15);
          sub_1800817A0(*(_QWORD *)(a1 + 168), &v15);
          if ( v16 )
            sub_180010EC8(v16);
        }
        sub_180039010(*a4, (_QWORD *)(a1 + 168));
      }
    }
  }
  *(_QWORD *)a2 = v9;
  *(_QWORD *)(a2 + 8) = v17[1];
  *(_DWORD *)(a2 + 16) = v8;
  return a2;
}
