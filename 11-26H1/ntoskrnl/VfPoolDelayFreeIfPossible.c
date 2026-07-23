/*
 * XREFs of VfPoolDelayFreeIfPossible @ 0x1403C1660
 * Callers:
 *     VfUtilFreePoolCheckIRQL @ 0x1403C1640 (VfUtilFreePoolCheckIRQL.c)
 *     VfUtilFreePoolDispatchLevel @ 0x1406443C0 (VfUtilFreePoolDispatchLevel.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall VfPoolDelayFreeIfPossible(PSLIST_ENTRY ListEntry, unsigned int a2)
{
  unsigned __int16 *v2; // rbx
  unsigned __int16 v3; // di

  if ( a2 <= 1
    && (v2 = &stru_140E27C48.Timer.Processor + 32 * (__int64)(int)a2,
        _InterlockedIncrement((volatile signed __int32 *)v2 + 13),
        *((_DWORD *)v2 + 12)) )
  {
    v3 = *v2;
    if ( *v2 >= 0x200u )
    {
      _InterlockedIncrement((volatile signed __int32 *)v2 + 14);
      ExFreePoolWithTag(ListEntry, 0);
      goto LABEL_5;
    }
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v2, ListEntry);
    if ( v3 >= 0x40u )
LABEL_5:
      KeSetEvent((PRKEVENT)(v2 + 8), 1, 0);
  }
  else
  {
    ExFreePoolWithTag(ListEntry, 0);
  }
}
