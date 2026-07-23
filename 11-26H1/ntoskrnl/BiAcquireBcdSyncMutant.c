/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x1409A513C
 * Callers:
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 *     BcdCreateObject @ 0x140777E00 (BcdCreateObject.c)
 *     BcdQueryObject @ 0x14077CA50 (BcdQueryObject.c)
 *     BcdOpenSystemStore @ 0x14077E2CC (BcdOpenSystemStore.c)
 *     BcdMarkAsSystemStore @ 0x140897440 (BcdMarkAsSystemStore.c)
 *     BcdDeleteObject @ 0x140897504 (BcdDeleteObject.c)
 *     BcdCloseStore @ 0x1409A1068 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     PopBcdSetPendingResume @ 0x140B4E554 (PopBcdSetPendingResume.c)
 *     BcdFlushStore @ 0x140B56C7C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140B6D9BC (BcdForciblyUnloadStore.c)
 *     BcdEnumerateObjects @ 0x140B6FB7C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x140728040 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenMutant @ 0x14072A5C0 (ZwOpenMutant.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+68h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 )
    return 0;
  Next = gLoadedDiffHivesLock.PropagateBoostsEntry.Next;
  MutantHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( !gLoadedDiffHivesLock.PropagateBoostsEntry.Next )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenMutant(&MutantHandle, 0x100000u, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64(
        (volatile signed __int64 *)&gLoadedDiffHivesLock.PropagateBoostsEntry.Next,
        -1LL,
        0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)&gLoadedDiffHivesLock.PropagateBoostsEntry.Next,
             (signed __int64)MutantHandle,
             0LL) )
      {
        ZwClose(MutantHandle);
      }
    }
    Next = gLoadedDiffHivesLock.PropagateBoostsEntry.Next;
  }
  if ( Next == (struct _SINGLE_LIST_ENTRY *)-1LL )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(Next, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
