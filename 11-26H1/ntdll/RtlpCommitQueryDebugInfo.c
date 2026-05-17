/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x180092020
 * Callers:
 *     RtlpCopyRemoteDebugInformation @ 0x1800902A0 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800909B8 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlQueryProcessModuleInformation @ 0x180090CA8 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessLockInformation @ 0x180091A70 (RtlQueryProcessLockInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x180091F10 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlpWalkCallbackRoutine @ 0x1800921A0 (RtlpWalkCallbackRoutine.c)
 *     RtlCommitDebugInfo @ 0x180111850 (RtlCommitDebugInfo.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  char *result; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  char *v7; // [rsp+58h] [rbp+20h] BYREF

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
      v7 = (char *)a1 + v4;
      v6 = v3 - v4;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v7, 0LL, &v6, 4096, 4) >= 0 )
      {
        a1[10] += v6;
        goto LABEL_3;
      }
    }
  }
  return 0LL;
}
