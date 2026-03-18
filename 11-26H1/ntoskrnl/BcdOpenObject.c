/*
 * XREFs of BcdOpenObject @ 0x1409D54D8
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140610A68 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x1406D5E6C (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407DDA3C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1407DDB8C (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E16B4 (PopBcdGetApplicationPathFromResumeObject.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408911E4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140893620 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140893C10 (BiCreateEfiEntry.c)
 *     BiBindEfiEntries @ 0x1409CFCA8 (BiBindEfiEntries.c)
 *     PopBcdClearPendingResume @ 0x1409D08F8 (PopBcdClearPendingResume.c)
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409D298C (BiUpdateEfiEntry.c)
 *     BiBindEfiBootManager @ 0x1409D2C60 (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x1409D4E8C (BiBuildIdentifierList.c)
 *     BiExportEfiBootManager @ 0x140B37EA8 (BiExportEfiBootManager.c)
 *     PopBcdSetPendingResume @ 0x140B4C7C4 (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x140B5C260 (SepSecureBootCorrectBcd.c)
 *     PopBcdEstablishResumeObject @ 0x140B68C20 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140891180 (BiGetCurrentBootEntryIdentifier.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408911E4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiStringFromGUID @ 0x1409D3908 (BiStringFromGUID.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiOpenKey @ 0x1409D5F14 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 *     BiIsObjectAliased @ 0x140B25E4C (BiIsObjectAliased.c)
 */

__int64 __fastcall BcdOpenObject(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  char *v5; // r14
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // r8d
  int CurrentBootEntryIdentifier; // eax
  unsigned int v11; // ebx
  const wchar_t *v12; // rdx
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-71h] BYREF
  __int64 v16; // [rsp+30h] [rbp-69h] BYREF
  char *v17; // [rsp+38h] [rbp-61h]
  unsigned int *v18; // [rsp+40h] [rbp-59h]
  unsigned int v19[6]; // [rsp+48h] [rbp-51h] BYREF
  char v20; // [rsp+60h] [rbp-39h] BYREF

  v18 = a2;
  v16 = 5111808LL;
  v17 = &v20;
  v14 = 0;
  *(_OWORD *)v19 = 0LL;
  BiStringFromGUID(a2, (__int64)&v16);
  v5 = v17;
  v6 = 2;
  BiLogMessage(2LL, L"Opening object %s", v17);
  v7 = BiAcquireBcdSyncMutant(a1 & 1);
  if ( v7 < 0 )
  {
    BiLogMessage(4LL, L"BcdOpenObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v7);
    return v8;
  }
  *a3 = 0LL;
  Handle = 0LL;
  CurrentBootEntryIdentifier = BiOpenKey(a1, L"Objects", 131097LL, &Handle);
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
      CurrentBootEntryIdentifier = BiGetDefaultBootEntryIdentifier(a1, v19);
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
  CurrentBootEntryIdentifier = BiOpenKey(Handle, v5, 983103LL, a3);
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
  BiReleaseBcdSyncMutant(a1 & 1);
  return v11;
}
