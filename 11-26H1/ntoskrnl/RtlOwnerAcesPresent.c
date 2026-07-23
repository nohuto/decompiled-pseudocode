/*
 * XREFs of RtlOwnerAcesPresent @ 0x140411B90
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  _WORD *SeOwnerRightsSid; // rbp
  PACL v2; // rbx
  unsigned int AceCount; // esi
  unsigned int i; // edi
  UCHAR AclRevision; // cl
  USHORT *p_AceCount; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( pAcl )
  {
    v2 = pAcl + 1;
    AceCount = pAcl->AceCount;
    for ( i = 0; ; ++i )
    {
      if ( i >= AceCount )
        return 0;
      if ( (v2->Sbz1 & 8) != 0 )
        goto LABEL_14;
      AclRevision = v2->AclRevision;
      if ( v2->AclRevision >= 5u && AclRevision <= 8u || (unsigned __int8)(AclRevision - 11) <= 1u )
      {
LABEL_20:
        p_AceCount = (USHORT *)((char *)&v2[2 * (*(_DWORD *)&v2[1].AclRevision & 1)]
                              + ((8LL * (*(_DWORD *)&v2[1].AclRevision & 2)) | 0xC));
        goto LABEL_11;
      }
      if ( AclRevision >= 0xFu )
        break;
      if ( AclRevision == 4 )
      {
        p_AceCount = &v2[1].AceCount;
        goto LABEL_11;
      }
      if ( AclRevision >= 0xBu )
        goto LABEL_22;
LABEL_10:
      p_AceCount = (USHORT *)&v2[1];
LABEL_11:
      if ( p_AceCount
        && *p_AceCount == *SeOwnerRightsSid
        && !memcmp(p_AceCount, SeOwnerRightsSid, 4 * ((unsigned __int64)*p_AceCount >> 8) + 8) )
      {
        return 1;
      }
LABEL_14:
      v2 = (PACL)((char *)v2 + v2->AclSize);
    }
    if ( AclRevision <= 0x10u )
      goto LABEL_20;
LABEL_22:
    if ( (unsigned __int8)(AclRevision - 13) > 1u )
      goto LABEL_14;
    goto LABEL_10;
  }
  return 0;
}
