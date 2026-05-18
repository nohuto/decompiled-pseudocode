/*
 * XREFs of sub_18002A494 @ 0x18002A494
 * Callers:
 *     sub_18002C03C @ 0x18002C03C (sub_18002C03C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 *     sub_18001D674 @ 0x18001D674 (sub_18001D674.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_18002AB18 @ 0x18002AB18 (sub_18002AB18.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002A494(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rbx
  const void *v11; // rax
  const void *v12; // r8
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  v8 = sub_18001CC6C((__int64)a1, &v17, a3);
  v9 = *(_OWORD *)v8;
  v18 = v8[2];
  v10 = v18;
  if ( *(_BYTE *)(v18 + 25)
    || (sub_1800148EC(v18 + 32),
        v11 = (const void *)sub_1800148EC(a3),
        LOBYTE(v13) = sub_18001CF60(v11, *(_QWORD *)(a3 + 16), v12, *(_QWORD *)(v10 + 48)),
        v13 < 0) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001DF68();
    v19 = *a1;
    v17 = (unsigned __int64)a1;
    v14 = sub_180011790(0x48uLL);
    *((_QWORD *)&v17 + 1) = v14;
    sub_18002AB18(v15, v14 + 32, a3, a4);
    sub_180013074((__int64 *)v14, &v19);
    sub_180013074((__int64 *)(v14 + 8), &v19);
    sub_180013074((__int64 *)(v14 + 16), &v19);
    *(_WORD *)(v14 + 24) = 0;
    *((_QWORD *)&v17 + 1) = 0LL;
    sub_18001D674((__int64)&v17);
    v17 = v9;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v17, v14);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
