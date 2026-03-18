/*
 * XREFs of HvpHeaderCheckSum @ 0x140C58720
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x1404B2F8C (HvpGenerateLogEntryHeader.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x14085CFE4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvIsInPlaceBaseBlockValid @ 0x14085F0DC (HvIsInPlaceBaseBlockValid.c)
 *     HvWriteExternal @ 0x140AAA58C (HvWriteExternal.c)
 *     HvWriteHivePrimaryFile @ 0x140AAAADC (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140AAADE0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvHiveStartFileBacked @ 0x140AC226C (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x140ADEAF8 (HvpGetHiveHeader.c)
 *     HvpIsLogFileBaseBlockValid @ 0x140ADFCE8 (HvpIsLogFileBaseBlockValid.c)
 *     HvpLogInvalidLogHeader @ 0x140ADFD54 (HvpLogInvalidLogHeader.c)
 *     HvApplyLogFiles @ 0x140AEB7E4 (HvApplyLogFiles.c)
 *     HvHiveStartMemoryBacked @ 0x140B487A4 (HvHiveStartMemoryBacked.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140C5846C (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpHeaderCheckSum(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  LODWORD(result) = 0;
  v2 = 127LL;
  do
  {
    result = *a1++ ^ (unsigned int)result;
    --v2;
  }
  while ( v2 );
  if ( (_DWORD)result == -1 )
    return 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
