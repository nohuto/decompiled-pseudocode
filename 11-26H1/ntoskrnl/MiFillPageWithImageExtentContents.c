/*
 * XREFs of MiFillPageWithImageExtentContents @ 0x1406FEAF8
 * Callers:
 *     MiCopyImageExtentContents @ 0x1406FE164 (MiCopyImageExtentContents.c)
 *     MiCopyFromDirectMapExtent @ 0x1407798AC (MiCopyFromDirectMapExtent.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiGetPteMappingSet @ 0x140448100 (MiGetPteMappingSet.c)
 *     MiReturnPteMappingSet @ 0x14044E8C0 (MiReturnPteMappingSet.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

struct _KPRCB *__fastcall MiFillPageWithImageExtentContents(
        _DWORD *BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v12; // r10
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int16 v21; // [rsp+30h] [rbp-68h]
  unsigned __int64 v22; // [rsp+38h] [rbp-60h]
  __int128 v23; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-48h]
  unsigned __int64 *v25; // [rsp+A0h] [rbp+8h]
  unsigned int v26; // [rsp+B8h] [rbp+20h]

  BugCheckParameter4 = a4;
  v24 = 0LL;
  v21 = a3;
  v6 = 0LL;
  v26 = a4 + (a3 & 0xFFF);
  v23 = 0LL;
  v9 = (v26 > 0x1000) + 2LL;
  MiGetPteMappingSet(0, v9, (__int64)&v23);
  v25 = (unsigned __int64 *)v24;
  v10 = (__int64)(v24 << 25) >> 16;
  ValidPte = MiMakeValidPte(v24, a2, -1610612732);
  v12 = a3 >> 12;
  v13 = 0;
  *v25 = ValidPte;
  v14 = *BugCheckParameter3 - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v14 < v13 )
        KeBugCheckEx(0x1Au, 0x1481uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v15 = (v13 + v14) >> 1;
      v16 = 12LL * v15;
      v17 = (unsigned int)BugCheckParameter3[v16 + 8];
      if ( (unsigned int)v12 >= (unsigned int)v17 )
        break;
      if ( !v15 )
        KeBugCheckEx(0x1Au, 0x1480uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v14 = v15 - 1;
    }
    if ( (unsigned int)v12 < (int)v17 + BugCheckParameter3[v16 + 12] )
      break;
    v13 = v15 + 1;
  }
  v22 = *(_QWORD *)&BugCheckParameter3[v16 + 10] + (unsigned int)v12 - v17;
  v18 = MiMakeValidPte((unsigned __int64)(v25 + 1), v22, 536870913);
  v25[1] = v18;
  if ( v26 > 0x1000 )
  {
    if ( v22 >= *(_QWORD *)&BugCheckParameter3[v16 + 12] + *(_QWORD *)&BugCheckParameter3[v16 + 10] - 1LL )
    {
      if ( (unsigned int)((v16 * 4 + 48) / 48) == *BugCheckParameter3 )
        KeBugCheckEx(0x1Au, 0x1482uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v19 = (*(_QWORD *)&BugCheckParameter3[v16 + 22] << 12) ^ (v18 ^ (*(_QWORD *)&BugCheckParameter3[v16 + 22] << 12)) & 0xFFF0000000000FFFuLL;
    }
    else
    {
      v19 = ((v18 & 0xFFFFFFFFFFFFF000uLL) + 4096) ^ (v18 ^ ((v18 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFF0000000000FFFuLL;
    }
    v25[2] = v19;
  }
  memmove((void *)v10, (const void *)((v21 & 0xFFF) + ((__int64)((_QWORD)(v25 + 1) << 25) >> 16)), BugCheckParameter4);
  if ( (_DWORD)BugCheckParameter4 != 4096 )
    memmove((void *)(BugCheckParameter4 + v10), qword_140E361A0, (unsigned int)(4096 - BugCheckParameter4));
  do
  {
    *(_QWORD *)(v6 + v24) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v6 += 8LL;
    --v9;
  }
  while ( v9 );
  return MiReturnPteMappingSet((__int64)&v23);
}
