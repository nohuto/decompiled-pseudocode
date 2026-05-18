/*
 * XREFs of sub_180084E40 @ 0x180084E40
 * Callers:
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_1800162FC @ 0x1800162FC (sub_1800162FC.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_180078020 @ 0x180078020 (sub_180078020.c)
 *     sub_180084A60 @ 0x180084A60 (sub_180084A60.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180084E40(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]

  *(_DWORD *)(a1 + 96) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(a2 + 16);
  v7 = (_QWORD *)(a1 + 112);
  if ( a1 + 112 != a2 + 16 )
  {
    sub_180078020(a1 + 112);
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
  }
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 40);
  sub_1800162FC((_QWORD *)(a1 + 160), a3);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    sub_180036040(*(_QWORD *)(a1 + 72), &v14);
    v8 = 0;
    v9 = v14;
    if ( (v15 - v14) >> 4 )
    {
      v10 = 0LL;
      do
      {
        sub_180012C40(&v12, (_QWORD *)(v9 + 16 * v10));
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) )
          sub_180084A60(a1, &v12);
        if ( v13 )
          sub_180010EC8(v13);
        v10 = ++v8;
        v9 = v14;
      }
      while ( v8 < (unsigned __int64)((v15 - v14) >> 4) );
    }
    sub_1800141F0((__int64)&v14);
  }
  return sub_180078020((__int64)v6);
}
