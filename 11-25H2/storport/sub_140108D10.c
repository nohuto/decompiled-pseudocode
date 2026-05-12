/*
 * XREFs of sub_140108D10 @ 0x140108D10
 * Callers:
 *     sub_140101C60 @ 0x140101C60 (sub_140101C60.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_140108D10(__int64 a1, _BYTE *a2, char a3, unsigned __int8 a4)
{
  __int64 v5; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // r8
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h]

  v5 = *(_QWORD *)(a1 + 16);
  v19 = 0LL;
  v9 = 0;
  v10 = sub_1401225EC(v5);
  if ( v10 )
  {
    v9 = 16;
    v12 = sub_1400E736C(*(_QWORD *)(a1 + 16), 0x10u, v11, (void **)&v19, (_QWORD *)&v19 + 1, 0);
    if ( v12 >= 0 )
    {
      v13 = v19;
      HIBYTE(v20) = *a2;
      BYTE6(v20) = a2[1];
      BYTE5(v20) = a2[2];
      BYTE4(v20) = a2[3];
      BYTE3(v20) = a2[4];
      BYTE2(v20) = a2[5];
      BYTE1(v20) = a2[6];
      LOBYTE(v20) = a2[7];
      HIBYTE(v18) = a2[8];
      BYTE6(v18) = a2[9];
      BYTE5(v18) = a2[10];
      BYTE4(v18) = a2[11];
      BYTE3(v18) = a2[12];
      BYTE2(v18) = a2[13];
      BYTE1(v18) = a2[14];
      LOBYTE(v18) = a2[15];
      *(_QWORD *)v19 = v20;
      *(_QWORD *)(v13 + 8) = v18;
      *(_DWORD *)(*(_QWORD *)v10 + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)v10 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v10 + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)v10 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v10 + 4192LL) = sub_1400E90F0;
      *(_QWORD *)(*(_QWORD *)v10 + 4200LL) = v10;
      *(_QWORD *)(*(_QWORD *)v10 + 4216LL) = a1;
      *(_OWORD *)(*(_QWORD *)v10 + 4160LL) = v19;
      *(_DWORD *)(*(_QWORD *)v10 + 4248LL) = 16;
      v14 = *(_QWORD *)v10 + 4096LL;
      v15 = *((_QWORD *)&v19 + 1);
      *(_DWORD *)(v14 + 4) = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(v14 + 41) = a3;
      LODWORD(v13) = *(_DWORD *)(v14 + 40) & 0xFFFFFFF7;
      *(_BYTE *)v14 = 17;
      *(_QWORD *)(v14 + 24) = v15;
      *(_DWORD *)(v14 + 40) = v13 ^ (a4 ^ (unsigned __int8)v13) & 7;
      v12 = sub_1400BD378(*(PVOID *)(a1 + 16), v10);
    }
  }
  else
  {
    v12 = -1073741670;
  }
  sub_140122C20(*(_QWORD *)(a1 + 16), v10);
  if ( (_QWORD)v19 )
    sub_1400F5FEC(*(_QWORD *)(a1 + 16), v9, v16, v19, *((__int64 *)&v19 + 1));
  return (unsigned int)v12;
}
