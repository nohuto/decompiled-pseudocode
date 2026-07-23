/*
 * XREFs of PfSnCheckScenario @ 0x1409D163C
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x140ACAAC0 (PfSnOperationProcess.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  int v4; // r8d

  v2 = a1;
  v3 = 0;
  v4 = *(_DWORD *)&stru_140E66D40.WaitBlockFill11[4 * v2 + 144];
  if ( v4 )
  {
    if ( (stru_140E67200.WaitBlockFill5[32] & 1) == 0 || (stru_140E66D40.AbCompletedIoQoSBoostCount & 1) != 0 )
    {
      if ( *(_DWORD *)&stru_140E67200.ApcStateFill[28] == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( stru_140E66D40.Padding[2] )
      {
        *a2 = v4;
      }
      else
      {
        return (unsigned int)-1073741127;
      }
    }
    else
    {
      return (unsigned int)-1073741725;
    }
  }
  else
  {
    return (unsigned int)-1073741399;
  }
  return v3;
}
