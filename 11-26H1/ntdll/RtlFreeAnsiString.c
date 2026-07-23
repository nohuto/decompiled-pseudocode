/*
 * XREFs of RtlFreeAnsiString @ 0x1800410A0
 * Callers:
 *     LdrpQuerySxSMUIFile @ 0x18001D5D8 (LdrpQuerySxSMUIFile.c)
 *     RtlIsNameInExpression @ 0x1800217D0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180022770 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180026E60 (RtlFormatCurrentUserKeyPath.c)
 *     RtlGetImageFileMachines @ 0x18002F2C0 (RtlGetImageFileMachines.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180041A90 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180042BE0 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpFlushUmLogger @ 0x180064D6C (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x1800654B8 (EtwpUpdateUmLogger.c)
 *     EtwpInitLoggerContext @ 0x180065D70 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x180067A78 (EtwpFreeLoggerContext.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180091278 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 *     RtlpTpIoDllLoaded @ 0x1800B4B68 (RtlpTpIoDllLoaded.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800D20A8 (RtlpCreateIFEOKeyFilterKey.c)
 *     LdrpCheckAppDirType @ 0x180114CCC (LdrpCheckAppDirType.c)
 *     RtlpConstructCrossVmObjectPath @ 0x180145FCC (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 */

void __stdcall RtlFreeAnsiString(PUNICODE_STRING UnicodeString)
{
  wchar_t *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    RtlpSysVolFree(Buffer);
    *UnicodeString = 0LL;
  }
}
