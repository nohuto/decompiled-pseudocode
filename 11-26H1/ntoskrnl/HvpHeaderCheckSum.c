/*
 * XREFs of HvpHeaderCheckSum @ 0x140C5E720
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x1404AC60C (HvpGenerateLogEntryHeader.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1408632D4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1408653CC (HvIsInPlaceBaseBlockValid.c)
 *     HvWriteExternal @ 0x140AA7B6C (HvWriteExternal.c)
 *     HvWriteHivePrimaryFile @ 0x140AA80BC (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140AA83C0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvHiveStartFileBacked @ 0x140AC430C (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x140ADBCE8 (HvpGetHiveHeader.c)
 *     HvpIsLogFileBaseBlockValid @ 0x140ADD528 (HvpIsLogFileBaseBlockValid.c)
 *     HvpLogInvalidLogHeader @ 0x140ADD594 (HvpLogInvalidLogHeader.c)
 *     HvApplyLogFiles @ 0x140AEE6F0 (HvApplyLogFiles.c)
 *     HvHiveStartMemoryBacked @ 0x140B4A534 (HvHiveStartMemoryBacked.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140C5E46C (HvSnapshotHiveToOffsetArray.c)
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
