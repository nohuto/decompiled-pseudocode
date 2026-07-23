/*
 * XREFs of KiSetVpThreadHrTimerActive @ 0x140485974
 * Callers:
 *     KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiSetVpThreadHrTimerActive(__int64 a1, char a2)
{
  signed __int32 *v2; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // ett

  v2 = *(signed __int32 **)(a1 + 36600);
  if ( !v2 )
    return 0;
  _m_prefetchw(v2);
  v4 = *v2;
  if ( a2 )
  {
    do
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange(v2, v4 | 0x80000, v4);
    }
    while ( v6 != v4 );
    return (v4 & 0x80000) == 0;
  }
  else
  {
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(v2, v4 & 0xFFF7FFFF, v4);
    }
    while ( v5 != v4 );
    return (v4 & 0x80000) != 0;
  }
}
