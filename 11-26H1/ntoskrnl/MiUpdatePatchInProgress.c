/*
 * XREFs of MiUpdatePatchInProgress @ 0x140701B84
 * Callers:
 *     MiLinkHotPatchToBase @ 0x140700F38 (MiLinkHotPatchToBase.c)
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
    stru_140E366D8.Header.WaitListHead.Blink = 0LL;
    stru_140E366D8.Header.WaitListHead.Flink = 0LL;
  }
  else
  {
    stru_140E366D8.Header.WaitListHead.Blink = a1;
    stru_140E366D8.Header.WaitListHead.Flink = a2;
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
