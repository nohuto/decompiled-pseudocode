/*
 * XREFs of sub_1401896FC @ 0x1401896FC
 * Callers:
 *     sub_140063854 @ 0x140063854 (sub_140063854.c)
 * Callees:
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C4D68 @ 0x1400C4D68 (sub_1400C4D68.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_1401896FC(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // edi
  __int64 v7; // rsi
  char v8; // r12
  __int64 v9; // rcx
  int v10; // ecx
  char v11; // al
  unsigned int v12; // ebx
  char v13; // al
  char v14; // r9
  char v15; // r8
  __int64 v17; // [rsp+28h] [rbp-41h]
  _OWORD Dst[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+1Fh]
  unsigned int v20; // [rsp+8Ch] [rbp+23h]
  int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  int v22; // [rsp+E0h] [rbp+77h] BYREF

  LOBYTE(v3) = 0;
  v7 = 0LL;
  v8 = 0;
  memset_0(Dst, 0, 0x40uLL);
  v22 = 0;
  *a3 = 0LL;
  if ( !sub_140056088(a1) )
  {
    v21 = -1073741637;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x1Cu )
  {
    v21 = -1073741585;
    goto LABEL_17;
  }
  v7 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v7 != 1
    || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) < 0x14u
    || *(_BYTE *)(*(_QWORD *)(a2 + 24) + 25LL)
    || *(_BYTE *)(*(_QWORD *)(a2 + 24) + 24LL) && !*(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL) )
  {
    v21 = -1073741811;
    goto LABEL_17;
  }
  v8 = 1;
  v21 = sub_1400C4F10(v9);
  if ( v21 < 0 )
    goto LABEL_17;
  v10 = *(_BYTE *)(v7 + 16) & 1;
  LODWORD(Dst[0]) = Dst[0] & 0xFFFFFF00 | 9;
  v19 = v19 & 0xFFFFFF00 | 0xD1;
  v11 = *(_BYTE *)(v7 + 12);
  v20 = v20 & 0xFFFFFFE0 | *(_BYTE *)(v7 + 17) & 0xF | (16 * v10);
  BYTE1(v20) = v11;
  v21 = sub_140187D84(a1, 0LL, 0LL, 0, Dst, v17, 0, 1, 0, 0LL, &v22);
  v12 = v21;
  if ( v21 < 0 )
  {
LABEL_17:
    sub_140067EAC(v22, &v21);
    v12 = v21;
    if ( !v8 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !*(_BYTE *)(v7 + 17) )
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) = *(_BYTE *)(v7 + 16) != 0;
  v13 = *(_BYTE *)(a1 + 111);
  if ( (v13 & 2) == 0 )
    *(_BYTE *)(a1 + 111) = v13 | 2;
LABEL_18:
  sub_1400C4FBC(a1);
LABEL_19:
  if ( v7 )
  {
    v14 = *(_BYTE *)(v7 + 17);
    v15 = *(_BYTE *)(v7 + 16);
    v3 = *(_DWORD *)(v7 + 12);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  sub_1400C4D68(a1, v3, v15, v14, v22, v12);
  return v12;
}
