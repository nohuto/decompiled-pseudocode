/*
 * XREFs of sub_1400EE2AC @ 0x1400EE2AC
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_140053D10 @ 0x140053D10 (sub_140053D10.c)
 */

bool __fastcall sub_1400EE2AC(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+24h] [rbp-2Ch]
  __int128 v14; // [rsp+28h] [rbp-28h]
  __int128 v15; // [rsp+38h] [rbp-18h]

  v1 = qword_140168E40;
  v12 = 8;
  v3 = *(_QWORD *)(a1 + 128);
  v13 = 40;
  v14 = 0LL;
  v15 = 0LL;
  if ( (unsigned int)sub_140053D10(v3, 1, &v12) || (v14 & 1) == 0 || (v14 & 2) == 0 || (v14 & 4) == 0 || (v14 & 8) == 0 )
    return 0;
  if ( (v14 & 0x40) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1048);
    if ( v4 )
      *(_DWORD *)(v4 + 24) &= ~8u;
  }
  LODWORD(v14) = 0;
  v5 = 15;
  *(_QWORD *)((char *)&v15 + 4) = 0LL;
  HIDWORD(v15) = 0;
  v6 = *(_QWORD *)(a1 + 1048);
  v12 = 8;
  v13 = 40;
  if ( v6 && (*(_BYTE *)(v6 + 24) & 8) != 0 )
    v5 = 79;
  if ( *(_DWORD *)(a1 + 908) <= 1u )
  {
    *((_QWORD *)&v14 + 1) = 0LL;
  }
  else
  {
    HIDWORD(v14) = *(unsigned __int16 *)(a1 + 26);
    DWORD2(v14) = 1;
  }
  v7 = *(_QWORD *)(a1 + 128);
  DWORD1(v14) = v1[3];
  v8 = *(_QWORD *)(v7 + 584);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 128);
    v10 = *((_QWORD *)&v15 + 1);
    if ( v9 )
      v10 = v9;
    *((_QWORD *)&v15 + 1) = v10;
  }
  LODWORD(v15) = *(_DWORD *)(v7 + 1008);
  LODWORD(v14) = v5 | 0x100;
  return !(unsigned int)sub_140053D10(v7, 0, &v12);
}
