/*
 * XREFs of VmpUnpinMemoryRange @ 0x1407903DC
 * Callers:
 *     VmpRemoveMemoryRange @ 0x14048258C (VmpRemoveMemoryRange.c)
 *     VmPinMemoryRange @ 0x14078F8C0 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14078FBA0 (VmUnpinMemoryRange.c)
 * Callees:
 *     PfLockSharedRelease @ 0x1402054C4 (PfLockSharedRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 *     VmpUnpinMemoryRangeHelper @ 0x14063F3A0 (VmpUnpinMemoryRangeHelper.c)
 */

__int64 __fastcall VmpUnpinMemoryRange(
        volatile signed __int64 *SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi

  v9 = a2;
  result = VmpUnpinMemoryRangeHelper((__int64)SpinLock, a2, a3, a4, a5, a6);
  if ( (_DWORD)result == -1073741267 )
  {
    if ( !a7
      || (PfLockSharedRelease(SpinLock + 15),
          FsRtlAcquirePushLockExclusive((unsigned __int64 *)SpinLock + 15),
          *a7 = 1,
          result = VmpUnpinMemoryRangeHelper((__int64)SpinLock, v9, a3, a4, a5, a6),
          (_DWORD)result == -1073741267) )
    {
      v12 = v9 + a4 - 1;
      if ( v9 <= v12 )
      {
        v13 = a3 - v9;
        do
        {
          result = VmpUnpinMemoryRangeHelper((__int64)SpinLock, v9, v13 + v9, 1uLL, a5, a6);
          ++v9;
        }
        while ( v9 <= v12 );
      }
    }
  }
  return result;
}
