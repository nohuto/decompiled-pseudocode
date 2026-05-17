/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x18007F200
 * Callers:
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180022EF0 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpDestroyHeapSegment @ 0x18007E9E8 (RtlpDestroyHeapSegment.c)
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlpCreateLowFragHeap @ 0x18007EE98 (RtlpCreateLowFragHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18007F11C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlDebugDestroyHeap @ 0x18011FBB4 (RtlDebugDestroyHeap.c)
 * Callees:
 *     RtlpCallSecureMemoryCallbacks @ 0x18007F2F0 (RtlpCallSecureMemoryCallbacks.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpSecMemFreeVirtualMemory(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-18h]

  v4 = a4;
  v7 = ZwFreeVirtualMemory(-1LL, a2, a3, a4);
  if ( v7 != -1073741755 )
    return v7;
  v8 = *a3;
  v9 = *a2;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( RtlpSecMemListHead == (_UNKNOWN *)&RtlpSecMemListHead )
    return v7;
  if ( !v8 )
  {
    if ( (int)ZwQueryVirtualMemory(-1LL, v9, 3LL, &v11, 48LL, 0LL) < 0 || HIDWORD(v11) == 0x10000 )
      return v7;
    v8 = v12;
  }
  if ( (unsigned __int8)RtlpCallSecureMemoryCallbacks(v9, v8) )
    return ZwFreeVirtualMemory(-1LL, a2, a3, v4);
  return v7;
}
