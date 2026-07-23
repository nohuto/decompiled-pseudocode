/*
 * XREFs of MiGetSourcePageForDefrag @ 0x14070BD94
 * Callers:
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSourcePageForDefrag(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // r11
  __int64 v3; // rsi
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int v6; // ebp
  __int64 v7; // r14
  unsigned int v8; // r10d
  unsigned __int64 v9; // rdi
  unsigned int *v10; // r8
  unsigned int v11; // edx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r9d
  int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // r10d

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (_DWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 64);
  v5 = *(_DWORD *)(v3 + 64);
  v6 = MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(v1 + 136) >> 3) & 3];
  if ( v5 <= v4 )
    goto LABEL_19;
  v7 = *(_QWORD *)(v3 + 72);
  v8 = 0;
  v9 = v7 + 4 * ((unsigned __int64)(v5 - 1) >> 5);
  v10 = (unsigned int *)(v7 + 4 * ((unsigned __int64)v4 >> 5));
  v11 = *v10 & (-1 << v4);
  v12 = v10 + 1;
  while ( !v11 )
  {
    if ( (unsigned __int64)v12 > v9 )
      goto LABEL_7;
    ++v10;
    ++v12;
    v11 = *v10;
  }
  _BitScanForward64((unsigned __int64 *)&v13, v11);
  v14 = v13 + 32 * (((__int64)v10 - v7) >> 2);
  if ( v14 > v5 )
  {
LABEL_7:
    v14 = *(_DWORD *)(v3 + 64);
    goto LABEL_18;
  }
  v15 = ((1 << v13) - 1) | v11;
  LODWORD(v13) = 32;
  while ( 1 )
  {
    v16 = ~v15;
    if ( v16 )
      break;
    if ( v8 > 1 )
      goto LABEL_14;
    v8 += 32;
    if ( (unsigned __int64)(v10 + 1) > v9 )
      goto LABEL_14;
    v15 = v10[1];
    ++v10;
  }
  _BitScanForward64((unsigned __int64 *)&v13, v16);
LABEL_14:
  v17 = 32 * (((__int64)v10 - v7) >> 2) + v13;
  if ( v17 > v5 )
    v17 = *(_DWORD *)(v3 + 64);
  v8 = v17 - v14;
  if ( v8 > 1 )
    v8 = 1;
LABEL_18:
  if ( v8 )
  {
    *v2 = v14 + 1;
    return *(_QWORD *)(v3 + 40) + v14;
  }
  else
  {
LABEL_19:
    *v2 = v6;
    return -1LL;
  }
}
