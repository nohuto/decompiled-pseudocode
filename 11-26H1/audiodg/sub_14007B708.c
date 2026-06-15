/*
 * XREFs of sub_14007B708 @ 0x14007B708
 * Callers:
 *     sub_14007CF28 @ 0x14007CF28 (sub_14007CF28.c)
 * Callees:
 *     sub_14004CE38 @ 0x14004CE38 (sub_14004CE38.c)
 *     sub_14007C794 @ 0x14007C794 (sub_14007C794.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_14007B708(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rcx
  __int16 v7; // [rsp+58h] [rbp-21h] BYREF
  char v8; // [rsp+5Ah] [rbp-1Fh]
  int v9; // [rsp+5Ch] [rbp-1Dh]
  unsigned __int16 v10; // [rsp+60h] [rbp-19h]
  __int128 v11; // [rsp+68h] [rbp-11h]
  __int16 v12; // [rsp+78h] [rbp-1h] BYREF
  char v13; // [rsp+7Ah] [rbp+1h]
  unsigned int v14; // [rsp+7Ch] [rbp+3h]
  __int16 v15; // [rsp+80h] [rbp+7h]
  __int128 v16; // [rsp+88h] [rbp+Fh]
  __int64 v17; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v18; // [rsp+F8h] [rbp+7Fh]

  v17 = *(_QWORD *)(a1 + 24) + 10LL;
  v12 = *(_WORD *)(a1 + 2);
  v13 = *(_BYTE *)(a1 + 4);
  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  v7 = *(_WORD *)(a1 + 6);
  v8 = *(_BYTE *)(a1 + 8);
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  while ( (unsigned __int8)sub_14007C794(&v12, &v17, *(_QWORD *)(a1 + 32)) )
  {
    for ( i = 0; i < v14 && (unsigned __int8)sub_14007C794(&v7, &v17, *(_QWORD *)(a1 + 32)); ++i )
    {
      v18 = v10;
      v5 = *(_QWORD *)(a2 + 112);
      if ( !v5 )
        __fastfail(7u);
      if ( !(unsigned __int8)sub_1400B6010(v5) )
      {
        sub_14004CE38(a2);
        return 0;
      }
    }
  }
  sub_14004CE38(a2);
  return 1;
}
