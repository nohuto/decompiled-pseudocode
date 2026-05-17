/*
 * XREFs of RtlQueryUnbiasedInterruptTime @ 0x1800BEB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpLogSetLastWin32ErrorEvent @ 0x180120AF8 (RtlpLogSetLastWin32ErrorEvent.c)
 */

__int64 __fastcall RtlQueryUnbiasedInterruptTime(_QWORD *a1)
{
  unsigned int v2; // eax
  struct _TEB *v3; // rcx

  if ( a1 )
  {
    *a1 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
    return 1LL;
  }
  else
  {
    v2 = RtlNtStatusToDosErrorNoTeb(0xC000000D);
    v3 = NtCurrentTeb();
    if ( g_dwLastErrorToBreakOn && v2 == g_dwLastErrorToBreakOn )
      __debugbreak();
    if ( v3->LastErrorValue != v2 )
    {
      v3->LastErrorValue = v2;
      if ( v2 )
      {
        if ( g_isErrorOriginProviderEnabled )
        {
          if ( v2 != 997 )
            RtlpLogSetLastWin32ErrorEvent(v2);
        }
      }
    }
    return 0LL;
  }
}
