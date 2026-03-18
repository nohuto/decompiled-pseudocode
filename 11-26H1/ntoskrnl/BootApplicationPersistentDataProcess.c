/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140C7FBB0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140CE4044 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpInitializePageDatabase @ 0x1406CA49C (BapdpInitializePageDatabase.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406CA6B8 (BapdpMarshallBootDataToRegistry.c)
 *     BapdpProcessEtwEvents @ 0x1406CAA8C (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x1406CABD0 (BapdpProcessSpacesBootInformation.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     BapdProcessFwRamdiskInformation @ 0x140CE23D4 (BapdProcessFwRamdiskInformation.c)
 *     BapdProcessOslRamdiskInformation @ 0x140CE2430 (BapdProcessOslRamdiskInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140CE24F4 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessBootMetadata @ 0x140CE25C0 (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140CE26FC (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140CE27CC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140CE2898 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140CE296C (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140CE2E38 (BapdpProcessWmdResults.c)
 *     BapdpRecordIumStatus @ 0x140CE30D8 (BapdpRecordIumStatus.c)
 *     BapdpRegisterWbclData @ 0x140CE3814 (BapdpRegisterWbclData.c)
 *     ExpInitializeMemoryMirroring @ 0x140CE3C6C (ExpInitializeMemoryMirroring.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax

  if ( (__int64 *)qword_140E622C0 == &qword_140E622C0 )
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
      v3 = (PVOID *)qword_140E622C8;
      if ( *(__int64 **)qword_140E622C8 != &qword_140E622C0
        || (v4 = (PVOID *)*((_QWORD *)qword_140E622C8 + 1), *v4 != qword_140E622C8) )
      {
        __fastfail(3u);
      }
      qword_140E622C8 = (PVOID)*((_QWORD *)qword_140E622C8 + 1);
      *v4 = &qword_140E622C0;
      if ( v3 == (PVOID *)&qword_140E622C0 )
        break;
      ExFreePoolWithTag(v3[2], 0);
      ExFreePoolWithTag(v3, 0);
    }
  }
}
