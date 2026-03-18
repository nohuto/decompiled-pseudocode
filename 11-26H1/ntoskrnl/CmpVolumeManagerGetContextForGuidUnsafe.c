/*
 * XREFs of CmpVolumeManagerGetContextForGuidUnsafe @ 0x140905B48
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14090792C (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CmpVolumeManagerGetContextForGuidUnsafe(__int64 a1, _QWORD *a2)
{
  struct _LIST_ENTRY *Blink; // r8
  struct _LIST_ENTRY *v3; // r9
  char *v4; // rcx

  Blink = KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  v3 = 0LL;
  while ( Blink != (struct _LIST_ENTRY *)&KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList )
  {
    v4 = (char *)Blink[2].Flink - *a2;
    if ( !v4 )
      v4 = (char *)Blink[2].Blink - a2[1];
    if ( !v4 )
    {
      v3 = Blink;
      if ( Blink && _InterlockedIncrement64((volatile signed __int64 *)&Blink[1].Blink) <= 1 )
        __fastfail(0xEu);
      return v3;
    }
    Blink = Blink->Flink;
  }
  return v3;
}
