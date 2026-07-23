/*
 * XREFs of RtlpComputeBackupIndex @ 0x1800A5074
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A5F50 (RtlDetermineDosPathNameType_Ustr.c)
 */

__int64 __fastcall RtlpComputeBackupIndex(__int64 a1)
{
  unsigned __int16 *v1; // r8
  int v3; // r9d
  unsigned int i; // edx
  __int64 v5; // rax

  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(a1) != 1 )
    return 3LL;
  v3 = 0;
  for ( i = 2; ; ++i )
  {
    if ( i >= *v1 >> 1 )
      return i;
    v5 = *((_QWORD *)v1 + 1);
    if ( (*(_WORD *)(v5 + 2LL * i) == 92 || *(_WORD *)(v5 + 2LL * i) == 47) && ++v3 == 2 )
      break;
  }
  return i + 1;
}
