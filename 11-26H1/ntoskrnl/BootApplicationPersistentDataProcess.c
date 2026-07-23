/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140C85BB0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140CEA3E4 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpInitializePageDatabase @ 0x1406CE4D8 (BapdpInitializePageDatabase.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406CE6E8 (BapdpMarshallBootDataToRegistry.c)
 *     BapdpProcessEtwEvents @ 0x1406CEABC (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x1406CEC00 (BapdpProcessSpacesBootInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     BapdProcessFwRamdiskInformation @ 0x140CE8774 (BapdProcessFwRamdiskInformation.c)
 *     BapdProcessOslRamdiskInformation @ 0x140CE87D0 (BapdProcessOslRamdiskInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140CE8894 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessBootMetadata @ 0x140CE8960 (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140CE8A9C (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140CE8B6C (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140CE8C38 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140CE8D0C (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE8DD8 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140CE91D8 (BapdpProcessWmdResults.c)
 *     BapdpRecordIumStatus @ 0x140CE9478 (BapdpRecordIumStatus.c)
 *     BapdpRegisterWbclData @ 0x140CE9BB4 (BapdpRegisterWbclData.c)
 *     ExpInitializeMemoryMirroring @ 0x140CEA00C (ExpInitializeMemoryMirroring.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  struct _KTHREAD *Blink; // rbx
  struct _LIST_ENTRY *v4; // rax

  if ( stru_140E62450.Header.WaitListHead.Flink == &stru_140E62450.Header.WaitListHead )
    goto LABEL_12;
  if ( !a1 )
  {
    BapdpProcessWmdResults();
    BapdpProcessResumeInformation();
    BapdpProcessBitlockerStatus();
    BapdpRegisterWbclData(0LL);
    BapdpRegisterWbclData(1LL);
    BapdpProcessVsmKeyBlobs(0LL);
    BapdpProcessEDrvHintInfo();
    BapdpProcessFwUpdateResults();
    BapdProcessFwRamdiskInformation();
    BapdProcessOslRamdiskInformation();
    return;
  }
  if ( a1 != 1 )
  {
LABEL_12:
    if ( a1 == 2 )
    {
      BapdpInitializePageDatabase();
    }
    else if ( a1 == 3 )
    {
      BapdpProcessVsmKeyBlobs(1LL);
    }
  }
  else
  {
    ExpInitializeMemoryMirroring();
    BapdpProcessBootMetadata();
    BapdpProcessSpacesBootInformation(v1);
    BapdpRecordIumStatus();
    BapdpProcessEtwEvents(v2);
    BapdpProcessHSTIResults();
    BapdpMarshallBootDataToRegistry();
    while ( 1 )
    {
      Blink = (struct _KTHREAD *)stru_140E62450.Header.WaitListHead.Blink;
      if ( stru_140E62450.Header.WaitListHead.Blink->Flink != &stru_140E62450.Header.WaitListHead
        || (v4 = stru_140E62450.Header.WaitListHead.Blink->Blink, v4->Flink != stru_140E62450.Header.WaitListHead.Blink) )
      {
        __fastfail(3u);
      }
      stru_140E62450.Header.WaitListHead.Blink = stru_140E62450.Header.WaitListHead.Blink->Blink;
      v4->Flink = &stru_140E62450.Header.WaitListHead;
      if ( Blink == (struct _KTHREAD *)&stru_140E62450.Header.WaitListHead )
        break;
      ExFreePoolWithTag(Blink->Header.WaitListHead.Blink, 0);
      ExFreePoolWithTag(Blink, 0);
    }
  }
}
