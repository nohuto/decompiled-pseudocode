/*
 * XREFs of RtlpHpHeapWalk @ 0x1800744FC
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x180072524 (RtlpHpTagDestroyHeap.c)
 *     RtlWalkHeap @ 0x1800725D0 (RtlWalkHeap.c)
 *     RtlpWalkHeapInternal @ 0x180072620 (RtlpWalkHeapInternal.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180072680 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x18001A070 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpHpSegWalk @ 0x180074638 (RtlpHpSegWalk.c)
 *     RtlpHpLargeWalkHeap @ 0x180074C98 (RtlpHpLargeWalkHeap.c)
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
      RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
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
    v11 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801C78C0, 2 * ((unsigned __int64)(v7 - qword_1801C78B8) >> 20));
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
      RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
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
