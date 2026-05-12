/*
 * XREFs of sub_1400A5B50 @ 0x1400A5B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1400A5B50(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rbx

  v5 = a5;
  if ( *a5 && !_InterlockedExchange(&dword_140168608, 1) && qword_140168530 )
    RtlArmFeatureUsageProviderFlushNotification(qword_140168530, 1LL);
  if ( v5[1] )
  {
    WORD2(a5) = *((_WORD *)v5 + 4);
    HIWORD(a5) = *((_WORD *)v5 + 2);
    LODWORD(a5) = a1;
    RtlRecordFeatureUsage(&a5, 1LL);
  }
}
