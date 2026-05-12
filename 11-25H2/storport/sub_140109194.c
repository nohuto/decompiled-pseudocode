/*
 * XREFs of sub_140109194 @ 0x140109194
 * Callers:
 *     sub_140101C60 @ 0x140101C60 (sub_140101C60.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_140109194(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+30h]
  __int64 v17; // [rsp+88h] [rbp+48h]

  v3 = *(_QWORD *)(a1 + 16);
  v15 = 0LL;
  v5 = 0;
  v6 = sub_1401225EC(v3);
  if ( v6 )
  {
    v5 = 16;
    v8 = sub_1400E736C(*(_QWORD *)(a1 + 16), 0x10u, v7, (void **)&v15, (_QWORD *)&v15 + 1, 0);
    if ( v8 >= 0 )
    {
      v9 = v15;
      HIBYTE(v16) = *a2;
      BYTE6(v16) = a2[1];
      BYTE5(v16) = a2[2];
      BYTE4(v16) = a2[3];
      BYTE3(v16) = a2[4];
      BYTE2(v16) = a2[5];
      BYTE1(v16) = a2[6];
      LOBYTE(v16) = a2[7];
      HIBYTE(v17) = a2[8];
      BYTE6(v17) = a2[9];
      BYTE5(v17) = a2[10];
      BYTE4(v17) = a2[11];
      BYTE3(v17) = a2[12];
      BYTE2(v17) = a2[13];
      BYTE1(v17) = a2[14];
      LOBYTE(v17) = a2[15];
      *(_QWORD *)v15 = v16;
      *(_QWORD *)(v9 + 8) = v17;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)v6 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v6 + 4192LL) = sub_1400E90F0;
      *(_QWORD *)(*(_QWORD *)v6 + 4200LL) = v6;
      *(_QWORD *)(*(_QWORD *)v6 + 4216LL) = a1;
      *(_OWORD *)(*(_QWORD *)v6 + 4160LL) = v15;
      *(_DWORD *)(*(_QWORD *)v6 + 4248LL) = 16;
      v10 = *(_QWORD *)v6;
      v11 = *((_QWORD *)&v15 + 1);
      *(_DWORD *)(v10 + 4100) = *(_DWORD *)(a1 + 56);
      v12 = *(_DWORD *)(v10 + 4136) & 0x3FFFFFF0;
      *(_QWORD *)(v10 + 4120) = v11;
      *(_BYTE *)(v10 + 4096) = 13;
      *(_DWORD *)(v10 + 4136) = v12 | 2;
      v8 = sub_1400BD378(*(PVOID *)(a1 + 16), v6);
    }
  }
  else
  {
    v8 = -1073741670;
  }
  sub_140122C20(*(_QWORD *)(a1 + 16), v6);
  if ( (_QWORD)v15 )
    sub_1400F5FEC(*(_QWORD *)(a1 + 16), v5, v13, v15, *((__int64 *)&v15 + 1));
  return (unsigned int)v8;
}
