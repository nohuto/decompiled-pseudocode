/*
 * XREFs of memcmp @ 0x1801648D0
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x180021848 (RtlpIsNameInExpressionPrivate.c)
 *     RtlFindUnicodeSubstring @ 0x180021DA0 (RtlFindUnicodeSubstring.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18003A200 (RtlpWnfProcessCurrentDescriptor.c)
 *     EtwpFindRegistration @ 0x18003B0A0 (EtwpFindRegistration.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 *     EtwpFindGuidEntry @ 0x1800421B0 (EtwpFindGuidEntry.c)
 *     EtwpRegisterProvider @ 0x180042360 (EtwpRegisterProvider.c)
 *     RtlpCompareAces @ 0x180043BE0 (RtlpCompareAces.c)
 *     RtlEqualSid @ 0x180043DE0 (RtlEqualSid.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180045120 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpNormalizeAcl @ 0x1800460D0 (RtlpNormalizeAcl.c)
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpOwnerAcesPresent @ 0x180047B90 (RtlpOwnerAcesPresent.c)
 *     RtlpGenerateInheritedAce @ 0x18004AF80 (RtlpGenerateInheritedAce.c)
 *     RtlpIsDuplicateAce @ 0x18004C270 (RtlpIsDuplicateAce.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18005B900 (RtlDeriveCapabilitySidsFromName.c)
 *     EtwpValidateLoggerInfo @ 0x180065228 (EtwpValidateLoggerInfo.c)
 *     EtwpInsertRegistration @ 0x18008D400 (EtwpInsertRegistration.c)
 *     RtlpCreateWnfNameSubscription @ 0x18008E8D0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpFindWnfNameSubscription @ 0x18008EB00 (RtlpFindWnfNameSubscription.c)
 *     RtlpHpTagAllocateHeap @ 0x180096A80 (RtlpHpTagAllocateHeap.c)
 *     RtlpCheckForSameCurdir @ 0x1800A4070 (RtlpCheckForSameCurdir.c)
 *     RtlEqualUnicodeString @ 0x1800A4BA0 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1800A6410 (RtlPrefixUnicodeString.c)
 *     RtlEqualDomainName @ 0x1800AAD70 (RtlEqualDomainName.c)
 *     RtlPrefixString @ 0x1800C7800 (RtlPrefixString.c)
 *     RtlSidDominates @ 0x1800C94A0 (RtlSidDominates.c)
 *     EtwpRegistrationCompare @ 0x1800CA790 (EtwpRegistrationCompare.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800D69F8 (RtlpIsAttributeAceInSacl.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800D7130 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlpCompareProtectedPolicyEntry @ 0x1800E62B0 (RtlpCompareProtectedPolicyEntry.c)
 *     RtlSidHashLookup @ 0x1800EBA70 (RtlSidHashLookup.c)
 *     EtwpInsertGuidEntry @ 0x18010235C (EtwpInsertGuidEntry.c)
 *     RtlReplaceSidInSd @ 0x18013D2D0 (RtlReplaceSidInSd.c)
 *     RtlpStackDbEntryIsEqual @ 0x18015B2BC (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbSegmentComparitor @ 0x18015B36C (RtlpStackDbSegmentComparitor.c)
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
