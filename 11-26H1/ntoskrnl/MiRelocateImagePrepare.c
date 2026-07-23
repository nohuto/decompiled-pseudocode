/*
 * XREFs of MiRelocateImagePrepare @ 0x14099BA68
 * Callers:
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiRelocateImagePrepare(__int64 **a1)
{
  __int64 *v1; // rdi
  int v2; // r8d
  __int64 v4; // r11
  _WORD *v5; // r10
  __int16 v6; // ax
  __int16 v7; // cx
  unsigned int v8; // edx
  __int64 *v9; // rax
  int v10; // ecx
  int v11; // r9d
  unsigned int v12; // ebp
  unsigned __int64 v13; // rcx
  int v14; // r9d
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // r10
  unsigned int v18; // edi
  int v19; // r9d
  unsigned int v20; // edx
  ULONG_PTR v21; // rsi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 result; // rax

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 8) | 2;
  *((_DWORD *)a1 + 8) = v2;
  v4 = *v1;
  v5 = *(_WORD **)(*v1 + 56);
  v6 = v5[24];
  v7 = v5[22];
  if ( v6 != 332 && v6 != -31132 )
    goto LABEL_5;
  v2 |= 0x40u;
  *((_DWORD *)a1 + 8) = v2;
  if ( (v7 & 1) != 0 )
    return 0LL;
  v8 = 0;
  *((_DWORD *)a1 + 9) = 0;
  if ( (v5[23] & 0x1000) != 0 )
  {
LABEL_5:
    v8 = -1073741701;
    *((_DWORD *)a1 + 9) = -1073741701;
  }
  v9 = a1[1];
  v10 = *((_DWORD *)v9 + 30);
  *((_DWORD *)a1 + 20) = v10;
  v11 = *((_DWORD *)v9 + 31);
  *((_DWORD *)a1 + 21) = v11;
  if ( v10 )
  {
    if ( v11 )
      goto LABEL_8;
    return v8;
  }
  if ( v11 )
    return v8;
  *((_DWORD *)a1 + 8) = v2 & 0xFFFFFFFD;
LABEL_8:
  if ( _bittest16((const signed __int16 *)(v4 + 12), 0xEu) )
    return 0LL;
  v12 = *((_DWORD *)a1 + 4) + 48 + 4 * (*(_WORD *)(v4 + 12) >> 15);
  if ( ((4 * (*(_WORD *)(v4 + 12) >= 0) + 3) & v12) != 0 )
    return *((unsigned int *)a1 + 9);
  v13 = *(_QWORD *)(v4 + 32);
  v14 = *((_DWORD *)a1 + 8);
  a1[11] = (__int64 *)v13;
  if ( (v14 & 0x40) != 0 && !*((_DWORD *)a1 + 5) )
  {
    v15 = v5[23];
    if ( (v15 & 0x40) == 0 && MmRegistryState != -1 && (v15 & 0x1000) == 0 )
      return 0LL;
  }
  v16 = *((unsigned int *)a1 + 20);
  v17 = *((unsigned int *)a1 + 21);
  *((_DWORD *)a1 + 12) = v16;
  v18 = *(_DWORD *)(v4 + 8);
  v19 = v14 & 2;
  if ( !v19 )
    v18 = (v12 >> 12) + 1;
  v20 = v17 + v16;
  if ( (unsigned int)(v17 + v16) > *(_DWORD *)(v4 + 8) << 12
    || v19 && (v20 <= (unsigned int)v16 || v13 + v16 <= v13 || v13 + v20 <= v13) )
  {
    return *((unsigned int *)a1 + 9);
  }
  *((_DWORD *)a1 + 10) = v17;
  v21 = v17 + 104 + 8LL * v18;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(256LL, v21, 1699900749, CurrentProcessorColor | 0x80000000);
  v24 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  v25 = PoolMm;
  do
    v25 += 4096LL;
  while ( v25 < PoolMm + v21 );
  *((_DWORD *)a1 + 11) = v18;
  result = 3221225494LL;
  *(_DWORD *)(v24 + 56) = v18;
  *(_QWORD *)(v24 + 24) = 0LL;
  *(_DWORD *)(v24 + 60) = v12;
  a1[7] = (__int64 *)v24;
  return result;
}
