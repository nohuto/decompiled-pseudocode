/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x140497DCC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A5C194 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  return (qword_140E3C008 - qword_140E3D700) & -(__int64)(qword_140E3D700 < (unsigned __int64)qword_140E3C008);
}
