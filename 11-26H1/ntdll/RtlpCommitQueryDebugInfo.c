/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x1800BB000
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x180074010 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180075000 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x180075718 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlQueryProcessModuleInformation @ 0x180075A08 (RtlQueryProcessModuleInformation.c)
 *     RtlCommitDebugInfo @ 0x1800BAC50 (RtlCommitDebugInfo.c)
 *     RtlpWalkCallbackRoutine @ 0x1800BAC60 (RtlpWalkCallbackRoutine.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800BAEF0 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  char *result; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 <= 0xFFFFFFF8 )
  {
    v3 = a1[9] + ((a2 + 7) & 0xFFFFFFF8);
    v4 = a1[10];
    if ( v3 <= v4 )
    {
LABEL_3:
      result = (char *)a1 + a1[9];
      a1[9] = v3;
      return result;
    }
    if ( v3 <= a1[11] )
    {
      BaseAddress = (char *)a1 + v4;
      RegionSize = v3 - v4;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        a1[10] += RegionSize;
        goto LABEL_3;
      }
    }
  }
  return 0LL;
}
