/*
 * XREFs of CmRegisterSystemHiveLimitCallback @ 0x140857508
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     CmpDoQueueSystemHiveHysteresis @ 0x140857618 (CmpDoQueueSystemHiveHysteresis.c)
 */

__int64 __fastcall CmRegisterSystemHiveLimitCallback(__int64 a1, __int64 a2, struct _LIST_ENTRY *a3)
{
  int v3; // ecx
  unsigned int v4; // ebx

  if ( stru_140E098B8.WaitBlock[2].Thread )
  {
    HIDWORD(a2) = 0;
    v3 = *(_DWORD *)(stru_140E098B8.WaitBlock[2].Thread->ThreadLock + 40) + 4096;
    LODWORD(a2) = (unsigned int)(100 * v3) % *(_DWORD *)&WheapPfaLock.ApcStateFill[8];
    v4 = (unsigned int)(100 * v3) / *(_DWORD *)&WheapPfaLock.ApcStateFill[8];
  }
  else
  {
    v4 = 0;
  }
  if ( !WheapPfaLock.TrapFrame )
  {
    LODWORD(WheapPfaLock.FirstArgument) = 80;
    WheapPfaLock.TrapFrame = (_KTRAP_FRAME *)PpSystemHiveLimitCallback;
    WheapPfaLock.ReadyTime = 90;
    WheapPfaLock.ApcState.ApcListHead[0].Flink = a3;
    *((_BYTE *)&WheapPfaLock.MiscFlags + 4) = 1;
    if ( v4 >= 0x5A
      && (LOBYTE(WheapPfaLock.SystemCallNumber) = 1, (unsigned __int8)CmpDoQueueSystemHiveHysteresis(v4, a2)) )
    {
      *((_BYTE *)&WheapPfaLock.MiscFlags + 4) = 0;
    }
    else
    {
      LOBYTE(WheapPfaLock.SystemCallNumber) = 0;
    }
  }
  return v4;
}
