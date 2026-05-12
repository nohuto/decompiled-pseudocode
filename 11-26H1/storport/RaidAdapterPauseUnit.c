/*
 * XREFs of RaidAdapterPauseUnit @ 0x140028B48
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140028880 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidSetUnitPauseTimer @ 0x140028BD4 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 */

__int64 __fastcall RaidAdapterPauseUnit(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 result; // rax
  unsigned __int8 v7; // [rsp+49h] [rbp+11h]

  v7 = BYTE1(a2);
  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  if ( Unit )
    return RaidSetUnitPauseTimer(Unit, (unsigned int)(1000 * a3));
  result = (__int64)&WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      return WPP_SF_DDD(
               WPP_GLOBAL_Control->AttachedDevice,
               49LL,
               &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
               v4,
               v7);
  }
  return result;
}
