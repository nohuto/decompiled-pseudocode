/*
 * XREFs of MiUpdatePatchInProgress @ 0x1406FCEB4
 * Callers:
 *     MiLinkHotPatchToBase @ 0x1406FC268 (MiLinkHotPatchToBase.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiUpdatePatchInProgress(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2, char a3)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 result; // rax

  if ( (a3 & 2) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      result = KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  if ( (a3 & 1) != 0 )
  {
    stru_140E36558.Header.WaitListHead.Blink = 0LL;
    stru_140E36558.Header.WaitListHead.Flink = 0LL;
  }
  else
  {
    stru_140E36558.Header.WaitListHead.Blink = a1;
    stru_140E36558.Header.WaitListHead.Flink = a2;
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
