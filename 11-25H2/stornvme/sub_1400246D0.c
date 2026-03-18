/*
 * XREFs of sub_1400246D0 @ 0x1400246D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_1400246D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // r8d
  char v9; // r9
  __int64 v10; // rbp
  _DWORD *v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rdx
  char v14; // cl
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // cl
  char v19; // cl
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v24; // [rsp+C0h] [rbp+8h] BYREF

  v4 = sub_140005000(a2);
  v24 = 0LL;
  v5 = v4;
  v6 = *(unsigned int *)(v4 + 4208);
  v7 = sub_14000B900(a2, &v24);
  v10 = v7;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    v12 = (_QWORD *)(v5 + 4160);
    goto LABEL_25;
  }
  v11 = v24;
  if ( v8 )
  {
    if ( (unsigned int)v6 < 0x200 || *v24 < (unsigned int)v6 || *(_BYTE *)(a1 + 20) != v9 )
      goto LABEL_23;
    v21 = *(_QWORD *)(v5 + 4160);
    v20 = v6;
    v22 = v7;
LABEL_22:
    LOBYTE(v7) = sub_140032980(v22, v21, v20);
LABEL_23:
    *v11 = v6;
    v12 = (_QWORD *)(v5 + 4160);
    goto LABEL_27;
  }
  if ( *(_BYTE *)(a1 + 20) == v9 )
  {
    LODWORD(v7) = *v24;
    if ( (*v24 & 3) != 0 )
    {
      if ( !(_DWORD)v7 )
        goto LABEL_10;
      LOBYTE(v7) = sub_140032C80(v10, 0LL, (unsigned int)*v24);
    }
    else
    {
      LODWORD(v7) = (unsigned int)v7 >> 2;
      if ( !(_DWORD)v7 )
        goto LABEL_10;
      LOBYTE(v7) = sub_140032C80(v10, 0LL, 4LL * (unsigned int)v7);
    }
    v9 = 0;
  }
LABEL_10:
  v12 = (_QWORD *)(v5 + 4160);
  v13 = *(_QWORD *)(v5 + 4160);
  if ( (unsigned int)v6 >= 0x200 )
  {
    v14 = *(_BYTE *)(v13 + 5);
    if ( *(_BYTE *)(a1 + 20) == v9 )
    {
      *(_BYTE *)(v10 + 7) = v14;
      *(_BYTE *)(v10 + 6) = *(_BYTE *)(v13 + 6);
      *(_BYTE *)(v10 + 5) = *(_BYTE *)(v13 + 7);
      *(_BYTE *)(v10 + 9) = *(_BYTE *)(v13 + 8);
      *(_BYTE *)(v10 + 8) = *(_BYTE *)(v13 + 9);
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v13 + 10);
      *(_BYTE *)(v10 + 10) = *(_BYTE *)(v13 + 11);
      *(_BYTE *)(v10 + 13) = *(_BYTE *)(v13 + 12);
      *(_BYTE *)(v10 + 12) = *(_BYTE *)(v13 + 13);
      *(_BYTE *)(v10 + 17) = *(_BYTE *)(v13 + 16);
      *(_BYTE *)(v10 + 16) = *(_BYTE *)(v13 + 17);
      *(_BYTE *)(v10 + 15) = *(_BYTE *)(v13 + 18);
      *(_BYTE *)(v10 + 14) = *(_BYTE *)(v13 + 19);
      *(_BYTE *)(v10 + 382) = *(_BYTE *)(v13 + 382);
      LOBYTE(v7) = *(_BYTE *)(v13 + 383);
      *(_BYTE *)(v10 + 383) = v7;
      *(_OWORD *)(v10 + 384) = *(_OWORD *)(v13 + 384);
      *(_OWORD *)(v10 + 400) = *(_OWORD *)(v13 + 400);
      *(_OWORD *)(v10 + 416) = *(_OWORD *)(v13 + 416);
      *(_OWORD *)(v10 + 432) = *(_OWORD *)(v13 + 432);
      *(_OWORD *)(v10 + 448) = *(_OWORD *)(v13 + 448);
      *(_OWORD *)(v10 + 464) = *(_OWORD *)(v13 + 464);
      *(_OWORD *)(v10 + 480) = *(_OWORD *)(v13 + 480);
      *(_OWORD *)(v10 + 496) = *(_OWORD *)(v13 + 496);
    }
    else
    {
      *(_BYTE *)(v13 + 5) = *(_BYTE *)(v13 + 7);
      v15 = *(_BYTE *)(v13 + 9);
      *(_BYTE *)(v13 + 7) = v14;
      v16 = *(_BYTE *)(v13 + 8);
      *(_BYTE *)(v13 + 8) = v15;
      v17 = *(_BYTE *)(v13 + 11);
      *(_BYTE *)(v13 + 9) = v16;
      v18 = *(_BYTE *)(v13 + 10);
      *(_BYTE *)(v13 + 10) = v17;
      LOBYTE(v7) = *(_BYTE *)(v13 + 13);
      *(_BYTE *)(v13 + 11) = v18;
      v19 = *(_BYTE *)(v13 + 12);
      *(_BYTE *)(v13 + 12) = v7;
      *(_BYTE *)(v13 + 13) = v19;
    }
    if ( (unsigned int)v6 <= 0x200 || *v11 < (unsigned int)v6 || *(_BYTE *)(a1 + 20) != v9 )
      goto LABEL_23;
    v20 = (unsigned int)(v6 - 512);
    v21 = v13 + 512;
    v22 = v10 + 512;
    goto LABEL_22;
  }
LABEL_25:
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
    LOBYTE(v7) = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
LABEL_27:
  if ( !*(_BYTE *)(a1 + 20) )
    LOBYTE(v7) = sub_14000CF50(a1, *(unsigned int *)(v5 + 4208), (__int64 *)(v5 + 4160), *(_QWORD *)(v5 + 4168));
  *(_BYTE *)(v5 + 4225) |= 8u;
  *(_DWORD *)(v5 + 4208) = 0;
  *v12 = 0LL;
  return v7;
}
