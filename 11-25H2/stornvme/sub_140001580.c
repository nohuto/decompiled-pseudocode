/*
 * XREFs of sub_140001580 @ 0x140001580
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_140001580(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // edi
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // r15d
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // r12
  unsigned __int8 v16; // r13
  int v17; // r15d
  __int64 v18; // rax
  int v19; // ecx
  __int16 v20; // dx
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax

  v6 = sub_140005000(a2);
  v7 = *(_QWORD *)(a1 + 1560);
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    v3 = *(unsigned int *)(v3 + 52);
    v8 = *(unsigned __int8 *)(v3 + v5 + 10);
  }
  else
  {
    v8 = *(unsigned __int8 *)(v3 + 7);
  }
  v9 = *(unsigned __int8 *)(v4 + 1);
  v10 = (unsigned __int8)v8;
  if ( (v9 & 0x80u) == 0 )
  {
    v3 = v9 & 0x1F;
    if ( (unsigned __int8)(v3 - 2) <= 1u )
    {
      v11 = *(_DWORD *)(v7 + 328);
      if ( (v11 & 2) != 0 && (_BYTE)v3 == 2 )
      {
        v12 = 2;
LABEL_13:
        *(_BYTE *)(v6 + 4225) = *(_BYTE *)(v6 + 4225) & 0xFC | 1;
        sub_1400042C0(a1, v5);
        v13 = *(_DWORD *)(v6 + 4136) & 0xFFFFFFF8;
        *(_BYTE *)(v6 + 4096) = -124;
        *(_DWORD *)(v6 + 4136) = ((v12 | v13) & 0xFFFFFFF7 ^ (v9 >> 2) & 8) & 0xFFFFFC0F;
        v14 = 0;
        *(_DWORD *)(v6 + 4140) = 0;
        *(_QWORD *)(v6 + 4192) = sub_140026230;
        return v14;
      }
      if ( (v11 & 1) != 0 && (_BYTE)v3 == 3 && (*(_DWORD *)(a1 + 56) & 0x80000) == 0 )
      {
        v12 = 4;
        goto LABEL_13;
      }
      if ( (*(_BYTE *)(v7 + 256) & 2) == 0 )
      {
        LOBYTE(v8) = 36;
        LOBYTE(v4) = 5;
        LOBYTE(v3) = 6;
        sub_140002330(v5, v3, v4, v8);
        return (unsigned int)-1056964602;
      }
      if ( (_BYTE)v3 != 31
        && (*(_DWORD *)(a1 + 212) <= 1u || (*(_BYTE *)(v7 + 524) & 2) == 0)
        && ((_BYTE)v3 != 3 || (*(_BYTE *)(v7 + 524) & 4) != 0) )
      {
        v14 = 0;
        v15 = a1 + 8LL * (unsigned __int8)v8;
        v16 = *(_BYTE *)(*(_QWORD *)(v15 + 1672) + 64LL);
        if ( (v9 & 0x1F) == 3 )
          v17 = 2;
        else
          v17 = (v9 & 0x1F) == 2;
        *(_BYTE *)(v6 + 4225) = *(_BYTE *)(v6 + 4225) & 0xFC | 1;
        sub_1400042C0(a1, v5);
        if ( v10 < *(_DWORD *)(a1 + 224) && (v18 = *(_QWORD *)(v15 + 1672)) != 0 )
          v19 = *(_DWORD *)(v18 + 16);
        else
          v19 = 0;
        v20 = *(_WORD *)(*(_QWORD *)(v15 + 1672) + 48LL);
        v21 = *(_QWORD *)(a1 + 1560);
        *(_BYTE *)(v6 + 4096) = 0x80;
        if ( (*(_BYTE *)(v21 + 524) & 2) != 0 )
          v19 = -1;
        *(_DWORD *)(v6 + 4100) = v19;
        v22 = *(_DWORD *)(v6 + 4136) ^ ((unsigned __int8)*(_DWORD *)(v6 + 4136) ^ v16) & 0xF;
        v23 = v22 | 0x10;
        v24 = v22 & 0xFFFFFFEF;
        if ( v20 )
          v23 = v24;
        *(_DWORD *)(v6 + 4136) = (v17 << 9) | v23 & 0xFFFFF01F;
        return v14;
      }
    }
  }
  LOBYTE(v8) = 36;
  LOBYTE(v4) = 5;
  LOBYTE(v3) = 6;
  sub_140002330(v5, v3, v4, v8);
  return 3238002694LL;
}
