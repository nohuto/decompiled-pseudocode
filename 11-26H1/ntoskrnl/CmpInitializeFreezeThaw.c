/*
 * XREFs of CmpInitializeFreezeThaw @ 0x14085D72C
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **CmpInitializeFreezeThaw()
{
  struct _LIST_ENTRY **result; // rax

  result = &CmpFreezeListLock.Header.WaitListHead.Blink;
  CmpFreezeListLock.SListFaultAddress = &CmpFreezeListLock.Header.WaitListHead.Blink;
  CmpFreezeListLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&CmpFreezeListLock.Header.WaitListHead.Blink;
  *(_QWORD *)&CmpFreezeListLock.Header.Lock = 0LL;
  if ( (unsigned int)CmFreezeThawTimeoutInSeconds > 0x384 )
    CmFreezeThawTimeoutInSeconds = 60;
  return result;
}
