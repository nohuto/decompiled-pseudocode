/*
 * XREFs of CmpValidateGlobalFlushControlFlags @ 0x140856DE8
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

void CmpValidateGlobalFlushControlFlags()
{
  if ( ((__int64)CmpFreezeListLock.Timer.TimerListEntry.Flink & 0xFFFFFFFE) != 0 )
    LODWORD(CmpFreezeListLock.Timer.TimerListEntry.Flink) = 0;
}
