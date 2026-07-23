/*
 * XREFs of RtlpFcSendFeatureUsageNotifications @ 0x140AC1E1C
 * Callers:
 *     RtlpFcDrainDelayedUsageReportBuffer @ 0x140AC1CDC (RtlpFcDrainDelayedUsageReportBuffer.c)
 * Callees:
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140AC1EBC (RtlpFcNotifyFeatureUsageTarget.c)
 */

__int64 __fastcall RtlpFcSendFeatureUsageNotifications(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int i; // esi
  __int64 v7; // rcx
  int v9; // eax

  v5 = -1073741275;
  if ( a3 )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v7 = 4LL * i;
      if ( a2[v7 + 1] == *(_DWORD *)a1
        && LOWORD(a2[v7 + 2]) == *(_WORD *)(a1 + 4)
        && ((a2[v7 + 2] & 0x10000) == 0 || (*(_BYTE *)(a1 + 6) & 1) != 0) )
      {
        v9 = RtlpFcNotifyFeatureUsageTarget(a1, &a2[v7 + 3]);
        if ( v9 >= 0 )
          v5 = v9;
      }
    }
  }
  return v5;
}
