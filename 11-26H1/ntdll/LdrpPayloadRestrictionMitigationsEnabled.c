/*
 * XREFs of LdrpPayloadRestrictionMitigationsEnabled @ 0x1800EB914
 * Callers:
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     <none>
 */

char LdrpPayloadRestrictionMitigationsEnabled()
{
  char v0; // dl
  char v1; // r8
  char v2; // al

  v0 = 0;
  if ( (((unsigned __int64)qword_1801E3508 >> 20) & 3) == 1
    || (BYTE2(qword_1801E3508) & 3) == 1
    || (BYTE3(qword_1801E3508) & 3) == 1
    || (((unsigned __int64)qword_1801E3508 >> 28) & 3) == 1
    || (BYTE4(qword_1801E3508) & 3) == 1
    || (v1 = 0, (BYTE5(qword_1801E3508) & 3) == 1) )
  {
    v1 = 1;
  }
  if ( (((unsigned __int64)qword_1801E3540 >> 20) & 3) == 1
    || (BYTE2(qword_1801E3540) & 3) == 1
    || (BYTE3(qword_1801E3540) & 3) == 1
    || (((unsigned __int64)qword_1801E3540 >> 28) & 3) == 1
    || (BYTE4(qword_1801E3540) & 3) == 1
    || (v2 = 0, (BYTE5(qword_1801E3540) & 3) == 1) )
  {
    v2 = 1;
  }
  if ( v1 || v2 )
    return 1;
  return v0;
}
