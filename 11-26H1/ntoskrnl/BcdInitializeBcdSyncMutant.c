/*
 * XREFs of BcdInitializeBcdSyncMutant @ 0x1408973B8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateMutant @ 0x140729700 (ZwCreateMutant.c)
 */

void BcdInitializeBcdSyncMutant(void)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+60h] [rbp+10h] BYREF

  MutantHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
  *(_QWORD *)&ObjectAttributes.Attributes = 592LL;
  ObjectAttributes.SecurityDescriptor = BiBcdMutantDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  if ( ZwCreateMutant(&MutantHandle, 0x1F0001u, &ObjectAttributes, 0) >= 0 )
  {
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&gLoadedDiffHivesLock.PropagateBoostsEntry.Next,
           (signed __int64)MutantHandle,
           0LL) )
    {
      ZwClose(MutantHandle);
    }
  }
}
