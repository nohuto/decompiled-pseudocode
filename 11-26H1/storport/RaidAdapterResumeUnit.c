/*
 * XREFs of RaidAdapterResumeUnit @ 0x140028A9C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140028880 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidResumeUnitQueue @ 0x140029480 (RaidResumeUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 */

char __fastcall RaidAdapterResumeUnit(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 Unit; // rax
  __int64 v4; // rdi
  PDEVICE_OBJECT *v5; // rax
  unsigned __int8 v7; // [rsp+49h] [rbp+11h]

  v7 = BYTE1(a2);
  v2 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v4 = Unit;
  if ( Unit )
  {
    LOBYTE(v5) = KeCancelTimer((PKTIMER)(Unit + 1184));
    if ( (_BYTE)v5 )
    {
      LODWORD(v5) = RaidResumeUnitQueue(v4);
      if ( (_DWORD)v5 )
        LOBYTE(v5) = RaidUnitRestartQueue(v4, 0LL);
    }
  }
  else
  {
    v5 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      LODWORD(v5) = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( ((unsigned __int8)v5 & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        LOBYTE(v5) = WPP_SF_DDD(
                       WPP_GLOBAL_Control->AttachedDevice,
                       50LL,
                       &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
                       v2,
                       v7);
    }
  }
  return (char)v5;
}
