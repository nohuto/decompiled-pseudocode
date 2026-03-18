/*
 * XREFs of VidMmValidateHistoryBuffers @ 0x1400A3D50
 * Callers:
 *     <none>
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidMmValidateHistoryBuffers(int **a1, __int64 a2)
{
  int **i; // r8
  int *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( i = a1; i != &a1[a2]; ++i )
  {
    v3 = *i;
    if ( (**(_DWORD **)(**(_QWORD **)v3 + 368LL) & 0x4000) == 0 )
    {
      WdLogSingleEntry2(1LL, v3, **(_QWORD **)v3);
      WdLogGlobalForLineNumber = 26712;
      DxgkLogInternalTriageEvent(v5, 0x40000LL);
      return 3221225473LL;
    }
    if ( v3[172] < 2 )
    {
      WdLogSingleEntry2(1LL, v3, v3[172]);
      WdLogGlobalForLineNumber = 26727;
      DxgkLogInternalTriageEvent(v4, 0x40000LL);
      VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v3 + 1) + 32LL), 17);
      return 3221225473LL;
    }
  }
  return 0LL;
}
