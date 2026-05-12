/*
 * XREFs of sub_1400E3C30 @ 0x1400E3C30
 * Callers:
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 * Callees:
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 */

_QWORD *__fastcall sub_1400E3C30(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        int a9,
        unsigned __int16 a10,
        unsigned __int16 a11,
        __int64 a12,
        __int64 a13,
        _QWORD *a14)
{
  unsigned int v16; // r10d
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  int v22; // eax
  char v23; // al
  __int16 v24; // ax
  char v25; // cl
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rax
  _QWORD *result; // rax
  signed __int32 v30[18]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a4 + 2) == 40 && (v16 = *(_DWORD *)(a4 + 56)) != 0 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      v18 = *(unsigned int *)(a4 + 4 * v17 + 120);
      if ( (unsigned int)v18 >= 0x80 && (unsigned int)v18 < *(_DWORD *)(a4 + 16) )
      {
        v19 = a4 + v18;
        if ( *(_DWORD *)(a4 + v18) == 67 )
          break;
      }
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= v16 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v19 = 0LL;
  }
  *(_WORD *)(v19 + 18) = a11;
  v20 = v19 + 16;
  *(_QWORD *)(a3[3] + 16LL * a10) = v20;
  v21 = a3[4] + ((unsigned __int64)a11 << 7);
  *(_QWORD *)(v21 + 24) = a4;
  if ( a8 )
    v22 = *(_DWORD *)(a8 + 56);
  else
    v22 = -1;
  *(_DWORD *)(v21 + 80) = v22;
  *(_QWORD *)(v21 + 32) = a12;
  *(_QWORD *)(v21 + 40) = a13;
  *(_WORD *)(v21 + 56) = a10;
  *(_DWORD *)(v21 + 48) = *(_DWORD *)(a4 + 60);
  v23 = *(_BYTE *)(v21 + 60);
  if ( a5 )
  {
    *(_BYTE *)(v21 + 60) = v23 | 0x40;
  }
  else
  {
    *(_BYTE *)(v21 + 60) = v23 & 0xBF;
    if ( a8 )
      v24 = *(_WORD *)(a8 + 416);
    else
      v24 = *(_WORD *)(a1 + 1092);
    *(_WORD *)(v21 + 58) = v24;
    *(_QWORD *)(v21 + 64) = **(_QWORD **)(*(_QWORD *)(a3[11] + 1272LL) + 40LL);
  }
  if ( a6 || !a7 )
    v25 = 2;
  else
    v25 = 0;
  v26 = *(_QWORD *)(v21 + 16);
  *(_BYTE *)(v21 + 60) = v25 | *(_BYTE *)(v21 + 60) & 0xFD;
  v27 = v26 + 48;
  sub_140017C40(v26 + 48, v20, 0, 0LL);
  *(_BYTE *)(v26 + 64) = *(_BYTE *)(v26 + 64) & 0xE3 | 4;
  *(_QWORD *)(v26 + 232) = *(_QWORD *)(a4 + 64);
  *(_QWORD *)(v26 + 216) = a4;
  *(_QWORD *)(v26 + 208) = a7;
  if ( a7 )
    v28 = *(_QWORD *)(a7 + 8);
  else
    v28 = 0LL;
  *(_BYTE *)(v26 + 65) |= 0x20u;
  *(_QWORD *)(v26 + 152) = v28;
  *(_DWORD *)(v26 + 68) = a9;
  *(_QWORD *)(v26 + 832) = a2;
  *(_QWORD *)(v26 + 264) = a1;
  *(_WORD *)(v26 + 828) = a10;
  *(_WORD *)(v26 + 830) = a11;
  *(_DWORD *)(a4 + 24) |= 0x100u;
  *(_QWORD *)(a4 + 96) = v27;
  *(_DWORD *)(a4 + 40) = 10;
  sub_1400161E0((int *)a1, a4, v26 + 1184);
  KeInitializeEvent((PRKEVENT)(v26 + 712), NotificationEvent, 0);
  *(_QWORD *)(v26 + 704) = sub_1400DCCE0;
  _InterlockedOr(v30, 0);
  *(_BYTE *)(v21 + 60) |= 1u;
  result = a14;
  *a14 = v27;
  return result;
}
