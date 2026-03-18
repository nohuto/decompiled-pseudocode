/*
 * XREFs of sub_140025944 @ 0x140025944
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 *     sub_140025B40 @ 0x140025B40 (sub_140025B40.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_1400066B0 @ 0x1400066B0 (sub_1400066B0.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140025944(__int64 a1, __int64 a2, unsigned __int8 a3, __int16 a4, unsigned int a5)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  int v12; // r12d
  __int64 v13; // rsi
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  unsigned int v18; // [rsp+80h] [rbp+28h]

  v5 = a5;
  v6 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v10 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v10 = *(_BYTE *)(a2 + 7);
  if ( (unsigned int)v10 < *(_DWORD *)(a1 + 224) && (v11 = *(_QWORD *)(a1 + 8LL * v10 + 1672)) != 0 )
    v12 = *(_DWORD *)(v11 + 16);
  else
    v12 = 0;
  v13 = sub_140005000(a2);
  if ( a5 <= 0x30 )
    v5 = 48;
  if ( *(_QWORD *)(v13 + 4160) )
  {
    v14 = *(_DWORD *)(v13 + 4208);
    if ( v14 >= v5 )
    {
      *(_BYTE *)(v13 + 4225) = *(_BYTE *)(v13 + 4225) & 0xFC | 2;
      sub_1400042C0(a1, a2);
      v15 = *(_QWORD *)(v13 + 4168);
      LOWORD(v18) = a3;
      *(_DWORD *)(v13 + 4140) = *(_DWORD *)(v13 + 4140) & 0xFFFFFFFE | (*(unsigned __int8 *)(a1 + 4016) >> 3) & 1;
      HIWORD(v18) = a4;
      *(_BYTE *)(v13 + 4096) = 14;
      *(_DWORD *)(v13 + 4100) = v12;
      *(_DWORD *)(v13 + 4136) = (v5 >> 2) - 1;
      sub_1400066B0(a1, v13, v15, v5);
      *(_BYTE *)(v13 + 4225) |= 4u;
      *(_QWORD *)(v13 + 4192) = sub_140025B40;
      *(_QWORD *)(v13 + 4200) = v18;
      return v6;
    }
    sub_14000CF50(a1, v14, (__int64 *)(v13 + 4160), *(_QWORD *)(v13 + 4168));
    *(_DWORD *)(v13 + 4208) = 0;
  }
  sub_140006100(a1, v5);
  v6 = -1056964605;
  *(_BYTE *)(a2 + 3) = 38;
  return v6;
}
