/*
 * XREFs of wil_details_OnFeatureUsageProviderFlushNotification @ 0x14007A670
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_RecordCachedUsage @ 0x140002778 (wil_details_RecordCachedUsage.c)
 */

unsigned __int64 __fastcall wil_details_OnFeatureUsageProviderFlushNotification(int a1)
{
  unsigned __int64 result; // rax
  _UNKNOWN **i; // rbx

  if ( a1 == 1 )
  {
    result = (unsigned int)_InterlockedExchange(&g_wil_details_featureUsageCached, 0);
    if ( (_DWORD)result )
    {
      for ( i = &wil_details_featureDescriptors_a; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
      {
        if ( *i )
        {
LABEL_15:
          if ( i )
          {
            result = *(unsigned int *)i[1];
            if ( (result & 1) != 0 )
              result = (unsigned __int64)wil_details_RecordCachedUsage(*((_DWORD *)i + 6), (__int64)i[1]);
            for ( i += 7; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
            {
              if ( *i )
                goto LABEL_15;
            }
          }
          return result;
        }
      }
    }
  }
  return result;
}
