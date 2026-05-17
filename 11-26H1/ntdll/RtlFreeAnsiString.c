/*
 * XREFs of RtlFreeAnsiString @ 0x180056B20
 * Callers:
 *     LdrpQuerySxSMUIFile @ 0x180032478 (LdrpQuerySxSMUIFile.c)
 *     RtlIsNameInExpression @ 0x180036670 (RtlIsNameInExpression.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003C8F0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlGetImageFileMachines @ 0x180044D50 (RtlGetImageFileMachines.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180057510 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180058660 (RtlpGetTokenNamedObjectPath.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180070E28 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     EtwpFlushUmLogger @ 0x18007654C (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x180076C98 (EtwpUpdateUmLogger.c)
 *     EtwpInitLoggerContext @ 0x180077550 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x180079258 (EtwpFreeLoggerContext.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 *     RtlpTpIoDllLoaded @ 0x1800B7648 (RtlpTpIoDllLoaded.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800D3C98 (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180111D70 (RtlIsNameInUnUpcasedExpression.c)
 *     LdrpCheckAppDirType @ 0x1801154EC (LdrpCheckAppDirType.c)
 *     RtlpConstructCrossVmObjectPath @ 0x18014611C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 */

void __stdcall RtlFreeAnsiString(PUNICODE_STRING UnicodeString)
{
  wchar_t *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    RtlpSysVolFree((__int64)Buffer);
    *UnicodeString = 0LL;
  }
}
