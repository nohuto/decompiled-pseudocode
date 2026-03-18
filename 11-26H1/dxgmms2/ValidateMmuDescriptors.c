/*
 * XREFs of ValidateMmuDescriptors @ 0x1400B0248
 * Callers:
 *     CreateAndInitializeSegmentsAndMmus @ 0x1400AE950 (CreateAndInitializeSegmentsAndMmus.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

char __fastcall ValidateMmuDescriptors(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int16 i; // r9
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( a4 && a4 <= a3 )
  {
    for ( i = 0; i < a3; ++i )
    {
      if ( *(_DWORD *)(a2 + 16LL * i) )
      {
        WdLogSingleEntry3(1LL, i, *(unsigned int *)(a2 + 16LL * i), 0LL);
        WdLogGlobalForLineNumber = 393;
        goto LABEL_14;
      }
      v5 = *(_QWORD *)(a2 + 16LL * i + 8);
      if ( !v5 )
      {
        WdLogSingleEntry2(1LL, i, 0LL);
        WdLogGlobalForLineNumber = 402;
        goto LABEL_14;
      }
      if ( (v5 & 0xFFF) != 0 )
      {
        WdLogSingleEntry2(1LL, i, *(_QWORD *)(a2 + 16LL * i + 8));
        WdLogGlobalForLineNumber = 411;
        goto LABEL_14;
      }
    }
    return 1;
  }
  else
  {
    WdLogSingleEntry2(1LL, a4, a3);
    WdLogGlobalForLineNumber = 373;
LABEL_14:
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 0;
  }
}
