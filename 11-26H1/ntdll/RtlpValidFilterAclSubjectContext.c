/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x180048B34
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x180047AB0 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(__int64 a1, void *a2)
{
  unsigned __int32 v2; // r8d
  unsigned int v3; // ebx
  __int64 v5; // rdi
  unsigned int i; // edx
  unsigned int v8; // ebx
  int v9; // edx
  BOOLEAN DominatesTrust; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+40h] [rbp+18h]
  unsigned __int16 v12; // [rsp+44h] [rbp+1Ch]

  v2 = 0;
  v12 = 256;
  v11 = 0;
  v3 = 0;
  v5 = a1;
  while ( 2 )
  {
    if ( a1 )
    {
      while ( 1 )
      {
        a1 = v5 + 8;
        for ( i = 0; ; ++i )
        {
          if ( i >= *(unsigned __int16 *)(v5 + 4) )
            return v2;
          if ( i >= v3 && *(_BYTE *)a1 == 21 )
            break;
          a1 += *(unsigned __int16 *)(a1 + 2);
        }
        v8 = i;
        if ( !a1 )
          goto LABEL_9;
        if ( (*(_DWORD *)(a1 + 4) & 0xFF000000) != 0 )
          return (unsigned __int32)-1073741811;
        if ( (*(_BYTE *)(a1 + 1) & 0x40) == 0 )
          break;
        DominatesTrust = 0;
        if ( !a2 )
          return (unsigned __int32)-1073741790;
        v2 = RtlSidDominatesForTrust(a2, (PSID)(a1 + 8), &DominatesTrust);
        if ( !DominatesTrust )
          return (unsigned __int32)-1073741790;
        v3 = v8 + 1;
      }
      v9 = *(_DWORD *)(a1 + 10) - v11;
      if ( !v9 )
        v9 = *(unsigned __int16 *)(a1 + 14) - v12;
      if ( !v9 && *(_BYTE *)(a1 + 9) == 1 && !*(_DWORD *)(a1 + 16) )
      {
LABEL_9:
        v3 = v8 + 1;
        continue;
      }
      return (unsigned __int32)-1073741811;
    }
    return v2;
  }
}
