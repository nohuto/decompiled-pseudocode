/*
 * XREFs of sub_14013AAA4 @ 0x14013AAA4
 * Callers:
 *     sub_140135FC4 @ 0x140135FC4 (sub_140135FC4.c)
 *     sub_140136054 @ 0x140136054 (sub_140136054.c)
 * Callees:
 *     sub_1400859B4 @ 0x1400859B4 (sub_1400859B4.c)
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140138090 @ 0x140138090 (sub_140138090.c)
 *     sub_140138324 @ 0x140138324 (sub_140138324.c)
 *     sub_14013AC30 @ 0x14013AC30 (sub_14013AC30.c)
 *     sub_14013B4D8 @ 0x14013B4D8 (sub_14013B4D8.c)
 *     sub_14013C334 @ 0x14013C334 (sub_14013C334.c)
 */

__int64 __fastcall sub_14013AAA4(__int64 a1, __int64 a2, char a3, char a4)
{
  int *v4; // rbp
  ULONG_PTR v6; // r14
  ULONG_PTR v7; // r15
  int v10; // edi
  __int64 v11; // r11
  __int64 v12; // r10
  bool v13; // cl
  __int64 v14; // r8
  const char *v15; // rdx
  __int64 v16; // r8
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(int **)a1;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *(_QWORD *)(a2 + 48);
  v19 = 0LL;
  v18 = 0;
  v10 = sub_1400859B4(v4, v6, &v19, &v18);
  if ( v10 >= 0 )
  {
    v12 = v19;
    v13 = !a3 && a4 != 0;
    *(_BYTE *)(v19 + 56) = -(a3 != 0) - 4;
    *(_BYTE *)(v12 + 57) = v13;
    v10 = sub_14013C334(v12, v18, v11, 2, *(_DWORD *)(v11 + 8), *(_DWORD *)(v11 + 4));
    if ( v10 >= 0 )
    {
      v10 = sub_140138090(v4, v6, v14, 0);
      if ( v10 >= 0 )
      {
        v15 = "StartTransaction";
        if ( !a3 )
          v15 = "EndTransaction";
        sub_1400859FC(v4, v15, 0, 0, 0LL, 0LL);
        v10 = sub_140138090(v4, v7, v16, 1);
        if ( v10 >= 0 )
        {
          sub_1400859B4(v4, v7, &v19, &v18);
          if ( !(unsigned int)sub_14013AC30(a1, v19, v18) )
            v10 = sub_14013B4D8(a1);
          _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
        }
      }
    }
  }
  sub_140138324(v4, v6, v7);
  return (unsigned int)v10;
}
