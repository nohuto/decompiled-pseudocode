/*
 * XREFs of HvpGenerateLogEntryHeader @ 0x1404AC60C
 * Callers:
 *     HvpGenerateLogEntry @ 0x1408BD3E8 (HvpGenerateLogEntry.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

void *__fastcall HvpGenerateLogEntryHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        int a6,
        int a7,
        char a8)
{
  __int64 v8; // r11
  _DWORD *v9; // rbx
  _DWORD *v10; // r10
  unsigned int v13; // esi
  _DWORD *v14; // r9
  __int64 v15; // rdx
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  int v19; // eax
  __int64 v20; // r9
  int v21; // r14d
  unsigned int v22; // ebp
  unsigned int v23; // r15d
  unsigned int v24; // eax
  unsigned int v25; // ebx
  void *result; // rax
  int v27; // [rsp+20h] [rbp-58h] BYREF
  int v28; // [rsp+24h] [rbp-54h]
  BOOL v29; // [rsp+28h] [rbp-50h]
  int v30; // [rsp+2Ch] [rbp-4Ch]
  int v31; // [rsp+30h] [rbp-48h]
  int v32; // [rsp+34h] [rbp-44h]
  __int128 v33; // [rsp+38h] [rbp-40h]

  v8 = a1 + 64;
  v9 = (_DWORD *)(a1 + 280);
  v10 = (_DWORD *)(a1 + 172);
  v13 = *a5;
  if ( a8 )
  {
    v14 = *(_DWORD **)(a2 + 8);
    v15 = 4LL;
    v16 = *(_OWORD **)v8;
    v17 = v14;
    do
    {
      *v17 = *v16;
      v17[1] = v16[1];
      v17[2] = v16[2];
      v17[3] = v16[3];
      v17[4] = v16[4];
      v17[5] = v16[5];
      v17[6] = v16[6];
      v17 += 8;
      v18 = v16[7];
      v16 += 8;
      *(v17 - 1) = v18;
      --v15;
    }
    while ( v15 );
    v14[1] = *v10;
    v14[2] = *v10;
    v14[7] = 6;
    v14[10] = *v9;
    v14[11] = 1;
    v19 = HvpHeaderCheckSum(v14);
    *(_DWORD *)(v20 + 508) = v19;
    v13 += 512;
  }
  v27 = 1162638920;
  v28 = a6;
  v33 = 0LL;
  if ( a8 )
    v28 = a6 - 512;
  v21 = 40;
  v22 = *a4;
  v30 = *v10;
  v23 = 0;
  v29 = (*(_BYTE *)(*(_QWORD *)v8 + 144LL) & 1) != 0;
  v31 = *v9;
  v32 = a7;
  do
  {
    while ( 1 )
    {
      v24 = v21;
      if ( v13 + v21 > *(_DWORD *)(a2 + 24LL * v22 + 16) )
        v24 = *(_DWORD *)(a2 + 24LL * v22 + 16) - v13;
      v25 = v24;
      result = memmove((void *)(*(_QWORD *)(a2 + 24LL * v22 + 8) + v13), (char *)&v27 + v23, v24);
      v23 += v25;
      v13 += v25;
      v21 -= v25;
      if ( v13 != *(_DWORD *)(a2 + 24LL * v22 + 16) )
        break;
      if ( !v21 )
        goto LABEL_12;
      ++v22;
      v13 = 0;
    }
  }
  while ( v21 );
LABEL_12:
  *a4 = v22;
  *a5 = v13;
  return result;
}
