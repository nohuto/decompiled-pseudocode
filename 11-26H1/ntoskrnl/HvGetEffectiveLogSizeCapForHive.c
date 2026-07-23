/*
 * XREFs of HvGetEffectiveLogSizeCapForHive @ 0x140AA8CA4
 * Callers:
 *     CmpGenerateFlushControlData @ 0x1408BA65C (CmpGenerateFlushControlData.c)
 *     HvSwapLogFiles @ 0x140AA879C (HvSwapLogFiles.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140AA8950 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140AA89CC (HvTruncateAllLogFilesIfRequired.c)
 *     CmpDoReconcileNextHive @ 0x140AA8A70 (CmpDoReconcileNextHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x140AA8BCC (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpAdjustRequestedFileSize @ 0x140AA8E58 (CmpAdjustRequestedFileSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvGetEffectiveLogSizeCapForHive(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // r9
  int v3; // ecx
  unsigned __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 result; // rax

  if ( (a1[1030] & 0x800) != 0 )
    return 0x2000000LL;
  v1 = a1[70];
  v2 = a1[47];
  v3 = 0x2000;
  if ( v1 < 0x2000 )
    v3 = v1;
  v4 = (unsigned int)(8 * v3);
  v5 = v1 - v3;
  if ( v5 )
    v4 += (unsigned __int64)v5 >> 2;
  if ( v4 >= v2 )
    LODWORD(v4) = v2;
  result = (unsigned int)v4;
  if ( (unsigned int)CmpLogFileSizeCap >= 0x80000 && CmpLogFileSizeCap < (unsigned int)v4 )
    result = (unsigned int)CmpLogFileSizeCap;
  if ( (unsigned int)result < 0x8000 )
    return 0x8000LL;
  return result;
}
