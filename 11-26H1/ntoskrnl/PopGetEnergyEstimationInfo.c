/*
 * XREFs of PopGetEnergyEstimationInfo @ 0x140601114
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetEnergyEstimationInfo(_DWORD *a1)
{
  _DWORD *SystemArgument1; // r8
  unsigned int v2; // edx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  char *v6; // r10
  _DWORD *v7; // r8
  __int64 v8; // rcx

  SystemArgument1 = stru_140F12D20.SchedulerApc.SystemArgument1;
  v2 = 0;
  if ( stru_140F12D20.SchedulerApc.SystemArgument1 )
  {
    if ( (unsigned int)(16 * *(_DWORD *)stru_140F12D20.SchedulerApc.SystemArgument1 + 4) <= 0x24 )
    {
      *a1 = *(_DWORD *)stru_140F12D20.SchedulerApc.SystemArgument1;
      v4 = 0;
      if ( *SystemArgument1 )
      {
        do
        {
          v5 = (__int64)&SystemArgument1[14 * v4 + 2];
          v6 = (char *)a1 + 16LL * v4 - v5;
          v7 = (_DWORD *)(v5 + 40);
          v8 = 4LL;
          do
          {
            *(_DWORD *)((char *)v7 + (_QWORD)v6 - 36) = *v7;
            ++v7;
            --v8;
          }
          while ( v8 );
          SystemArgument1 = stru_140F12D20.SchedulerApc.SystemArgument1;
          ++v4;
        }
        while ( v4 < *(_DWORD *)stru_140F12D20.SchedulerApc.SystemArgument1 );
      }
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
