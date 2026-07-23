/*
 * XREFs of BcdQueryObject @ 0x14077CA50
 * Callers:
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E6744 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E6954 (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14089A658 (BiUpdateObjectReferenceInEfiEntry.c)
 *     PopBcdEstablishResumeObject @ 0x140B6BBB0 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1409A4F60 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiGetObjectDescription @ 0x1409A6BE0 (BiGetObjectDescription.c)
 */

NTSTATUS __cdecl BcdQueryObject(
        HANDLE BcdObjectHandle,
        ULONG BcdVersion,
        BCD_OBJECT_DESCRIPTION Description,
        PGUID Identifier)
{
  HANDLE v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  NTSTATUS v10; // r8d
  NTSTATUS ObjectIdentifier; // ebx

  v6 = BcdObjectHandle;
  if ( !*(_QWORD *)&Description )
  {
    if ( Identifier )
      goto LABEL_3;
    return -1073741811;
  }
  if ( BcdVersion != 1 )
    return -1073741811;
LABEL_3:
  LOBYTE(BcdObjectHandle) = (unsigned __int8)BcdObjectHandle & 1;
  v7 = BiAcquireBcdSyncMutant(BcdObjectHandle);
  v9 = v7;
  if ( (v7 & 0x80000000) == 0 )
  {
    ObjectIdentifier = 0;
    if ( !*(_QWORD *)&Description
      || (ObjectIdentifier = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BiGetObjectDescription)(
                               v6,
                               Description,
                               v7),
          ObjectIdentifier >= 0) )
    {
      if ( Identifier )
        ObjectIdentifier = BiGetObjectIdentifier(v6, Identifier, v9);
    }
    LOBYTE(v8) = (unsigned __int8)v6 & 1;
    BiReleaseBcdSyncMutant(v8);
    return ObjectIdentifier;
  }
  else
  {
    BiLogMessage(4LL, L"BcdQueryObject: Failed to acquire BCD sync mutant. Status: %x", v7);
    return v10;
  }
}
