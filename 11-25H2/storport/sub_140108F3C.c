/*
 * XREFs of sub_140108F3C @ 0x140108F3C
 * Callers:
 *     sub_140101C60 @ 0x140101C60 (sub_140101C60.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_140108F3C(__int64 a1, _BYTE *a2, char a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // r8
  int v10; // esi
  _QWORD *v11; // rcx
  char v12; // r9
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r8
  __int128 v22; // [rsp+30h] [rbp-10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+30h]
  __int64 v24; // [rsp+88h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 16);
  v22 = 0LL;
  v7 = 0;
  v8 = sub_1401225EC(v5);
  if ( v8 )
  {
    v7 = 16;
    v10 = sub_1400E736C(*(_QWORD *)(a1 + 16), 0x10u, v9, (void **)&v22, (_QWORD *)&v22 + 1, 0);
    if ( v10 >= 0 )
    {
      v11 = (_QWORD *)v22;
      v12 = a2[20];
      HIBYTE(v23) = *a2;
      BYTE6(v23) = a2[1];
      BYTE5(v23) = a2[2];
      BYTE4(v23) = a2[3];
      BYTE3(v23) = a2[4];
      BYTE2(v23) = a2[5];
      BYTE1(v23) = a2[6];
      LOBYTE(v23) = a2[7];
      HIBYTE(v24) = a2[8];
      BYTE6(v24) = a2[9];
      BYTE5(v24) = a2[10];
      BYTE4(v24) = a2[11];
      BYTE3(v24) = a2[12];
      BYTE2(v24) = a2[13];
      BYTE1(v24) = a2[14];
      LOBYTE(v24) = a2[15];
      *(_QWORD *)(v22 + 8) = v24;
      *v11 = v23;
      v13 = ((v12 & 1) + 2) << 30;
      v14 = (8 * a3) & 8;
      *(_DWORD *)(*(_QWORD *)v8 + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)v8 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v8 + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)v8 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v8 + 4192LL) = sub_1400E90F0;
      *(_QWORD *)(*(_QWORD *)v8 + 4200LL) = v8;
      *(_QWORD *)(*(_QWORD *)v8 + 4216LL) = a1;
      *(_OWORD *)(*(_QWORD *)v8 + 4160LL) = v22;
      *(_DWORD *)(*(_QWORD *)v8 + 4248LL) = 16;
      v15 = *(_QWORD *)v8;
      v16 = *(_DWORD *)(a1 + 56);
      v17 = *((_QWORD *)&v22 + 1);
      *(_BYTE *)(v15 + 4096) = 13;
      *(_DWORD *)(v15 + 4100) = v16;
      v18 = *(_DWORD *)(v15 + 4136);
      *(_QWORD *)(v15 + 4120) = v17;
      if ( v24 )
        v19 = v14 ^ (v13 & 0xFFFFFFF0 | v18 & 0x3FFFFFF0);
      else
        v19 = v14 ^ (v13 & 0xFFFFFFF1 | v18 & 0x3FFFFFF1) | 1;
      *(_DWORD *)(v15 + 4136) = v19;
      v10 = sub_1400BD378(*(PVOID *)(a1 + 16), v8);
    }
  }
  else
  {
    v10 = -1073741670;
  }
  sub_140122C20(*(_QWORD *)(a1 + 16), v8);
  if ( (_QWORD)v22 )
    sub_1400F5FEC(*(_QWORD *)(a1 + 16), v7, v20, v22, *((__int64 *)&v22 + 1));
  return (unsigned int)v10;
}
