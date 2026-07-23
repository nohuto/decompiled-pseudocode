/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x180080F40
 * Callers:
 *     RtlReAllocateHeapFull @ 0x180140250 (RtlReAllocateHeapFull.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x1800041CC (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800042A0 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeAllocSize @ 0x1800814B0 (RtlpHpLargeAllocSize.c)
 *     RtlpHpPgGetUserSize @ 0x180081808 (RtlpHpPgGetUserSize.c)
 */

__int64 __fastcall RtlpHpTagReAllocateHeap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // si
  __int64 v9; // r15
  int v10; // r13d
  int v11; // eax
  __int64 v12; // r11
  unsigned __int64 v13; // r8
  char v14; // r12
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  char v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 UserSize; // rdx
  __int64 v22; // rcx
  unsigned __int16 *v23; // rcx
  __int64 result; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178
    || a1 == qword_1801CA198[2 * (unsigned int)dword_18017B028[BYTE1(RtlpHpEnvHandle)]] )
  {
    goto LABEL_19;
  }
  v10 = *(_DWORD *)(a1 + 20);
  v28 = 0;
  if ( (_WORD)a2 )
  {
    v11 = 0;
  }
  else
  {
    v27 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801C6908) >> 20));
    if ( !v27 || (v11 = v27 - 1, v11 == 2) )
    {
      UserSize = RtlpHpLargeAllocSize(a1, a2, &v28);
      goto LABEL_13;
    }
  }
  v12 = a1 + 192LL * v11;
  v13 = a2 & *(_QWORD *)(v12 + 320);
  if ( !(RtlpHpHeapGlobals ^ (v12 + 320) ^ *(_QWORD *)(v13 + 0x10) ^ v13)
    && (v14 = *(_BYTE *)(v12 + 328),
        v15 = v13 + 32 * ((unsigned __int64)(unsigned int)(a2 - v13) >> v14),
        v16 = v15 - 32LL * *(unsigned __int8 *)(v15 + 26),
        v17 = v13 + ((unsigned int)((__int64)(v16 - v13) >> 5) << v14),
        v18 = *(_BYTE *)(v16 + 24),
        (v18 & 3) == 3)
    && (v17 == a2 || (v18 & 0x1Cu) >= 8) )
  {
    v19 = (v16 & *(_QWORD *)(v12 + 320)) + ((unsigned int)((__int64)(v16 - (v16 & *(_QWORD *)(v12 + 320))) >> 5) << v14);
    if ( a2 <= v19 )
    {
      UserSize = (*(unsigned __int8 *)(v16 + 31) << v14) - (unsigned __int64)*(unsigned int *)(v16 + 4);
      v28 = *(_DWORD *)(v16 + 8) & 1;
    }
    else
    {
      v20 = *(_BYTE *)(v16 + 24) & 0x1C;
      if ( (_DWORD)v20 == 8 )
      {
        UserSize = RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(v12 + 344), v19, a2, &v28);
      }
      else if ( (_DWORD)v20 == 12 )
      {
        UserSize = RtlpHpVsChunkSize(*(_QWORD *)(v12 + 352), a2, v20, &v28);
      }
      else
      {
        UserSize = RtlpHpPgGetUserSize(
                     *(_QWORD *)(v12 + 464),
                     a2,
                     (*(unsigned __int8 *)(v16 + 31) << v14) - (unsigned __int64)*(unsigned int *)(v16 + 4),
                     &v28);
      }
    }
  }
  else
  {
    UserSize = -1LL;
  }
LABEL_13:
  if ( UserSize != -1 )
  {
    v9 = UserSize;
    if ( v28 )
    {
      v22 = UserSize + a2 + 16;
      if ( (v10 & 0x2000) == 0 )
        v22 = UserSize + a2;
      v23 = (unsigned __int16 *)((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v23 )
        v4 = *v23;
    }
  }
LABEL_19:
  result = RtlpReAllocateHeapInternal(a1, a4, a2, a3);
  v25 = result;
  if ( result && v4 && a3 != v9 )
  {
    v26 = *(_QWORD *)(qword_1801CBC38 + 8LL * v4 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    _InterlockedAdd64((volatile signed __int64 *)(v26 + 32), a3 - v9);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
    return v25;
  }
  return result;
}
