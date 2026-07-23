/*
 * XREFs of RtlpGetNextWnfNameSubscription @ 0x18011128C
 * Callers:
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18003ACE8 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x180111120 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetNextWnfNameSubscription(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rcx
  __int64 i; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 32;
  if ( v1 )
  {
    v3 = *(_QWORD **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v1 = (unsigned __int64)v3;
        v3 = (_QWORD *)*v3;
      }
      while ( v3 );
    }
  }
  else
  {
    for ( i = *(_QWORD *)(v2 + 16); ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(_QWORD *)v1 == v2 )
        break;
      v2 = v1;
    }
  }
  return (v1 - 32) & -(__int64)(v1 != 0);
}
