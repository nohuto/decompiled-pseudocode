/*
 * XREFs of PpmGetPlatformSelectionVetoCounts @ 0x1404F27E0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmGetPlatformSelectionVetoCounts(unsigned int a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = a1;
  v4 = PpmPlatformStates;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v4 )
  {
    if ( (unsigned int)result < *(_DWORD *)v4 )
    {
      v5 = *(_QWORD *)(v4 + 48);
      *a2 = *(_QWORD *)(1032 * result + v5 + 104);
      result = *(_QWORD *)(1032 * result + v5 + 96);
      *a3 = result;
    }
  }
  return result;
}
