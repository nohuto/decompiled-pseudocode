/*
 * XREFs of sub_1401093A0 @ 0x1401093A0
 * Callers:
 *     sub_140101C60 @ 0x140101C60 (sub_140101C60.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1401093A0(__int64 a1, _BYTE *a2, char a3, unsigned __int8 a4)
{
  __int64 v5; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // r8
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 16);
  v18 = 0LL;
  v9 = 0;
  v10 = sub_1401225EC(v5);
  if ( v10 )
  {
    v9 = 8;
    v12 = sub_1400E736C(*(_QWORD *)(a1 + 16), 8u, v11, (void **)&v18, (_QWORD *)&v18 + 1, 0);
    if ( v12 >= 0 )
    {
      HIBYTE(v19) = *a2;
      BYTE6(v19) = a2[1];
      BYTE5(v19) = a2[2];
      BYTE4(v19) = a2[3];
      BYTE3(v19) = a2[4];
      BYTE2(v19) = a2[5];
      BYTE1(v19) = a2[6];
      LOBYTE(v19) = a2[7];
      *(_QWORD *)v18 = v19;
      *(_DWORD *)(*(_QWORD *)v10 + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)v10 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v10 + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)v10 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v10 + 4192LL) = sub_1400E90F0;
      *(_QWORD *)(*(_QWORD *)v10 + 4200LL) = v10;
      *(_QWORD *)(*(_QWORD *)v10 + 4216LL) = a1;
      *(_OWORD *)(*(_QWORD *)v10 + 4160LL) = v18;
      *(_DWORD *)(*(_QWORD *)v10 + 4248LL) = 8;
      v13 = *((_QWORD *)&v18 + 1);
      v14 = *(_QWORD *)v10 + 4096LL;
      *(_DWORD *)(v14 + 4) = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(v14 + 41) = a3;
      v15 = *(_DWORD *)(v14 + 40) & 0xFFFFFFF7;
      *(_QWORD *)(v14 + 24) = v13;
      *(_BYTE *)v14 = 21;
      *(_DWORD *)(v14 + 40) = v15 ^ (a4 ^ (unsigned __int8)v15) & 7;
      v12 = sub_1400BD378(*(PVOID *)(a1 + 16), v10);
    }
  }
  else
  {
    v12 = -1073741670;
  }
  sub_140122C20(*(_QWORD *)(a1 + 16), v10);
  if ( (_QWORD)v18 )
    sub_1400F5FEC(*(_QWORD *)(a1 + 16), v9, v16, v18, *((__int64 *)&v18 + 1));
  return (unsigned int)v12;
}
