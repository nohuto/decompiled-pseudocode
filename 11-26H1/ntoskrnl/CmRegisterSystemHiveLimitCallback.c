/*
 * XREFs of CmRegisterSystemHiveLimitCallback @ 0x1408511F8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     CmpDoQueueSystemHiveHysteresis @ 0x140851308 (CmpDoQueueSystemHiveHysteresis.c)
 */

__int64 __fastcall CmRegisterSystemHiveLimitCallback(__int64 a1, __int64 a2, $353D57E818BB6F967B4B818D974CF463 a3)
{
  int v3; // ecx
  unsigned int v4; // ebx

  if ( stru_140E098B8.WaitBlock[2].Thread )
  {
    HIDWORD(a2) = 0;
    v3 = *(_DWORD *)(stru_140E098B8.WaitBlock[2].Thread->ThreadLock + 40) + 4096;
    LODWORD(a2) = (unsigned int)(100 * v3) % LODWORD(WheapPfaLock.FirstArgument);
    v4 = (unsigned int)(100 * v3) / LODWORD(WheapPfaLock.FirstArgument);
  }
  else
  {
    v4 = 0;
  }
  if ( !*(_QWORD *)&WheapPfaLock.WaitRegister.Flags )
  {
    WheapPfaLock.ReadyTime = 80;
    *(_QWORD *)&WheapPfaLock.WaitRegister.Flags = PpSystemHiveLimitCallback;
    WheapPfaLock.SystemCallNumber = 90;
    *($353D57E818BB6F967B4B818D974CF463 *)((char *)&WheapPfaLock.116 + 4) = a3;
    BYTE1(WheapPfaLock.SchedulingGroup) = 1;
    if ( v4 >= 0x5A
      && (LOBYTE(WheapPfaLock.SchedulingGroup) = 1, (unsigned __int8)CmpDoQueueSystemHiveHysteresis(v4, a2)) )
    {
      BYTE1(WheapPfaLock.SchedulingGroup) = 0;
    }
    else
    {
      LOBYTE(WheapPfaLock.SchedulingGroup) = 0;
    }
  }
  return v4;
}
