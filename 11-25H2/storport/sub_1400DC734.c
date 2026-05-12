/*
 * XREFs of sub_1400DC734 @ 0x1400DC734
 * Callers:
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 */

char __fastcall sub_1400DC734(__int64 a1, char a2, _WORD *a3, _WORD *a4)
{
  char v4; // di
  _WORD *v5; // r11
  unsigned int *v6; // r10
  int v10; // esi
  int v11; // r9d
  unsigned __int16 v12; // r8
  __int16 v13; // cx
  unsigned __int16 v14; // cx
  __int64 v15; // r9
  unsigned int v16; // r10d
  int v17; // ecx
  unsigned __int16 i; // ax
  unsigned int v19; // edx
  unsigned __int16 v20; // r8
  __int64 v21; // rax
  __int16 v22; // ax

  v4 = 0;
  v5 = (_WORD *)(a1 + 142);
  v6 = (unsigned int *)(a1 + 124);
  if ( !a2
    && ((v10 = *(unsigned __int16 *)(a1 + 140), v11 = (unsigned __int16)*v5, !(_WORD)v10) && v11 == *v6 - 1
     || v10 == v11 + 1
     || (v12 = *(_WORD *)(a1 + 150)) != 0
     && ((v13 = v10 - v11, (unsigned __int16)v11 < (unsigned __int16)v10)
       ? (v14 = v13 - 1)
       : (v14 = *(_WORD *)v6 - 1 + v13),
         v14 <= v12)) )
  {
    sub_1400A870C(
      *(_QWORD *)(a1 + 88),
      1,
      3,
      (__int64)L"Queue full",
      L"QueueId",
      *(_WORD *)(a1 + 136),
      L"QueueSize",
      *v6,
      L"QueueHead",
      v10,
      L"QueueTail",
      *v5,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
  }
  else
  {
    v15 = (unsigned __int16)*v5;
    v16 = *v6;
    v17 = (unsigned __int16)(v15 + 1);
    *v5 = v17;
    if ( v17 == v16 )
      *v5 = 0;
    for ( i = *(_WORD *)(a1 + 144); ; ++i )
    {
      v19 = i;
      if ( i >= v16 )
        break;
      v20 = i + 1;
      if ( !*(_QWORD *)(((unsigned __int64)i << 7) + *(_QWORD *)(a1 + 32) + 24) )
      {
LABEL_22:
        *(_WORD *)(a1 + 144) = v20;
        if ( v20 == *(_DWORD *)(a1 + 124) )
          *(_WORD *)(a1 + 144) = 0;
        v21 = *(_QWORD *)(a1 + 24);
        *a3 = v15;
        *a4 = v19;
        v4 = 1;
        *(_WORD *)(v21 + 16 * v15 + 8) = v19;
        *(_QWORD *)(((unsigned __int64)v19 << 7) + *(_QWORD *)(a1 + 32) + 24) = -1LL;
        return v4;
      }
    }
    LOWORD(v19) = 0;
    while ( (unsigned __int16)v19 < *(_WORD *)(a1 + 144) )
    {
      v20 = v19 + 1;
      if ( !*(_QWORD *)(((unsigned __int64)(unsigned __int16)v19 << 7) + *(_QWORD *)(a1 + 32) + 24) )
      {
        v19 = (unsigned __int16)v19;
        goto LABEL_22;
      }
      LOWORD(v19) = v19 + 1;
    }
    sub_1400A870C(
      *(_QWORD *)(a1 + 88),
      1,
      3,
      (__int64)L"No available CmdId",
      L"QueueId",
      *(_WORD *)(a1 + 136),
      L"QueueSize",
      *(_DWORD *)(a1 + 124),
      L"QueueHead",
      *(_WORD *)(a1 + 140),
      L"QueueTail",
      *(_WORD *)(a1 + 142),
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    v22 = *(_WORD *)(a1 + 142);
    if ( !v22 )
      v22 = *(_WORD *)(a1 + 124);
    *(_WORD *)(a1 + 142) = v22 - 1;
  }
  return v4;
}
