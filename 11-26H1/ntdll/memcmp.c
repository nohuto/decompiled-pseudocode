/*
 * XREFs of memcmp @ 0x1801649D0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1800101D0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800366E8 (RtlpIsNameInExpressionPrivate.c)
 *     RtlFindUnicodeSubstring @ 0x180036C40 (RtlFindUnicodeSubstring.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004FC80 (RtlpWnfProcessCurrentDescriptor.c)
 *     EtwpFindRegistration @ 0x180050B20 (EtwpFindRegistration.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     EtwpFindGuidEntry @ 0x180057C30 (EtwpFindGuidEntry.c)
 *     EtwpRegisterProvider @ 0x180057DE0 (EtwpRegisterProvider.c)
 *     RtlpCompareAces @ 0x180059660 (RtlpCompareAces.c)
 *     RtlEqualSid @ 0x180059860 (RtlEqualSid.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x18005ABA0 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpNormalizeAcl @ 0x18005BB50 (RtlpNormalizeAcl.c)
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 *     RtlpOwnerAcesPresent @ 0x18005D610 (RtlpOwnerAcesPresent.c)
 *     RtlpGenerateInheritedAce @ 0x180060A00 (RtlpGenerateInheritedAce.c)
 *     RtlpIsDuplicateAce @ 0x180061CF0 (RtlpIsDuplicateAce.c)
 *     EtwpInsertRegistration @ 0x18006CFB0 (EtwpInsertRegistration.c)
 *     RtlpCreateWnfNameSubscription @ 0x18006E480 (RtlpCreateWnfNameSubscription.c)
 *     RtlpFindWnfNameSubscription @ 0x18006E6B0 (RtlpFindWnfNameSubscription.c)
 *     EtwpValidateLoggerInfo @ 0x180076A08 (EtwpValidateLoggerInfo.c)
 *     RtlpHpTagAllocateHeap @ 0x180097930 (RtlpHpTagAllocateHeap.c)
 *     RtlpCheckForSameCurdir @ 0x1800A4F40 (RtlpCheckForSameCurdir.c)
 *     RtlEqualUnicodeString @ 0x1800A5A70 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1800A72E0 (RtlPrefixUnicodeString.c)
 *     RtlEqualDomainName @ 0x1800ABC40 (RtlEqualDomainName.c)
 *     RtlPrefixString @ 0x1800CA1A0 (RtlPrefixString.c)
 *     RtlSidDominates @ 0x1800CBD30 (RtlSidDominates.c)
 *     EtwpRegistrationCompare @ 0x1800CD020 (EtwpRegistrationCompare.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800D9A38 (RtlpIsAttributeAceInSacl.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800DA170 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlpCompareProtectedPolicyEntry @ 0x1800E7850 (RtlpCompareProtectedPolicyEntry.c)
 *     RtlSidHashLookup @ 0x1800EC680 (RtlSidHashLookup.c)
 *     EtwpInsertGuidEntry @ 0x180102FDC (EtwpInsertGuidEntry.c)
 *     RtlReplaceSidInSd @ 0x18013D420 (RtlReplaceSidInSd.c)
 *     RtlpStackDbEntryIsEqual @ 0x18015B3F0 (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbSegmentComparitor @ 0x18015B4A0 (RtlpStackDbSegmentComparitor.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
