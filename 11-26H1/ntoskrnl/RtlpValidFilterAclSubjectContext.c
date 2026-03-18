/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x140A5DD80
 * Callers:
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x1402AC0BC (RtlpValidTrustSubjectContext.c)
 *     RtlFindAceByType @ 0x1404330E0 (RtlFindAceByType.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(__int64 a1, __int64 a2)
{
  unsigned __int8 *AceByType; // rax
  __int64 v5; // r8
  int v7; // r8d
  unsigned int i; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      AceByType = RtlFindAceByType(a1, 21, &i);
      if ( !AceByType )
        goto LABEL_3;
      if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
        return 3221225485LL;
      if ( (AceByType[1] & 0x40) != 0 )
        break;
      v7 = *(_DWORD *)(AceByType + 10);
      if ( !v7 )
        v7 = *((unsigned __int16 *)AceByType + 7) - 256;
      if ( v7 || AceByType[9] != 1 || *((_DWORD *)AceByType + 4) )
        return 3221225485LL;
LABEL_3:
      ++i;
      if ( !AceByType )
        return v9;
    }
    if ( !RtlpValidTrustSubjectContext(a2, (__int64)(AceByType + 8), v5, &v9) )
      break;
  }
  return 3221225506LL;
}
