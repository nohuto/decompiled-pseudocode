/*
 * XREFs of BcdOpenObject @ 0x1409A64B8
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140613D24 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407E206C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1407E21BC (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E6744 (PopBcdGetApplicationPathFromResumeObject.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408975E0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140899A20 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x14089A010 (BiCreateEfiEntry.c)
 *     BiBindEfiEntries @ 0x1409A0C88 (BiBindEfiEntries.c)
 *     PopBcdClearPendingResume @ 0x1409A18D8 (PopBcdClearPendingResume.c)
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409A396C (BiUpdateEfiEntry.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 *     BiExportEfiBootManager @ 0x140B3A0B8 (BiExportEfiBootManager.c)
 *     PopBcdSetPendingResume @ 0x140B4E554 (PopBcdSetPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140B6BBB0 (PopBcdEstablishResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140B85B08 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14089757C (BiGetCurrentBootEntryIdentifier.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408975E0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiStringFromGUID @ 0x1409A48E8 (BiStringFromGUID.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 *     BiIsObjectAliased @ 0x140B280AC (BiIsObjectAliased.c)
 */

NTSTATUS __cdecl BcdOpenObject(HANDLE BcdStoreHandle, const GUID *Identifier, PHANDLE BcdObjectHandle)
{
  char *v5; // r14
  unsigned int v6; // edi
  NTSTATUS v7; // eax
  NTSTATUS v8; // r8d
  int CurrentBootEntryIdentifier; // eax
  NTSTATUS v11; // ebx
  const wchar_t *v12; // rdx
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-71h] BYREF
  __int64 v16; // [rsp+30h] [rbp-69h] BYREF
  char *v17; // [rsp+38h] [rbp-61h]
  const GUID *v18; // [rsp+40h] [rbp-59h]
  unsigned int v19[6]; // [rsp+48h] [rbp-51h] BYREF
  char v20; // [rsp+60h] [rbp-39h] BYREF

  v18 = Identifier;
  v16 = 5111808LL;
  v17 = &v20;
  v14 = 0;
  *(_OWORD *)v19 = 0LL;
  BiStringFromGUID(&Identifier->Data1, (__int64)&v16);
  v5 = v17;
  v6 = 2;
  BiLogMessage(2LL, L"Opening object %s", v17);
  v7 = BiAcquireBcdSyncMutant((unsigned __int8)BcdStoreHandle & 1);
  if ( v7 < 0 )
  {
    BiLogMessage(4LL, L"BcdOpenObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v7);
    return v8;
  }
  *BcdObjectHandle = 0LL;
  Handle = 0LL;
  CurrentBootEntryIdentifier = BiOpenKey(BcdStoreHandle, L"Objects", 131097LL, &Handle);
  v11 = CurrentBootEntryIdentifier;
  if ( CurrentBootEntryIdentifier < 0 )
  {
    v12 = L"Failed to open key for all objects. Status: %x";
LABEL_5:
    v13 = 4LL;
    goto LABEL_6;
  }
  if ( (unsigned __int8)BiIsObjectAliased(v18, &v14) )
  {
    if ( v14 == 1 )
    {
      CurrentBootEntryIdentifier = BiGetCurrentBootEntryIdentifier(v19);
    }
    else
    {
      if ( v14 != 2 )
      {
        v11 = -1073741811;
        CurrentBootEntryIdentifier = -1073741811;
        goto LABEL_22;
      }
      CurrentBootEntryIdentifier = BiGetDefaultBootEntryIdentifier(BcdStoreHandle, v19);
    }
    v11 = CurrentBootEntryIdentifier;
    if ( CurrentBootEntryIdentifier >= 0 )
    {
      BiStringFromGUID(v19, (__int64)&v16);
      v5 = v17;
      BiLogMessage(2LL, L"Object alias resolves to %s", v17);
      goto LABEL_11;
    }
LABEL_22:
    v12 = L"Failed to get aliased identifier. Status: %x";
    goto LABEL_5;
  }
LABEL_11:
  CurrentBootEntryIdentifier = BiOpenKey(Handle, v5, 983103LL, BcdObjectHandle);
  v11 = CurrentBootEntryIdentifier;
  if ( CurrentBootEntryIdentifier >= 0 )
    goto LABEL_7;
  v12 = L"Failed to open object's key. Status: %x";
  if ( CurrentBootEntryIdentifier != -1073741772 )
    v6 = 4;
  v13 = v6;
LABEL_6:
  BiLogMessage(v13, v12, (unsigned int)CurrentBootEntryIdentifier);
LABEL_7:
  if ( Handle )
    BiCloseKey(Handle);
  BiReleaseBcdSyncMutant((unsigned __int8)BcdStoreHandle & 1);
  return v11;
}
