/*
 * XREFs of PopSetGlobalUserStatus @ 0x140A3EC5C
 * Callers:
 *     PopSetSessionUserStatus @ 0x140A3E39C (PopSetSessionUserStatus.c)
 * Callees:
 *     PopExtendConnectionState @ 0x1407DDD34 (PopExtendConnectionState.c)
 *     PopEvaluateGlobalUserStatus @ 0x140A3ECC8 (PopEvaluateGlobalUserStatus.c)
 */

__int64 __fastcall PopSetGlobalUserStatus(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  char v6; // bl
  int v7; // eax
  int v8; // eax

  v4 = a2;
  v5 = (unsigned int)a1;
  if ( *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] )
  {
    if ( (unsigned int)a1 >= *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] )
      PopExtendConnectionState(a1);
    if ( *(_DWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[64] )
    {
      a1 = *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[80];
      a2 = v5 >> 3;
      v6 = v5 & 7;
      v7 = *(char *)(a2 + *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[80]);
      if ( v4 )
        v8 = v7 & ~(1 << v6);
      else
        v8 = v7 | (1 << v6);
      *(_BYTE *)(a2 + *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[80]) = v8;
    }
  }
  return PopEvaluateGlobalUserStatus(a1, a2, a3, a4);
}
