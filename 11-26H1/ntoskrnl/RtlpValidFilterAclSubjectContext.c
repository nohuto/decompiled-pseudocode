/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x140A6AD40
 * Callers:
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x1403AF76C (RtlpValidTrustSubjectContext.c)
 *     RtlFindAceByType @ 0x1404281B0 (RtlFindAceByType.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(PACL Acl, void *a2)
{
  _DWORD *AceByType; // rax
  __int64 v5; // r8
  int v7; // r8d
  ULONG Index; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  for ( Index = 0; ; ++Index )
  {
    while ( 1 )
    {
      AceByType = RtlFindAceByType(Acl, 0x15u, &Index);
      if ( !AceByType )
        goto LABEL_3;
      if ( (AceByType[1] & 0xFF000000) != 0 )
        return 3221225485LL;
      if ( (*((_BYTE *)AceByType + 1) & 0x40) != 0 )
        break;
      v7 = *(_DWORD *)((char *)AceByType + 10);
      if ( !v7 )
        v7 = *((unsigned __int16 *)AceByType + 7) - 256;
      if ( v7 || *((_BYTE *)AceByType + 9) != 1 || AceByType[4] )
        return 3221225485LL;
LABEL_3:
      ++Index;
      if ( !AceByType )
        return v9;
    }
    if ( !RtlpValidTrustSubjectContext(a2, AceByType + 2, v5, (NTSTATUS *)&v9) )
      break;
  }
  return 3221225506LL;
}
