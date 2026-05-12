/*
 * XREFs of sub_140135DCC @ 0x140135DCC
 * Callers:
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 *     sub_14013A898 @ 0x14013A898 (sub_14013A898.c)
 * Callees:
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_1400859B4 @ 0x1400859B4 (sub_1400859B4.c)
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_1400860EC @ 0x1400860EC (sub_1400860EC.c)
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_140137D80 @ 0x140137D80 (sub_140137D80.c)
 *     sub_140138090 @ 0x140138090 (sub_140138090.c)
 *     sub_14013839C @ 0x14013839C (sub_14013839C.c)
 */

__int64 __fastcall sub_140135DCC(__int64 a1, __int64 a2)
{
  int *v2; // rsi
  int v5; // r12d
  int v6; // edx
  int v7; // r8d
  int v8; // ebx
  _WORD *v9; // rbx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG_PTR v13; // r15
  __int64 v14; // r8
  __int64 v15; // rbx
  char v18[8]; // [rsp+30h] [rbp-38h] BYREF
  char v19[8]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v21; // [rsp+48h] [rbp-20h] BYREF
  _WORD *v22; // [rsp+50h] [rbp-18h] BYREF
  __int64 v23; // [rsp+58h] [rbp-10h] BYREF
  __int16 v24; // [rsp+B0h] [rbp+48h] BYREF
  __int16 v25; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp+58h] BYREF
  int v27; // [rsp+C8h] [rbp+60h] BYREF

  v2 = *(int **)a1;
  v22 = 0LL;
  v23 = 0LL;
  v26 = 0;
  v20 = 0LL;
  v5 = 4;
  v21 = 0LL;
  sub_14013839C(v2, a2 + 40, a2 + 48);
  v7 = *(unsigned __int16 *)(a2 + 24);
  if ( !(_WORD)v7 )
  {
    v7 = *(unsigned __int16 *)(a1 + 28);
    *(_WORD *)(a2 + 24) = v7;
  }
  LOBYTE(v6) = 2;
  v8 = sub_140137D80(*(_QWORD *)a1, v6, v7, 512, (__int64)&v20, (__int64)&v21);
  if ( v8 >= 0 )
  {
    sub_1400859B4(v2, v20, &v22, &v26);
    if ( v26 >= 8 )
    {
      v25 = *(_WORD *)(a2 + 24);
      sub_1401352EC((char *)&v25, 2u);
      v9 = v22;
      v27 = v10;
      *v22 = v25;
      sub_1401352EC((char *)&v27, 4u);
      v11 = v20;
      *((_DWORD *)v9 + 1) = v27;
      v8 = sub_140138090(v2, v11, v12, 0LL);
    }
    else
    {
      v8 = -1073741789;
    }
  }
  if ( v8 >= 0 )
  {
    v13 = v21;
    while ( 1 )
    {
      sub_1400859FC(v2, "ResetStack", 0, 0, 0LL, 0LL);
      v8 = sub_14008562C((__int64)v2, v13, v14);
      if ( v8 < 0 )
        break;
      sub_1400859B4(v2, v13, &v23, &v26);
      if ( v26 < 0x10 )
        goto LABEL_19;
      v15 = v23;
      *(_DWORD *)v18 = *(_DWORD *)(v23 + 4);
      sub_1401352EC(v18, 4u);
      if ( *(_DWORD *)v18 != 2 )
        goto LABEL_19;
      v24 = *(_WORD *)(v15 + 10);
      sub_1401352EC((char *)&v24, 2u);
      if ( v24 == 4 )
      {
        *(_DWORD *)v19 = *(_DWORD *)(v15 + 12);
        sub_1401352EC(v19, 4u);
        if ( !*(_DWORD *)v19 )
        {
          v8 = 0;
LABEL_18:
          _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
          break;
        }
LABEL_19:
        v8 = -1073741435;
        break;
      }
      if ( v24 )
        goto LABEL_19;
      v8 = 259;
      sub_1400860EC(v2, v13);
      if ( !v5-- )
        goto LABEL_18;
    }
  }
  sub_14013839C(v2, &v20, &v21);
  return (unsigned int)v8;
}
