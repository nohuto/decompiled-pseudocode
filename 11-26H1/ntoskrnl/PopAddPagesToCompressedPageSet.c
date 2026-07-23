/*
 * XREFs of PopAddPagesToCompressedPageSet @ 0x140BFF9B4
 * Callers:
 *     PopCompressHiberBlocks @ 0x140BFFF94 (PopCompressHiberBlocks.c)
 *     PopWriteHiberImage @ 0x140C02AD4 (PopWriteHiberImage.c)
 * Callees:
 *     RtlCompressBuffer @ 0x140463C00 (RtlCompressBuffer.c)
 *     RtlCompressBufferProgress @ 0x14061AAD0 (RtlCompressBufferProgress.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

int *__fastcall PopAddPagesToCompressedPageSet(
        _BYTE *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        char a5,
        int a6,
        __int64 a7)
{
  unsigned int v7; // ebx
  int *v8; // r12
  unsigned int *v9; // rax
  ULONG v10; // edi
  UCHAR *v13; // r15
  unsigned int v14; // r9d
  __int64 v15; // r8
  int v16; // r10d
  unsigned int v17; // edx
  unsigned __int64 v18; // r13
  __int64 v19; // rbp
  int v20; // eax
  void *WorkSpace; // rdx
  __int16 v22; // cx
  int v23; // ecx
  unsigned __int64 v24; // rax
  __int64 CompressedBufferSize; // [rsp+20h] [rbp-68h]
  ULONG FinalCompressedSize; // [rsp+98h] [rbp+10h] BYREF
  unsigned int *v28; // [rsp+A0h] [rbp+18h]

  v28 = a3;
  v7 = 0;
  v8 = *(int **)(a2 + 24);
  v9 = a3;
  v10 = a6 << 12;
  FinalCompressedSize = 0;
  if ( !v8 )
    goto LABEL_26;
  if ( !a5 )
  {
    v13 = (UCHAR *)a4;
    v14 = *(_DWORD *)(a2 + 160);
    v15 = *((_QWORD *)qword_140F10988 + 5) - *((_QWORD *)qword_140F10988 + 7);
    if ( v14 && (v16 = *(_DWORD *)(a2 + 164), (int)(100 * v16 / v14) <= dword_140F10924) )
    {
      v17 = *((_DWORD *)qword_140F10988 + 2);
      if ( v15 >= (__int64)((unsigned __int64)v17 >> 1) )
      {
        *(_DWORD *)(a2 + 164) = v16 + 1;
        LOBYTE(v7) = v15 >= (__int64)((unsigned __int64)(3 * v17) >> 2);
        v7 += 2;
LABEL_11:
        *(_DWORD *)(a2 + 160) = v14 + 1;
        goto LABEL_12;
      }
    }
    else if ( v15 >= (__int64)((unsigned __int64)*((unsigned int *)qword_140F10988 + 2) >> 1) )
    {
      v7 = 1;
      goto LABEL_11;
    }
    v7 = a1[492] != 0 ? 4 : 0;
    goto LABEL_11;
  }
  v13 = *(UCHAR **)a2;
  v7 = a1[491] != 0 ? 4 : 0;
  memmove(*(void **)a2, a4, v10);
LABEL_12:
  v18 = __rdtsc();
  if ( a1[490] )
  {
    if ( (v7 & 0xFFFFFFFA) != 0 || v7 == 5 )
    {
      v19 = v7;
      v20 = RtlCompressBufferProgress(
              *((_WORD *)qword_14002F4F0 + v7),
              v13,
              v10,
              v8,
              CompressedBufferSize,
              &FinalCompressedSize,
              *(_QWORD *)(a2 + 16),
              a7,
              (__int64)a1);
    }
    else
    {
      v19 = v7;
      v20 = RtlCompressBuffer(
              *((_WORD *)qword_14002F4F0 + v7),
              v13,
              v10,
              (PUCHAR)v8,
              0x10000u,
              0x1000u,
              &FinalCompressedSize,
              *(PVOID *)(a2 + 16));
    }
  }
  else
  {
    WorkSpace = *(void **)(a2 + 16);
    v19 = v7;
    v22 = *((_WORD *)qword_14002F4F0 + v7);
    if ( a7 )
      v20 = RtlCompressBufferProgress(
              v22,
              v13,
              v10,
              v8,
              CompressedBufferSize,
              &FinalCompressedSize,
              (__int64)WorkSpace,
              a7,
              (__int64)a1);
    else
      v20 = RtlCompressBuffer(v22, v13, v10, (PUCHAR)v8, 0x10000u, 0x1000u, &FinalCompressedSize, WorkSpace);
  }
  v23 = v20;
  v24 = __rdtsc();
  *(_QWORD *)(a2 + 40) += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v18;
  if ( v23 < 0 || FinalCompressedSize >= (7 * v10) >> 3 )
  {
    a4 = (int *)v13;
  }
  else
  {
    ++*(_QWORD *)(a2 + 8 * v19 + 88);
    a4 = v8;
    v10 = FinalCompressedSize;
  }
  v9 = v28;
LABEL_26:
  *v9 = (v7 << 29) | ((v10 << 8) ^ (unsigned __int8)*v9) & 0x1FFFFFFF;
  return a4;
}
