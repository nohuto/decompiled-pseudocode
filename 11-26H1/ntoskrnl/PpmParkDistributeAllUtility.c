/*
 * XREFs of PpmParkDistributeAllUtility @ 0x14025AAC0
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x14025AB54 (PpmParkDistributeUtility.c)
 */

__int64 PpmParkDistributeAllUtility()
{
  __int64 result; // rax
  unsigned int i; // ebx

  result = dword_140F106CC;
  for ( i = 0; i < PopModernStandbyStateNotify.SystemCallNumber; ++i )
    result = PpmParkDistributeUtility(
               (struct _KAFFINITY_EX *)(1264LL * i + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 16LL),
               (struct _KAFFINITY_EX *)(1264LL * i + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 280LL),
               0,
               0LL);
  return result;
}
