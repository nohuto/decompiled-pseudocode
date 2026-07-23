/*
 * XREFs of HalpDpInitSystem @ 0x140BF10C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpDpInitDiscard @ 0x140CB50AC (HalpDpInitDiscard.c)
 */

__int64 HalpDpInitSystem()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)HalpInterruptModel() == 1 )
  {
    if ( v0 == 7 )
    {
      HalpDpInitDiscard(v1);
    }
    else if ( v0 == 17 )
    {
      off_140E008D8[0] = (__int64 (__fastcall *)())HalpDpReplaceBegin;
      off_140E008E0[0] = HalpDpReplaceTarget;
      off_140E008E8[0] = HalpDpReplaceControl;
      off_140E008F0[0] = (__int64 (__fastcall *)())HalpDpReplaceEnd;
      off_140E00938[0] = HalpInterruptMaskLevelTriggeredLines;
      off_140E00948[0] = HalpDpGetInterruptReplayState;
      off_140E00950[0] = HalpDpReplayInterrupts;
      off_140E00940[0] = HalpInterruptUnmaskLevelTriggeredLines;
    }
  }
  return 0LL;
}
