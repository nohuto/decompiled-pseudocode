/*
 * XREFs of MiCreatePagingFileControlArea @ 0x140989124
 * Callers:
 *     MiCreatePagingFileMap @ 0x14098989C (MiCreatePagingFileMap.c)
 * Callees:
 *     MiAllocateProtoPool @ 0x1403988A0 (MiAllocateProtoPool.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     Mi4KStartForSubsection @ 0x14048D2FC (Mi4KStartForSubsection.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAllocateAweInfo @ 0x14087D964 (MiAllocateAweInfo.c)
 */

__int64 __fastcall MiCreatePagingFileControlArea(__int64 *a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbp
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // r14
  int v13; // eax
  int v14; // ecx
  __int16 v15; // ax
  unsigned __int64 v16; // r11
  __int16 v17; // ax
  int v18; // edx
  char v19; // cl
  char v20; // r8
  __int64 result; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r13
  int v26; // r10d
  unsigned __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // r11
  int v30; // r9d
  ULONG_PTR ProtoPool; // rax
  __int64 v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-58h]
  unsigned __int64 v34; // [rsp+88h] [rbp+10h]
  unsigned __int64 v35; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+90h] [rbp+18h]
  ULONG_PTR v37; // [rsp+98h] [rbp+20h]

  v1 = *a1;
  v2 = a1[1];
  v33 = *a1;
  v37 = 0LL;
  v4 = *(int *)(*a1 + 16);
  v34 = v2;
  if ( (v4 & 0x8000000) != 0 && (int)v4 >= 0 )
  {
    v5 = a1[1];
    v6 = 1LL;
  }
  else
  {
    v5 = (((v4 >> 63) & 0x100000uLL) + 0x100000) >> 3;
    v6 = v2 / v5;
    if ( v2 % v5 )
      ++v6;
  }
  a1[16] = v6;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 88 * v6 + 128, 1631808845, CurrentProcessorColor | 0x80000000);
  v9 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  a1[18] = PoolMm;
  v10 = MmGetCurrentProcessorColor();
  v11 = ExAllocatePoolMm(256LL, 0x50uLL, 1734693709, v10 | 0x80000000);
  v12 = (_QWORD *)v11;
  if ( !v11 )
    return 3221225626LL;
  *(_QWORD *)v9 = v11;
  *(_DWORD *)(v9 + 96) = v6;
  *(_QWORD *)(v11 + 72) = 0LL;
  *(_DWORD *)(v9 + 60) ^= (*(_DWORD *)(v9 + 60) ^ *(unsigned __int16 *)a1[2]) & 0x3FF;
  *(_QWORD *)(v9 + 16) = v9 + 8;
  *(_QWORD *)(v9 + 8) = v9 + 8;
  *(_QWORD *)(v9 + 112) = 1LL;
  *(_QWORD *)(v9 + 24) = 1LL;
  *(_QWORD *)(v9 + 48) = 1LL;
  if ( (v4 & 0x200000) != 0 )
    *(_DWORD *)(v9 + 56) |= 0x40u;
  if ( (v4 & 0x4000000) != 0 )
    *(_DWORD *)(v9 + 56) |= 0x1000u;
  if ( (v4 & 0x8000000) != 0 )
    *(_DWORD *)(v9 + 56) |= 0x2000u;
  if ( (v4 & 0x80000) != 0 )
    *(_DWORD *)(v9 + 56) |= 0x80000000;
  if ( (*(_DWORD *)v1 & 0x10000000) != 0 )
    *(_DWORD *)(v9 + 60) |= 0x800u;
  v13 = *(_DWORD *)(v9 + 56);
  v14 = v13 ^ (*(_DWORD *)(v1 + 172) << 20);
  *(_QWORD *)(v9 + 104) = 0LL;
  *(_DWORD *)(v9 + 56) = v13 ^ v14 & 0x7F00000;
  memset_0(v12, 0, 0x48uLL);
  if ( (v4 & 0x10000000) != 0 )
  {
    v15 = 0x2000;
  }
  else
  {
    if ( (v4 & 0x40000000) == 0 )
      goto LABEL_23;
    v15 = 4096;
  }
  *((_WORD *)v12 + 6) |= v15;
LABEL_23:
  v16 = v34;
  *((_BYTE *)v12 + 14) ^= (*(_BYTE *)(v1 + 32) ^ *((_BYTE *)v12 + 14)) & 0x1F;
  *((_DWORD *)v12 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v12[3] = v34 << 12;
  v17 = *((_WORD *)v12 + 6);
  *v12 = v9;
  *((_DWORD *)v12 + 2) = v34;
  *((_WORD *)v12 + 6) = v17 ^ (v17 ^ WORD2(v34)) & 0x3FF;
  if ( *(_BYTE *)(v1 + 192) )
  {
    v18 = *(_DWORD *)(v1 + 16);
    if ( (v18 & 0x20000) != 0 )
    {
      v19 = 4;
    }
    else if ( v18 >= 0 )
    {
      v19 = (v18 & 0x80000) != 0;
    }
    else
    {
      v19 = 2;
    }
    v20 = v19 | 0x20;
    if ( (v18 & 0x10000) == 0 )
      v20 = v19;
    if ( (v18 & 0x10000000) != 0 )
    {
      v20 |= 0x10u;
    }
    else if ( (v18 & 0x40000000) != 0 )
    {
      v20 |= 8u;
    }
    result = MiAllocateAweInfo(v9, 0, v20, a1 + 17);
    if ( (int)result < 0 )
      return result;
    v16 = v34;
  }
  v22 = 0LL;
  v36 = 0LL;
  v23 = v9 + 128;
  v24 = 0LL;
  v25 = v9 + 128;
  while ( v22 < v6 )
  {
    v26 = v16;
    v27 = *(_QWORD *)(v23 + 80) & 0xFFFFFFFFFFFFFFF8uLL | 1;
    *(_QWORD *)v23 = v9;
    *(_QWORD *)(v23 + 80) = v27;
    v25 = v23;
    *(_DWORD *)(v23 + 32) = (2 * *(unsigned __int16 *)(v33 + 32)) ^ (*(_DWORD *)(v23 + 32) ^ (2
                                                                                            * *(unsigned __int16 *)(v33 + 32))) & 0xFFFFFFC1;
    if ( v16 > v5 )
      v26 = v5;
    *(_DWORD *)(v23 + 44) = v26;
    Mi4KStartForSubsection(v23, v24);
    v16 = v29 - v28;
    v35 = v16;
    if ( v30 )
    {
      ProtoPool = MiAllocateProtoPool(((v4 >> 63) & 0xFFFFFFFFFFFFFF2EuLL) + 274, 8 * v28, 1951624525LL);
      v37 = ProtoPool;
      if ( !ProtoPool )
        return 3221225626LL;
      v16 = v35;
      *(_QWORD *)(v23 + 8) = ProtoPool;
    }
    v32 = *(unsigned int *)(v23 + 44);
    v23 += 88LL;
    v24 = v32 + v36;
    *(_QWORD *)(v25 + 16) = v23;
    v36 += v32;
    ++v22;
  }
  *(_QWORD *)(v25 + 16) = 0LL;
  v12[8] = v37;
  return 0LL;
}
