/*
 * XREFs of sub_140089BB4 @ 0x140089BB4
 * Callers:
 *     sub_1400667DC @ 0x1400667DC (sub_1400667DC.c)
 *     sub_14009C7D0 @ 0x14009C7D0 (sub_14009C7D0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140089BB4(__int64 a1, __int64 a2, __int64 *a3, unsigned int *a4, _BYTE *a5, _BYTE *a6)
{
  __int64 v6; // r14
  _DWORD *v8; // r10
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // r12
  unsigned int v12; // ebx
  unsigned __int8 v13; // bp
  _DWORD *v14; // r15
  __int64 v15; // r13
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned int Size; // [rsp+60h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 64);
  v8 = *(_DWORD **)(a2 + 24);
  v9 = 0LL;
  v10 = 0;
  *a5 = 0;
  *a6 = 0;
  if ( *(_DWORD *)v6 == 1431193940 )
    v11 = *(_QWORD *)(v6 + 24);
  else
    v11 = v6;
  if ( *(_DWORD *)v6 != 1431193940 )
    v6 = 0LL;
  if ( *v8 == 49 || *v8 == 50 )
  {
    v13 = 0;
  }
  else
  {
    if ( (unsigned int)(*v8 - 67) >= 2 )
    {
      v12 = -1073741585;
      goto LABEL_17;
    }
    v13 = 1;
  }
  v14 = &v8[2 * v13 + 2];
  v15 = (unsigned int)v14[4];
  Size = v14[5];
  v16 = Size + 104;
  if ( (_DWORD)v15 )
  {
    v17 = v15 - 64;
    if ( v16 < 0x68 )
    {
LABEL_16:
      v12 = -1073741675;
      goto LABEL_17;
    }
    v10 = v16 + v17;
    if ( v16 + v17 < v17 )
    {
LABEL_15:
      v10 = -1;
      goto LABEL_16;
    }
  }
  else
  {
    if ( v16 < 0x68 )
      goto LABEL_15;
    v10 = Size + 104;
  }
  v12 = 0;
  v19 = sub_1400143E0(64LL, v10, 1918067026LL, a1);
  v9 = v19;
  if ( v19 )
  {
    *(_DWORD *)v19 = 28;
    *(_DWORD *)(v19 + 16) = 2987004;
    *(_QWORD *)(v19 + 4) = 0x4F544F5250544553LL;
    if ( v6 )
      v20 = *(_DWORD *)(v6 + 1392);
    else
      v20 = *(_DWORD *)(v11 + 4124);
    *(_DWORD *)(v9 + 12) = v20;
    *(_DWORD *)(v9 + 24) = v10 - 28;
    *(_DWORD *)(v9 + 32) = 72;
    *(_DWORD *)(v9 + 28) = v13 != 0 ? 1 : 72;
    *(_DWORD *)(v9 + 36) = *v14;
    *(_DWORD *)(v9 + 40) = v14[1];
    *(_DWORD *)(v9 + 44) = v14[2];
    *(_DWORD *)(v9 + 48) = v14[3];
    *(_DWORD *)(v9 + 64) = v14[7];
    *(_DWORD *)(v9 + 68) = v14[8];
    *(_DWORD *)(v9 + 72) = v14[9];
    *(_DWORD *)(v9 + 76) = v14[10];
    *(_DWORD *)(v9 + 80) = v14[11];
    v21 = (_DWORD)v15 != 0 ? 0x44 : 0;
    *(_OWORD *)(v9 + 84) = 0LL;
    *(_DWORD *)(v9 + 52) = v21;
    *(_DWORD *)(v9 + 56) = Size;
    memmove((void *)(v9 + v21 + 36), (char *)v14 + v15, Size);
    if ( *(_DWORD *)(v9 + 36) == 3 )
    {
      v22 = *(_DWORD *)(v9 + 40);
      if ( (v22 == 3 || v22 == 5) && (unsigned __int8)*(_DWORD *)(v9 + 44) >= 0xC0u )
      {
        *a5 = 1;
        *a6 = 1;
      }
    }
  }
  else
  {
    v12 = -1073741670;
    v10 = 0;
  }
LABEL_17:
  *a3 = v9;
  *a4 = v10;
  return v12;
}
