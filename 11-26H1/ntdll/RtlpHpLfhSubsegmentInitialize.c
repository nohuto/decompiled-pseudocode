/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x1800BE93C
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1800BE5AC (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1800BED00 (RtlpHpLfhSubsegmentPrefetchRange.c)
 *     RtlpHpLfhBlockBitmapInitialize @ 0x1800BEDB0 (RtlpHpLfhBlockBitmapInitialize.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1800BEE10 (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpHpLfhSubsegmentInitialize(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int8 *a5,
        __int64 a6,
        int a7)
{
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // r10d
  int v13; // r9d
  __int64 v14; // r11
  int v15; // edi
  unsigned __int64 v16; // r8
  int v17; // ecx
  int v18; // edi
  unsigned int v19; // r13d
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // r9
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax
  _WORD *v26; // rdx
  char *v27; // r8
  char *v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // al
  char v33; // al
  __int64 v34; // rax
  __int16 v35; // cx
  int v36; // eax
  char *v37; // rdi
  __int64 v39; // [rsp+20h] [rbp-58h]
  int v40; // [rsp+80h] [rbp+8h]
  int v41; // [rsp+88h] [rbp+10h]
  __int16 v43; // [rsp+90h] [rbp+18h]
  int v45; // [rsp+B0h] [rbp+38h]

  v9 = a3;
  v39 = (*a5 >> 1) + 1;
  v10 = (unsigned __int16)RtlpBucketBlockSizes[v39];
  v11 = RtlpHpLfhSubsegmentComputeCommitUnit(a2, (unsigned __int16)RtlpBucketBlockSizes[v39]);
  v14 = (unsigned int)(v13 + 2);
  v15 = 2 * (a2 / v11);
  v16 = (8 * (a2 - v15) - 512) / (v14 + (unsigned __int64)(8 * v10));
  v17 = v15 + 8 * (((unsigned __int64)(unsigned int)v16 + 31) >> 5) + 79;
  v18 = a4;
  v19 = v17 & 0xFFFFFFF0;
  v20 = (a2 - (v17 & 0xFFFFFFF0)) / v10;
  if ( (unsigned int)v16 < (unsigned int)v20 )
    v20 = (unsigned int)v16;
  v21 = v20;
  v40 = 8 * ((unsigned __int64)(v20 + 31) >> 5);
  if ( a4 )
  {
    v22 = v12;
    v9 = a2;
    if ( a4 == v12 && a2 >= 0x10000 )
      v9 = 0x10000;
  }
  else
  {
    v22 = v12 + 2;
  }
  v45 = v12 & a7;
  if ( v45 )
    v22 = (unsigned int)v14;
  RtlpHpLfhSubsegmentPrefetchRange(a1, 0LL, v9, v22);
  memset_thunk_772440563353939046((void *)a1, 0, 0x40uLL);
  HIWORD(v41) = v19;
  LOWORD(v41) = v10;
  *(_DWORD *)(a1 + 40) = v41 ^ qword_1801C5EC8 ^ (a1 >> 12);
  *(_WORD *)(a1 + 44) = (unsigned __int64)&a5[-a6] >> 6;
  _BitScanForward(&v23, a3 >> 12);
  *(_WORD *)(a1 + 32) = v21;
  LOBYTE(v43) = v23;
  HIBYTE(v43) = a2 >> 12 >> v23;
  *(_WORD *)(a1 + 34) = v21;
  *(_BYTE *)(a1 + 22) = 3;
  *(_WORD *)(a1 + 46) = 0;
  *(_WORD *)(a1 + 38) = v43;
  v24 = (unsigned __int8)((unsigned int)(v40 + 64) >> 3);
  v25 = *(unsigned __int8 *)(a1 + 39);
  *(_BYTE *)(a1 + 24) = v24;
  v26 = (_WORD *)(a1 + 8 * v24);
  v27 = (char *)&v26[v25];
  *v26 = 1;
  v28 = (char *)(v26 + 1);
  v29 = (unsigned __int64)(v27 - v28 + 1) >> 1;
  if ( v28 > v27 )
    v29 = 0LL;
  if ( v29 )
  {
    v37 = v28;
    while ( v29 )
    {
      *(_WORD *)v37 = -1;
      v37 += 2;
      --v29;
    }
    v18 = a4;
  }
  v30 = RtlpSearchWidth[v39];
  v31 = 32;
  v32 = 32;
  if ( v30 < 0x20u )
    v32 = RtlpSearchWidth[v39];
  if ( v32 < v21 )
  {
    if ( v30 < 0x20u )
      v31 = RtlpSearchWidth[v39];
    v33 = v31;
  }
  else
  {
    v33 = v21;
  }
  *(_BYTE *)(a1 + 50) = v33;
  RtlpHpLfhBlockBitmapInitialize(a1 + 64, v21);
  if ( ((v10 - 1) & v10) == 0 )
  {
    v36 = (unsigned __int16)v19 - ((v10 - 1) & ((unsigned __int16)v19 + v10 - 1)) + v10 - 1;
    v19 = v36;
    if ( v36 + v10 * v21 != a2 )
      NT_ASSERT("FirstBlockOffset + BlockSize * BlockCount == SubsegmentSize");
    HIWORD(v41) = v36;
    *(_DWORD *)(a1 + 40) = v41 ^ qword_1801C5EC8 ^ (a1 >> 12);
  }
  LOBYTE(v34) = a6;
  if ( (*(_BYTE *)(a6 + 78) & 1) != 0 )
    NT_ASSERT("LfhContext->Config.Global.WitholdPageCrossingBlocks == 0");
  v35 = *(_WORD *)(a1 + 34);
  if ( !v45 && v18 == 1 )
  {
    v34 = *((unsigned int *)a5 + 18);
    v35 = ((v34 * (unsigned __int64)(v9 - v19)) >> 32) - 1;
  }
  *(_WORD *)(a1 + 48) = v35;
  if ( v18 == 2 )
  {
    LOBYTE(v34) = *(_BYTE *)(a1 + 51) | 1;
    *(_BYTE *)(a1 + 51) = v34;
  }
  return v34;
}
