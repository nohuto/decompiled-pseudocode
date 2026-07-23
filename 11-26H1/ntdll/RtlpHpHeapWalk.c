/*
 * XREFs of RtlpHpHeapWalk @ 0x180094AEC
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x180092B10 (RtlpHpTagDestroyHeap.c)
 *     RtlWalkHeap @ 0x180092BC0 (RtlWalkHeap.c)
 *     RtlpWalkHeapInternal @ 0x180092C10 (RtlpWalkHeapInternal.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180092C70 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x1800762FC (RtlpAcquireHeapListLock.c)
 *     RtlpHpSegWalk @ 0x180094C1C (RtlpHpSegWalk.c)
 *     RtlpHpLargeWalkHeap @ 0x180095248 (RtlpHpLargeWalkHeap.c)
 */

__int64 __fastcall RtlpHpHeapWalk(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // r14d
  char v4; // r15
  __int64 v7; // rdx
  int v8; // edi
  unsigned int v9; // ebp
  __int64 v11; // rax

  v3 = 0;
  v4 = a3;
  if ( *a2 )
  {
    if ( *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    {
      v3 = 1;
      RtlpAcquireHeapListLock();
    }
    v7 = *a2;
    if ( *a2 == a1 )
    {
      *a2 = 0LL;
      goto LABEL_6;
    }
    if ( (_WORD)v7 )
    {
LABEL_6:
      v8 = 0;
      goto LABEL_7;
    }
    v11 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(v7 - qword_1801C6908) >> 20));
    v8 = 2;
    if ( v11 )
      v8 = v11 - 1;
LABEL_7:
    while ( v8 < 2 )
    {
      LOBYTE(a3) = v4;
      v9 = RtlpHpSegWalk(a1 + 192LL * v8 + 320, a2, a3);
      if ( v9 != -2147483622 )
        goto LABEL_9;
      *a2 = 0LL;
      ++v8;
    }
    v9 = RtlpHpLargeWalkHeap(a1, a2);
LABEL_9:
    if ( v3 )
      RtlpReleaseHeapListLock(0);
  }
  else
  {
    *a2 = a1;
    a2[1] = 4096LL;
    v9 = 0;
    a2[3] = 4096LL;
    *((_WORD *)a2 + 9) = -32766;
    *((_BYTE *)a2 + 17) = 0;
    a2[4] = a1;
    a2[5] = a1;
  }
  return v9;
}
