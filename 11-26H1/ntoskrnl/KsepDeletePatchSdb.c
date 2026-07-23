/*
 * XREFs of KsepDeletePatchSdb @ 0x1407C1488
 * Callers:
 *     KseShimDatabaseOpen @ 0x1409D6414 (KseShimDatabaseOpen.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     ZwDeleteFile @ 0x140729B20 (ZwDeleteFile.c)
 */

NTSTATUS KsepDeletePatchSdb()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  char StackBase; // al
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvpatch.sdb");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwDeleteFile(&ObjectAttributes);
  if ( result < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v1) = result;
    StackBase = (char)stru_140E66D40.StackBase;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v1) = 590370;
    if ( (StackBase & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Failed to delete patch shim database!\n");
    return KsepLogError(0LL, (__int64)"KSE: Failed to delete patch shim database!\n");
  }
  return result;
}
