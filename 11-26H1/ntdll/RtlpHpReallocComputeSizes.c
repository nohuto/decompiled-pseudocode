/*
 * XREFs of RtlpHpReallocComputeSizes @ 0x1800811E0
 * Callers:
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeap @ 0x180080D58 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x1800041CC (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800042A0 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x1800814B0 (RtlpHpLargeAllocSize.c)
 *     RtlpHpPgGetUserSize @ 0x180081808 (RtlpHpPgGetUserSize.c)
 */

__int64 __fastcall RtlpHpReallocComputeSizes(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  int *v8; // r14
  int v9; // eax
  __int64 v10; // r10
  unsigned __int64 v11; // r8
  __int64 UserSize; // rdx
  int v13; // r10d
  int v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned int v21; // ebp
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 result; // rax
  char v25; // si
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rcx
  char v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  int *v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax

  *a5 = 0LL;
  v8 = (int *)(a5 + 2);
  a5[1] = 0LL;
  a5[2] = 0LL;
  a5[4] = 0LL;
  a5[3] = a3;
  if ( (_WORD)a2 )
  {
    v9 = 0;
  }
  else
  {
    v34 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801C6908) >> 20));
    if ( !v34 || (v9 = v34 - 1, v9 == 2) )
    {
      v33 = RtlpHpLargeAllocSize(a1, a2, a5 + 2);
      goto LABEL_31;
    }
  }
  v10 = a1 + 192LL * v9;
  v11 = a2 & *(_QWORD *)(v10 + 320);
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v11 + 0x10) ^ v11) != v10 + 320
    || (v25 = *(_BYTE *)(v10 + 328),
        v26 = v11 + 32 * ((unsigned __int64)(unsigned int)(a2 - v11) >> v25),
        v27 = v26 - 32LL * *(unsigned __int8 *)(v26 + 26),
        v28 = v11 + ((unsigned int)((__int64)(v27 - v11) >> 5) << v25),
        v29 = *(_BYTE *)(v27 + 24),
        (v29 & 3) != 3)
    || v28 != a2 && (v29 & 0x1Cu) < 8 )
  {
    UserSize = -1LL;
    goto LABEL_5;
  }
  v30 = (v27 & *(_QWORD *)(v10 + 320)) + ((unsigned int)((__int64)(v27 - (v27 & *(_QWORD *)(v10 + 320))) >> 5) << v25);
  if ( a2 <= v30 )
  {
    UserSize = (*(unsigned __int8 *)(v27 + 31) << v25) - (unsigned __int64)*(unsigned int *)(v27 + 4);
    if ( a5 != (__int64 *)-16LL )
      *v8 = *(_DWORD *)(v27 + 8) & 1;
  }
  else
  {
    v31 = *(_BYTE *)(v27 + 24) & 0x1C;
    v32 = (int *)(a5 + 2);
    if ( (_DWORD)v31 == 8 )
    {
      v33 = RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(v10 + 344), v30, a2, v32);
LABEL_31:
      UserSize = v33;
      goto LABEL_5;
    }
    if ( (_DWORD)v31 == 12 )
      UserSize = RtlpHpVsChunkSize(*(_QWORD *)(v10 + 352), a2, v31, v32);
    else
      UserSize = RtlpHpPgGetUserSize(
                   *(_QWORD *)(v10 + 464),
                   a2,
                   (*(unsigned __int8 *)(v27 + 31) << v25) - (unsigned __int64)*(unsigned int *)(v27 + 4),
                   v32);
  }
LABEL_5:
  *a5 = UserSize;
  if ( UserSize == -1 )
    return 0LL;
  v13 = *v8;
  v14 = a4 & 0x2000 | 8;
  if ( !*v8 )
    v14 = a4 & 0x2000;
  v15 = UserSize + 16;
  v16 = v14 & 0x2000;
  if ( (v14 & 0x2000) == 0 )
    v15 = UserSize;
  if ( (v14 & 0x20000F08) != 0 )
    v15 = ((v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v17 = 1LL;
  if ( v15 )
    v17 = v15;
  if ( v13 )
  {
    v18 = UserSize + a2 + 16;
    if ( !v16 )
      v18 = UserSize + a2;
    v19 = 16 * (unsigned int)*(unsigned __int8 *)(((v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
    v17 += v19;
  }
  else
  {
    LODWORD(v19) = 0;
  }
  v20 = a5[3];
  a5[1] = v17;
  v21 = a4 & 0xDFFFF0F7;
  v22 = v20 + 16;
  if ( (v21 & 0x2000) == 0 )
    v22 = v20;
  if ( v21 & 0x20000F08 | (v13 != 0 ? 8 : 0) )
    v22 = ((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v23 = 1LL;
  result = 1LL;
  if ( v22 )
    v23 = v22;
  a5[4] = (unsigned int)v19 + v23;
  return result;
}
