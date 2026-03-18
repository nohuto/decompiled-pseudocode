/*
 * XREFs of WmipEventNotification @ 0x140A0D110
 * Callers:
 *     <none>
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1403B7080 (WmipUnreferenceRegEntry.c)
 *     ExInterlockedRemoveHeadList @ 0x14045D770 (ExInterlockedRemoveHeadList.c)
 *     WmipProcessEvent @ 0x140A0D184 (WmipProcessEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 WmipEventNotification()
{
  PLIST_ENTRY v0; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 Flink; // rcx
  __int64 result; // rax

  do
  {
    v0 = ExInterlockedRemoveHeadList(&WmipNPEvent, (PKSPIN_LOCK)&EtwpSecurityLock.QueuedScb);
    Blink = v0[1].Blink;
    LODWORD(Blink->Blink) = Blink[2].Blink;
    LODWORD(Blink[2].Blink) = 0;
    HIDWORD(Blink->Blink) = 0;
    WmipProcessEvent(Blink);
    Flink = (__int64)v0[1].Flink;
    if ( Flink )
      WmipUnreferenceRegEntry(Flink);
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&EtwpSecurityLock.880, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
