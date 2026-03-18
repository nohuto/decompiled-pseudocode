/*
 * XREFs of CmpUpdateSystemHiveHysteresis @ 0x140AFAA28
 * Callers:
 *     HvFreeHivePartial @ 0x1408B7A44 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     CmpDoQueueSystemHiveHysteresis @ 0x140851308 (CmpDoQueueSystemHiveHysteresis.c)
 */

void __fastcall CmpUpdateSystemHiveHysteresis(struct _KTHREAD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax

  if ( a1 == stru_140E098B8.WaitBlock[2].Thread && *(_QWORD *)&WheapPfaLock.WaitRegister.Flags )
  {
    v3 = 100 * (a2 + 4096) / LODWORD(WheapPfaLock.FirstArgument);
    if ( a2 <= a3 )
    {
      if ( !BYTE1(WheapPfaLock.SchedulingGroup) && v3 < WheapPfaLock.ReadyTime )
      {
        BYTE1(WheapPfaLock.SchedulingGroup) = 1;
        if ( LOBYTE(WheapPfaLock.SchedulingGroup) == 1 )
        {
          if ( CmpDoQueueSystemHiveHysteresis(v3) != 1 )
          {
LABEL_15:
            BYTE1(WheapPfaLock.SchedulingGroup) = 0;
            return;
          }
LABEL_14:
          LOBYTE(WheapPfaLock.SchedulingGroup) = 0;
        }
      }
    }
    else if ( v3 > WheapPfaLock.SystemCallNumber && !LOBYTE(WheapPfaLock.SchedulingGroup) )
    {
      LOBYTE(WheapPfaLock.SchedulingGroup) = 1;
      if ( BYTE1(WheapPfaLock.SchedulingGroup) == 1 )
      {
        if ( CmpDoQueueSystemHiveHysteresis(v3) == 1 )
          goto LABEL_15;
        goto LABEL_14;
      }
    }
  }
}
