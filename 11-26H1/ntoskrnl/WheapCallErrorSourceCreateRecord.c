/*
 * XREFs of WheapCallErrorSourceCreateRecord @ 0x1403E14C8
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     WheapReportBootError @ 0x1406D8A2C (WheapReportBootError.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceCreateRecord(int *a1, __int64 a2)
{
  int v3; // r9d
  signed __int32 v4; // eax
  void **p_InitialStack; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    if ( (unsigned int)a1[10] <= 0x12 )
    {
      v3 = a1[33] & 0x40000000;
      if ( a1[27] != 3 )
      {
        while ( 1 )
        {
          v4 = a1[23];
          if ( v4 < 0 )
            break;
          if ( v4 == _InterlockedCompareExchange(a1 + 23, v4 + 1, v4) )
          {
            p_InitialStack = &WheapInUsePageOfflineNotifyLock.InitialStack;
            if ( v3 )
              p_InitialStack = (void **)&unk_140EEF670;
            if ( p_InitialStack[8 * (__int64)a1[10]] )
            {
              result = guard_dispatch_icall_no_overrides(a1 + 24, a2);
              goto LABEL_10;
            }
            break;
          }
        }
      }
    }
  }
  result = 3221225474LL;
LABEL_10:
  _InterlockedDecrement(a1 + 23);
  return result;
}
