/*
 * XREFs of RtlpHpSegReAlloc @ 0x18008159C
 * Callers:
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeap @ 0x180080D58 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpExtrasSetPresent @ 0x1800056F0 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSegPageRangeShrink @ 0x180071824 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180082330 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpSegPageRangeCommit @ 0x180089CA0 (RtlpHpSegPageRangeCommit.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, int a2, signed __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r9
  char v9; // cl
  unsigned __int64 v10; // rbx
  __int64 v11; // rbx
  void *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v19; // r10
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rcx

  v7 = *(_QWORD *)a1 & a3;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v7 + 0x10) ^ v7) != a1 )
    return -1LL;
  v9 = *(_BYTE *)(a1 + 8);
  v10 = v7 + 32 * ((unsigned __int64)(unsigned int)(a3 - v7) >> v9);
  v11 = v10 - 32LL * *(unsigned __int8 *)(v10 + 26);
  v12 = (void *)(v7 + ((unsigned int)((__int64)(v11 - v7) >> 5) << v9));
  if ( (*(_BYTE *)(v11 + 24) & 3) != 3 || v12 != (void *)a3 && (*(_BYTE *)(v11 + 24) & 0x1Cu) < 8 )
    return -1LL;
  v13 = *(_QWORD *)(a4 + 32);
  v14 = (v13 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v14 << 12) < v13 )
    return 0LL;
  v15 = *(_BYTE *)(v11 + 24) & 0x1C;
  v16 = (unsigned int)(v14 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  if ( v15 >= 8 )
  {
    if ( v15 == 12 && *(_QWORD *)(a4 + 24) > *(_QWORD *)a4 && v13 <= 0x20000 )
    {
      v17 = RtlpHpVsContextGrowInPlace(
              *(_QWORD *)(a1 + 32),
              (*(_QWORD *)a1 & v11) + ((unsigned int)((v11 - (*(_QWORD *)a1 & v11)) >> 5) << *(_BYTE *)(a1 + 8)),
              a3,
              a4);
      if ( v17 )
      {
        if ( *(_DWORD *)(a4 + 16) )
        {
          v19 = a3 + *(_QWORD *)a4 + 16;
          if ( (a2 & 0x2000) == 0 )
            v19 = a3 + *(_QWORD *)a4;
          v20 = a3 + *(_QWORD *)(a4 + 24) + 16;
          if ( (a2 & 0x2000) == 0 )
            v20 = a3 + *(_QWORD *)(a4 + 24);
          memmove(
            (void *)((v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            (const void *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
            16 * (*(unsigned __int8 *)(((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3) + 1LL));
          RtlpHpExtrasSetPresent(*(_RTL_SRWLOCK **)(a1 + 56), v17);
        }
        return v17;
      }
    }
    goto LABEL_8;
  }
  if ( v16 > *(unsigned __int8 *)(v11 + 31) )
  {
LABEL_8:
    if ( (a2 & 0x10000000) == 0 )
      return RtlpHpReallocMove(*(PVOID *)(a1 + 56), (void *)a3);
    return 0LL;
  }
  v21 = (unsigned __int16)~*(_WORD *)(v11 + 28);
  if ( (unsigned int)v14 > v21 && (int)RtlpHpSegPageRangeCommit(a1, v11, v21, (unsigned int)v14 - v21, 0, 0LL) < 0 )
    return 0LL;
  if ( *(_DWORD *)(a4 + 16) )
  {
    v22 = a3 + *(_QWORD *)a4 + 16;
    if ( (a2 & 0x2000) == 0 )
      v22 = a3 + *(_QWORD *)a4;
    v23 = (unsigned __int8 *)((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v24 = a3 + *(_QWORD *)(a4 + 24) + 16;
    if ( (a2 & 0x2000) == 0 )
      v24 = a3 + *(_QWORD *)(a4 + 24);
    memmove((void *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v23, 16 * (v23[3] + 1LL));
  }
  if ( v16 < *(unsigned __int8 *)(v11 + 31) )
    RtlpHpSegPageRangeShrink(a1, v11, v16);
  *(_DWORD *)(v11 + 4) = (v16 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
  return a3;
}
