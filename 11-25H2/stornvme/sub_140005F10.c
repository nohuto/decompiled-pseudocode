/*
 * XREFs of sub_140005F10 @ 0x140005F10
 * Callers:
 *     sub_14000CFB0 @ 0x14000CFB0 (sub_14000CFB0.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 */

__int64 __fastcall sub_140005F10(__int64 a1, __int64 a2)
{
  bool v3; // zf
  _DWORD *v5; // rbx
  unsigned int v6; // eax
  _DWORD *v7; // rsi
  _OWORD *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 result; // rax
  unsigned int v15; // r14d
  __int64 v16; // [rsp+108h] [rbp+10h] BYREF
  __int64 v17; // [rsp+110h] [rbp+18h] BYREF

  v3 = *(_BYTE *)(a2 + 2) == 40;
  v16 = 0LL;
  v17 = 0LL;
  if ( v3 )
    v5 = *(_DWORD **)(a2 + 64);
  else
    v5 = *(_DWORD **)(a2 + 24);
  v6 = v5[12];
  if ( v6 < 0x10 || (v7 = (_DWORD *)((char *)v5 + (unsigned int)v5[11]), *v7 == 2) && v7[1] >= 0x18u && v6 < 0x18 )
  {
    v5[5] = 3;
    v15 = -1056964602;
    *(_BYTE *)(a2 + 3) = 21;
  }
  else
  {
    sub_140006100(a1, 512LL, &v16, &v17);
    if ( v16 )
    {
      v9 = sub_140005000(a2);
      v10 = 4LL;
      do
      {
        *v8 = 0LL;
        v8[1] = 0LL;
        v8[2] = 0LL;
        v8[3] = 0LL;
        v8[4] = 0LL;
        v8[5] = 0LL;
        v8[6] = 0LL;
        v8 += 8;
        *(v8 - 1) = 0LL;
        --v10;
      }
      while ( v10 );
      *(_BYTE *)(v9 + 4225) |= 3u;
      sub_1400042C0(a1, a2);
      v11 = v17;
      v12 = *(_QWORD *)(a1 + 1560);
      *(_BYTE *)(v9 + 4136) = 3;
      v13 = *(_DWORD *)(v9 + 4136) & 0xF07F7FFF;
      *(_BYTE *)(v9 + 4096) = 2;
      *(_DWORD *)(v9 + 4100) = -1;
      *(_DWORD *)(v9 + 4136) = v13 | 0x7F0000;
      if ( (v11 & 0xFFF) == 0 )
      {
        *(_QWORD *)(v9 + 4120) = v11;
        *(_QWORD *)(v9 + 4128) = 0LL;
      }
      *(_WORD *)(v9 + 4142) = 0;
      if ( (*(_BYTE *)(v12 + 261) & 4) != 0 )
      {
        *(_DWORD *)(v9 + 4138) = 127;
        *(_QWORD *)(v9 + 4144) = 0LL;
      }
      *(_BYTE *)(v9 + 4225) |= 4u;
      *(_QWORD *)(v9 + 4192) = sub_14000CC70;
      result = 0LL;
      *(_QWORD *)(v9 + 4160) = v16;
      *(_QWORD *)(v9 + 4168) = v17;
      *(_DWORD *)(v9 + 4208) = 512;
      return result;
    }
    *(_BYTE *)(a2 + 3) = 4;
    v15 = -1056964605;
    v5[5] = 1;
  }
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
  return v15;
}
