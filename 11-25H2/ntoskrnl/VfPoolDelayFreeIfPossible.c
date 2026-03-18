/*
 * XREFs of VfPoolDelayFreeIfPossible @ 0x1404BBAD0
 * Callers:
 *     VfUtilFreePoolCheckIRQL @ 0x1404BBAB0 (VfUtilFreePoolCheckIRQL.c)
 *     VfUtilFreePoolDispatchLevel @ 0x140604330 (VfUtilFreePoolDispatchLevel.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VfPoolDelayFreeIfPossible(PSLIST_ENTRY ListEntry, unsigned int a2)
{
  char *v2; // rbx
  unsigned __int16 v3; // di

  if ( a2 <= 1
    && (v2 = (char *)&VfPoolDelayFreeData + 64 * (__int64)(int)a2,
        _InterlockedIncrement((volatile signed __int32 *)v2 + 13),
        *((_DWORD *)v2 + 12)) )
  {
    v3 = *(_WORD *)v2;
    if ( *(_WORD *)v2 >= 0x200u )
    {
      _InterlockedIncrement((volatile signed __int32 *)v2 + 14);
      ExFreePoolWithTag(ListEntry, 0);
LABEL_5:
      KeSetEvent((PRKEVENT)(v2 + 16), 1, 0);
      return;
    }
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v2, ListEntry);
    if ( v3 >= 0x40u )
      goto LABEL_5;
  }
  else
  {
    ExFreePoolWithTag(ListEntry, 0);
  }
}
