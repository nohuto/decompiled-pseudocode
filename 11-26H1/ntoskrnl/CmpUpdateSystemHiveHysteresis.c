/*
 * XREFs of CmpUpdateSystemHiveHysteresis @ 0x140AFCC90
 * Callers:
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     CmpDoQueueSystemHiveHysteresis @ 0x140857618 (CmpDoQueueSystemHiveHysteresis.c)
 */

void __fastcall CmpUpdateSystemHiveHysteresis(struct _KTHREAD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax

  if ( a1 == stru_140E098B8.WaitBlock[2].Thread && WheapPfaLock.TrapFrame )
  {
    v3 = 100 * (a2 + 4096) / *(_DWORD *)&WheapPfaLock.ApcStateFill[8];
    if ( a2 <= a3 )
    {
      if ( !*((_BYTE *)&WheapPfaLock.MiscFlags + 4) && v3 < LODWORD(WheapPfaLock.FirstArgument) )
      {
        *((_BYTE *)&WheapPfaLock.MiscFlags + 4) = 1;
        if ( LOBYTE(WheapPfaLock.SystemCallNumber) == 1 )
        {
          if ( CmpDoQueueSystemHiveHysteresis(v3) != 1 )
          {
LABEL_15:
            *((_BYTE *)&WheapPfaLock.MiscFlags + 4) = 0;
            return;
          }
LABEL_14:
          LOBYTE(WheapPfaLock.SystemCallNumber) = 0;
        }
      }
    }
    else if ( v3 > WheapPfaLock.ReadyTime && !LOBYTE(WheapPfaLock.SystemCallNumber) )
    {
      LOBYTE(WheapPfaLock.SystemCallNumber) = 1;
      if ( *((_BYTE *)&WheapPfaLock.MiscFlags + 4) == 1 )
      {
        if ( CmpDoQueueSystemHiveHysteresis(v3) == 1 )
          goto LABEL_15;
        goto LABEL_14;
      }
    }
  }
}
