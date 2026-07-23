/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x14049191C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  return (qword_140E3C188 - qword_140E3D880) & -(__int64)(qword_140E3D880 < (unsigned __int64)qword_140E3C188);
}
