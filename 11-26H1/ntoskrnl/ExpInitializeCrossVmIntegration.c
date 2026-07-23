/*
 * XREFs of ExpInitializeCrossVmIntegration @ 0x140CEDA8C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x140846CA8 (ExRegisterHost.c)
 */

void __fastcall ExpInitializeCrossVmIntegration(__int64 a1, __int64 a2)
{
  int v2; // [rsp+20h] [rbp-40h] BYREF
  __int64 v3; // [rsp+28h] [rbp-38h]
  _QWORD v4[4]; // [rsp+30h] [rbp-30h] BYREF
  _KWAIT_BLOCK *p_SparePtr; // [rsp+50h] [rbp-10h]

  if ( HvlHypervisorConnected )
  {
    v2 = 1;
    v3 = 0LL;
    v4[1] = &v2;
    v4[3] = ExpCrossVmIntHostCallback;
    v4[2] = 512LL;
    if ( (HvlpFlags & 2) != 0 )
    {
      v4[0] = 65551LL;
      p_SparePtr = (_KWAIT_BLOCK *)&WheapConfigTableLock.WaitBlock[0].SparePtr;
      if ( (int)ExRegisterHost(&WheapConfigTableLock.WaitBlock[0].SparePtr, a2, (unsigned __int16 *)v4) < 0 )
        WheapConfigTableLock.WaitBlock[0].SparePtr = 0LL;
    }
    else
    {
      v4[0] = 65552LL;
      p_SparePtr = &WheapConfigTableLock.WaitBlock[1];
      if ( (int)ExRegisterHost(&WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink, a2, (unsigned __int16 *)v4) < 0 )
        WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink = 0LL;
    }
  }
}
